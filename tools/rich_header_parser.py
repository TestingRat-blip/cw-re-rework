import struct, sys, collections

# prodId -> tool name (from the well-known Rich header product-id table)
PRODID = {
 0x00:'Unknown', 0x01:'Import0', 0x02:'Linker510', 0x03:'Cvtomf510', 0x04:'Linker600',
 0x05:'Cvtomf600', 0x06:'Cvtres500', 0x07:'Utc11_Basic', 0x08:'Utc11_C', 0x09:'Utc12_Basic',
 0x0a:'Utc12_C', 0x0b:'Utc12_CPP', 0x0c:'AliasObj60', 0x0d:'VisualBasic60', 0x0e:'Masm613',
 0x0f:'Masm710', 0x10:'Linker511', 0x11:'Cvtomf511', 0x12:'Masm614', 0x13:'Linker512',
 0x14:'Cvtomf512', 0x15:'Utc12_C_Std', 0x16:'Utc12_CPP_Std', 0x17:'Utc12_C_Book',
 0x18:'Utc12_CPP_Book', 0x19:'Implib700', 0x1a:'Cvtomf700', 0x1b:'Utc13_Basic',
 0x1c:'Utc13_C', 0x1d:'Utc13_CPP', 0x1e:'Linker610', 0x1f:'Cvtomf610', 0x20:'Linker601',
 0x21:'Cvtomf601', 0x22:'Utc13_C_Std', 0x23:'Utc13_CPP_Std', 0x24:'Cvtpgd1300',
 0x25:'Linker620', 0x26:'Cvtomf620', 0x27:'AliasObj70', 0x28:'Linker621', 0x29:'Cvtomf621',
 0x2a:'Masm615', 0x2b:'Utc13_LTCG_C', 0x2c:'Utc13_LTCG_CPP', 0x2d:'Masm620',
 0x2e:'ILAsm100', 0x2f:'Utc12_2_Basic', 0x30:'Utc12_2_C', 0x31:'Utc12_2_CPP',
 0x32:'Utc12_2_C_Std', 0x33:'Utc12_2_CPP_Std', 0x34:'Utc12_2_C_Book',
 0x35:'Utc12_2_CPP_Book', 0x36:'Implib622', 0x37:'Cvtomf622', 0x38:'Cvtres501',
 0x39:'Utc13_C_Book', 0x3a:'Utc13_CPP_Book', 0x3b:'AliasObj71', 0x3c:'AliasObj71_ARM',
 0x3d:'Cvtpgd1301', 0x3e:'Utc13_2_Basic', 0x3f:'Utc13_2_C', 0x40:'Utc13_2_CPP',
 0x41:'Linker622', 0x42:'Linker700', 0x43:'Export622', 0x44:'Export700', 0x45:'Masm700',
 0x46:'Utc13_POGO_I_C', 0x47:'Utc13_POGO_I_CPP', 0x48:'Utc13_POGO_O_C',
 0x49:'Utc13_POGO_O_CPP', 0x4a:'Cvtres700', 0x4b:'Cvtres710p', 0x4c:'Linker710p',
 0x4d:'Cvtomf710p', 0x4e:'Export710p', 0x4f:'Implib710p', 0x50:'Masm710p',
 0x51:'Utc1310p_C', 0x52:'Utc1310p_CPP', 0x53:'Utc1310p_C_Std', 0x54:'Utc1310p_CPP_Std',
 0x55:'Utc1310p_LTCG_C', 0x56:'Utc1310p_LTCG_CPP', 0x57:'Utc1310p_POGO_I_C',
 0x58:'Utc1310p_POGO_I_CPP', 0x59:'Utc1310p_POGO_O_C', 0x5a:'Utc1310p_POGO_O_CPP',
 0x5b:'Linker624', 0x5c:'Cvtomf624', 0x5d:'Export624', 0x5e:'Implib624', 0x5f:'Linker710',
 0x60:'Cvtomf710', 0x61:'Export710', 0x62:'Implib710', 0x63:'Cvtres710', 0x64:'Utc1310_C',
 0x65:'Utc1310_CPP', 0x66:'Utc1310_C_Std', 0x67:'Utc1310_CPP_Std', 0x68:'Utc1310_LTCG_C',
 0x69:'Utc1310_LTCG_CPP', 0x6a:'Utc1310_POGO_I_C', 0x6b:'Utc1310_POGO_I_CPP',
 0x6c:'Utc1310_POGO_O_C', 0x6d:'Utc1310_POGO_O_CPP', 0x6e:'AliasObj710',
 0x6f:'AliasObj710_ARM', 0x70:'Cvtpgd1310', 0x71:'Cvtpgd1310_ARM', 0x72:'Utc1400_C',
 0x73:'Utc1400_CPP', 0x74:'Utc1400_C_Std', 0x75:'Utc1400_CPP_Std', 0x76:'Utc1400_LTCG_C',
 0x77:'Utc1400_LTCG_CPP', 0x78:'Utc1400_POGO_I_C', 0x79:'Utc1400_POGO_I_CPP',
 0x7a:'Utc1400_POGO_O_C', 0x7b:'Utc1400_POGO_O_CPP', 0x7c:'Cvtpgd1400',
 0x7d:'Linker800', 0x7e:'Cvtomf800', 0x7f:'Export800', 0x80:'Implib800', 0x81:'Cvtres800',
 0x82:'Masm800', 0x83:'AliasObj800', 0x84:'PhoenixPrerelease', 0x85:'Utc1400_CVTCIL_C',
 0x86:'Utc1400_CVTCIL_CPP', 0x87:'Utc1400_LTCG_MSIL', 0x88:'Utc1500_C', 0x89:'Utc1500_CPP',
 0x8a:'Utc1500_C_Std', 0x8b:'Utc1500_CPP_Std', 0x8c:'Utc1500_CVTCIL_C',
 0x8d:'Utc1500_CVTCIL_CPP', 0x8e:'Utc1500_LTCG_C', 0x8f:'Utc1500_LTCG_CPP',
 0x90:'Utc1500_LTCG_MSIL', 0x91:'Utc1500_POGO_I_C', 0x92:'Utc1500_POGO_I_CPP',
 0x93:'Utc1500_POGO_O_C', 0x94:'Utc1500_POGO_O_CPP', 0x95:'Cvtpgd1500',
 0x96:'Linker900', 0x97:'Export900', 0x98:'Implib900', 0x99:'Cvtres900', 0x9a:'Masm900',
 0x9b:'AliasObj900', 0x9c:'Resource900', 0x9d:'AliasObj1000', 0x9e:'Cvtpgd1600',
 0x9f:'Cvtres1000', 0xa0:'Export1000', 0xa1:'Implib1000', 0xa2:'Linker1000',
 0xa3:'Masm1000', 0xa4:'Phx1600_C', 0xa5:'Phx1600_CPP', 0xa6:'Phx1600_CVTCIL_C',
 0xa7:'Phx1600_CVTCIL_CPP', 0xa8:'Phx1600_LTCG_C', 0xa9:'Phx1600_LTCG_CPP',
 0xaa:'Phx1600_LTCG_MSIL', 0xab:'Phx1600_POGO_I_C', 0xac:'Phx1600_POGO_I_CPP',
 0xad:'Phx1600_POGO_O_C', 0xae:'Phx1600_POGO_O_CPP', 0xaf:'Utc1600_C',
 0xb0:'Utc1600_CPP', 0xb1:'Utc1600_CVTCIL_C', 0xb2:'Utc1600_CVTCIL_CPP',
 0xb3:'Utc1600_LTCG_C', 0xb4:'Utc1600_LTCG_CPP', 0xb5:'Utc1600_LTCG_MSIL',
 0xb6:'Utc1600_POGO_I_C', 0xb7:'Utc1600_POGO_I_CPP', 0xb8:'Utc1600_POGO_O_C',
 0xb9:'Utc1600_POGO_O_CPP', 0xba:'AliasObj1010', 0xbb:'Cvtpgd1610', 0xbc:'Cvtres1010',
 0xbd:'Export1010', 0xbe:'Implib1010', 0xbf:'Linker1010', 0xc0:'Masm1010',
 0xc1:'Utc1610_C', 0xc2:'Utc1610_CPP', 0xc3:'Utc1610_CVTCIL_C', 0xc4:'Utc1610_CVTCIL_CPP',
 0xc5:'Utc1610_LTCG_C', 0xc6:'Utc1610_LTCG_CPP', 0xc7:'Utc1610_LTCG_MSIL',
 0xc8:'Utc1610_POGO_I_C', 0xc9:'Utc1610_POGO_I_CPP', 0xca:'Utc1610_POGO_O_C',
 0xcb:'Utc1610_POGO_O_CPP', 0xcc:'AliasObj1100', 0xcd:'Cvtpgd1700', 0xce:'Cvtres1100',
 0xcf:'Export1100', 0xd0:'Implib1100', 0xd1:'Linker1100', 0xd2:'Masm1100',
 0xd3:'Utc1700_C', 0xd4:'Utc1700_CPP', 0xd5:'Utc1700_CVTCIL_C', 0xd6:'Utc1700_CVTCIL_CPP',
 0xd7:'Utc1700_LTCG_C', 0xd8:'Utc1700_LTCG_CPP', 0xd9:'Utc1700_LTCG_MSIL',
 0xda:'Utc1700_POGO_I_C', 0xdb:'Utc1700_POGO_I_CPP', 0xdc:'Utc1700_POGO_O_C',
 0xdd:'Utc1700_POGO_O_CPP',
}

def rich(path):
    d = open(path,'rb').read()
    e_lfanew = struct.unpack_from('<I', d, 0x3c)[0]
    stub = d[:e_lfanew]
    ri = stub.rfind(b'Rich')
    if ri < 0:
        return None
    key = struct.unpack_from('<I', stub, ri+4)[0]
    # find DanS backwards
    di = stub.rfind(b'\x44\x61\x6eS')  # not xored? it's xored with key
    # DanS is stored xored: DanS ^ key
    dans = struct.pack('<I', 0x536e6144 ^ key)
    di = stub.find(dans)
    entries = []
    for off in range(di+16, ri, 8):
        cid, cnt = struct.unpack_from('<II', stub, off)
        cid ^= key; cnt ^= key
        entries.append((cid>>16, cid & 0xffff, cnt))
    # linker version from optional header
    pe = e_lfanew
    machine = struct.unpack_from('<H', d, pe+4)[0]
    tstamp = struct.unpack_from('<I', d, pe+8)[0]
    lmaj, lmin = d[pe+24+2], d[pe+24+3]
    return machine, tstamp, lmaj, lmin, key, entries

import datetime
for p in sys.argv[1:]:
    r = rich(p)
    print('='*70)
    print(p)
    if not r:
        print('  no Rich header'); continue
    machine, tstamp, lmaj, lmin, key, entries = r
    print('  machine=0x%04x  linker=%d.%d  timestamp=%d (%s UTC)  richkey=%08x' %
          (machine, lmaj, lmin, tstamp, datetime.datetime.fromtimestamp(tstamp, datetime.UTC), key))
    print('  %-6s %-24s %-8s %s' % ('prodId','tool','build','count'))
    for pid, bld, cnt in sorted(entries, key=lambda x:(-x[2])):
        print('  0x%03x  %-24s %-8d %d' % (pid, PRODID.get(pid,'?'), bld, cnt))
