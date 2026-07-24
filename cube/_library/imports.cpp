// imports (_library) -- cube. 127 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "imports.h"

/* MSVCR110.DLL::free @ 004d6c30  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x004d6c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}


/* ZLIB1.DLL::inflate @ 006271f8  kind=lib  attributed-by=import-ns  size=6 */

void inflate(void)

{
                    /* WARNING: Could not recover jumptable at 0x006271f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  inflate();
  return;
}


/* ZLIB1.DLL::inflateEnd @ 006271fe  kind=lib  attributed-by=import-ns  size=6 */

void inflateEnd(void)

{
                    /* WARNING: Could not recover jumptable at 0x006271fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  inflateEnd();
  return;
}


/* ZLIB1.DLL::compress @ 00627204  kind=lib  attributed-by=import-ns  size=6 */

void compress(void)

{
                    /* WARNING: Could not recover jumptable at 0x00627204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  compress();
  return;
}


/* ZLIB1.DLL::inflateInit_ @ 0062720a  kind=lib  attributed-by=import-ns  size=6 */

void inflateInit_(void)

{
                    /* WARNING: Could not recover jumptable at 0x0062720a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  inflateInit_();
  return;
}


/* DINPUT8.DLL::DirectInput8Create @ 00627210  kind=lib  attributed-by=import-ns  size=6 */

void DirectInput8Create(void)

{
                    /* WARNING: Could not recover jumptable at 0x00627210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DirectInput8Create();
  return;
}


/* D3D9.DLL::Direct3DCreate9 @ 00627216  kind=lib  attributed-by=import-ns  size=6 */

void Direct3DCreate9(void)

{
                    /* WARNING: Could not recover jumptable at 0x00627216. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Direct3DCreate9();
  return;
}


/* WS2_32.DLL::closesocket @ 0062721c  kind=lib  attributed-by=import-ns  size=6 */

int closesocket(SOCKET s)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0062721c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = closesocket(s);
  return iVar1;
}


/* WS2_32.DLL::connect @ 00627222  kind=lib  attributed-by=import-ns  size=6 */

int connect(SOCKET s,sockaddr *name,int namelen)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00627222. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = connect(s,name,namelen);
  return iVar1;
}


/* WS2_32.DLL::htons @ 00627228  kind=lib  attributed-by=import-ns  size=6 */

u_short htons(u_short hostshort)

{
  u_short uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00627228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = htons(hostshort);
  return uVar1;
}


/* WS2_32.DLL::inet_addr @ 0062722e  kind=lib  attributed-by=import-ns  size=6 */

ulong inet_addr(char *cp)

{
  ulong uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0062722e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = inet_addr(cp);
  return uVar1;
}


/* WS2_32.DLL::recv @ 00627234  kind=lib  attributed-by=import-ns  size=6 */

int recv(SOCKET s,char *buf,int len,int flags)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00627234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = recv(s,buf,len,flags);
  return iVar1;
}


/* WS2_32.DLL::send @ 0062723a  kind=lib  attributed-by=import-ns  size=6 */

int send(SOCKET s,char *buf,int len,int flags)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0062723a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = send(s,buf,len,flags);
  return iVar1;
}


/* WS2_32.DLL::socket @ 00627240  kind=lib  attributed-by=import-ns  size=6 */

SOCKET socket(int af,int type,int protocol)

{
  SOCKET SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00627240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = socket(af,type,protocol);
  return SVar1;
}


/* WS2_32.DLL::gethostbyname @ 00627246  kind=lib  attributed-by=import-ns  size=6 */

hostent * gethostbyname(char *name)

{
  hostent *phVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00627246. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  phVar1 = gethostbyname(name);
  return phVar1;
}


/* WS2_32.DLL::WSAStartup @ 0062724c  kind=lib  attributed-by=import-ns  size=6 */

int WSAStartup(WORD wVersionRequired,LPWSADATA lpWSAData)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0062724c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = WSAStartup(wVersionRequired,lpWSAData);
  return iVar1;
}


/* WS2_32.DLL::WSACleanup @ 00627252  kind=lib  attributed-by=import-ns  size=6 */

int WSACleanup(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00627252. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = WSACleanup();
  return iVar1;
}


/* KERNEL32.DLL::Sleep @ 0068d41c  kind=lib  attributed-by=import-ns  size=6 */

void Sleep(DWORD dwMilliseconds)

{
                    /* WARNING: Could not recover jumptable at 0x0068d41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Sleep(dwMilliseconds);
  return;
}


/* KERNEL32.DLL::DeleteFileA @ 0068d422  kind=lib  attributed-by=import-ns  size=6 */

BOOL DeleteFileA(LPCSTR lpFileName)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d422. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteFileA(lpFileName);
  return BVar1;
}


/* KERNEL32.DLL::LocalFree @ 0068d428  kind=lib  attributed-by=import-ns  size=6 */

HLOCAL LocalFree(HLOCAL hMem)

{
  HLOCAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LocalFree(hMem);
  return pvVar1;
}


/* KERNEL32.DLL::AreFileApisANSI @ 0068d42e  kind=lib  attributed-by=import-ns  size=6 */

BOOL AreFileApisANSI(void)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d42e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = AreFileApisANSI();
  return BVar1;
}


/* KERNEL32.DLL::GetSystemTime @ 0068d434  kind=lib  attributed-by=import-ns  size=6 */

void GetSystemTime(LPSYSTEMTIME lpSystemTime)

{
                    /* WARNING: Could not recover jumptable at 0x0068d434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetSystemTime(lpSystemTime);
  return;
}


/* KERNEL32.DLL::GetTempPathA @ 0068d43a  kind=lib  attributed-by=import-ns  size=6 */

DWORD GetTempPathA(DWORD nBufferLength,LPSTR lpBuffer)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d43a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetTempPathA(nBufferLength,lpBuffer);
  return DVar1;
}


/* KERNEL32.DLL::GetCurrentProcessId @ 0068d440  kind=lib  attributed-by=import-ns  size=6 */

DWORD GetCurrentProcessId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentProcessId();
  return DVar1;
}


/* KERNEL32.DLL::DeleteFileW @ 0068d446  kind=lib  attributed-by=import-ns  size=6 */

BOOL DeleteFileW(LPCWSTR lpFileName)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d446. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteFileW(lpFileName);
  return BVar1;
}


/* KERNEL32.DLL::CloseHandle @ 0068d44c  kind=lib  attributed-by=import-ns  size=6 */

BOOL CloseHandle(HANDLE hObject)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CloseHandle(hObject);
  return BVar1;
}


/* KERNEL32.DLL::GetVersionExA @ 0068d452  kind=lib  attributed-by=import-ns  size=6 */

BOOL GetVersionExA(LPOSVERSIONINFOA lpVersionInformation)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d452. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetVersionExA(lpVersionInformation);
  return BVar1;
}


/* KERNEL32.DLL::GetFileAttributesExW @ 0068d45e  kind=lib  attributed-by=import-ns  size=6 */

BOOL GetFileAttributesExW
               (LPCWSTR lpFileName,GET_FILEEX_INFO_LEVELS fInfoLevelId,LPVOID lpFileInformation)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d45e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetFileAttributesExW(lpFileName,fInfoLevelId,lpFileInformation);
  return BVar1;
}


/* KERNEL32.DLL::GetSystemInfo @ 0068d464  kind=lib  attributed-by=import-ns  size=6 */

void GetSystemInfo(LPSYSTEM_INFO lpSystemInfo)

{
                    /* WARNING: Could not recover jumptable at 0x0068d464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetSystemInfo(lpSystemInfo);
  return;
}


/* KERNEL32.DLL::CreateFileMappingW @ 0068d470  kind=lib  attributed-by=import-ns  size=6 */

HANDLE CreateFileMappingW(HANDLE hFile,LPSECURITY_ATTRIBUTES lpFileMappingAttributes,DWORD flProtect
                         ,DWORD dwMaximumSizeHigh,DWORD dwMaximumSizeLow,LPCWSTR lpName)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateFileMappingW(hFile,lpFileMappingAttributes,flProtect,dwMaximumSizeHigh,
                              dwMaximumSizeLow,lpName);
  return pvVar1;
}


/* KERNEL32.DLL::LoadLibraryA @ 0068d47c  kind=lib  attributed-by=import-ns  size=6 */

HMODULE LoadLibraryA(LPCSTR lpLibFileName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadLibraryA(lpLibFileName);
  return pHVar1;
}


/* KERNEL32.DLL::LockFileEx @ 0068d488  kind=lib  attributed-by=import-ns  size=6 */

BOOL LockFileEx(HANDLE hFile,DWORD dwFlags,DWORD dwReserved,DWORD nNumberOfBytesToLockLow,
               DWORD nNumberOfBytesToLockHigh,LPOVERLAPPED lpOverlapped)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = LockFileEx(hFile,dwFlags,dwReserved,nNumberOfBytesToLockLow,nNumberOfBytesToLockHigh,
                     lpOverlapped);
  return BVar1;
}


/* KERNEL32.DLL::GetProcAddress @ 0068d494  kind=lib  attributed-by=import-ns  size=6 */

FARPROC GetProcAddress(HMODULE hModule,LPCSTR lpProcName)

{
  FARPROC pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = GetProcAddress(hModule,lpProcName);
  return pFVar1;
}


/* KERNEL32.DLL::GetLastError @ 0068d49a  kind=lib  attributed-by=import-ns  size=6 */

DWORD GetLastError(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d49a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetLastError();
  return DVar1;
}


/* KERNEL32.DLL::GetTempPathW @ 0068d4a0  kind=lib  attributed-by=import-ns  size=6 */

DWORD GetTempPathW(DWORD nBufferLength,LPWSTR lpBuffer)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d4a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetTempPathW(nBufferLength,lpBuffer);
  return DVar1;
}


/* KERNEL32.DLL::FlushFileBuffers @ 0068d4a6  kind=lib  attributed-by=import-ns  size=6 */

BOOL FlushFileBuffers(HANDLE hFile)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d4a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FlushFileBuffers(hFile);
  return BVar1;
}


/* KERNEL32.DLL::MultiByteToWideChar @ 0068d4ac  kind=lib  attributed-by=import-ns  size=6 */

int MultiByteToWideChar(UINT CodePage,DWORD dwFlags,LPCSTR lpMultiByteStr,int cbMultiByte,
                       LPWSTR lpWideCharStr,int cchWideChar)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d4ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MultiByteToWideChar(CodePage,dwFlags,lpMultiByteStr,cbMultiByte,lpWideCharStr,cchWideChar)
  ;
  return iVar1;
}


/* KERNEL32.DLL::CreateFileW @ 0068d4b2  kind=lib  attributed-by=import-ns  size=6 */

HANDLE CreateFileW(LPCWSTR lpFileName,DWORD dwDesiredAccess,DWORD dwShareMode,
                  LPSECURITY_ATTRIBUTES lpSecurityAttributes,DWORD dwCreationDisposition,
                  DWORD dwFlagsAndAttributes,HANDLE hTemplateFile)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d4b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateFileW(lpFileName,dwDesiredAccess,dwShareMode,lpSecurityAttributes,
                       dwCreationDisposition,dwFlagsAndAttributes,hTemplateFile);
  return pvVar1;
}


/* KERNEL32.DLL::ReadFile @ 0068d4b8  kind=lib  attributed-by=import-ns  size=6 */

BOOL ReadFile(HANDLE hFile,LPVOID lpBuffer,DWORD nNumberOfBytesToRead,LPDWORD lpNumberOfBytesRead,
             LPOVERLAPPED lpOverlapped)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ReadFile(hFile,lpBuffer,nNumberOfBytesToRead,lpNumberOfBytesRead,lpOverlapped);
  return BVar1;
}


/* KERNEL32.DLL::GetFileAttributesW @ 0068d4be  kind=lib  attributed-by=import-ns  size=6 */

DWORD GetFileAttributesW(LPCWSTR lpFileName)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d4be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileAttributesW(lpFileName);
  return DVar1;
}


/* KERNEL32.DLL::GetFileAttributesA @ 0068d4d0  kind=lib  attributed-by=import-ns  size=6 */

DWORD GetFileAttributesA(LPCSTR lpFileName)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileAttributesA(lpFileName);
  return DVar1;
}


/* KERNEL32.DLL::FormatMessageW @ 0068d4dc  kind=lib  attributed-by=import-ns  size=6 */

DWORD FormatMessageW(DWORD dwFlags,LPCVOID lpSource,DWORD dwMessageId,DWORD dwLanguageId,
                    LPWSTR lpBuffer,DWORD nSize,va_list *Arguments)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d4dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = FormatMessageW(dwFlags,lpSource,dwMessageId,dwLanguageId,lpBuffer,nSize,Arguments);
  return DVar1;
}


/* KERNEL32.DLL::LoadLibraryW @ 0068d4e2  kind=lib  attributed-by=import-ns  size=6 */

HMODULE LoadLibraryW(LPCWSTR lpLibFileName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d4e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadLibraryW(lpLibFileName);
  return pHVar1;
}


/* KERNEL32.DLL::WideCharToMultiByte @ 0068d4e8  kind=lib  attributed-by=import-ns  size=6 */

int WideCharToMultiByte(UINT CodePage,DWORD dwFlags,LPCWSTR lpWideCharStr,int cchWideChar,
                       LPSTR lpMultiByteStr,int cbMultiByte,LPCSTR lpDefaultChar,
                       LPBOOL lpUsedDefaultChar)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d4e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = WideCharToMultiByte(CodePage,dwFlags,lpWideCharStr,cchWideChar,lpMultiByteStr,cbMultiByte,
                              lpDefaultChar,lpUsedDefaultChar);
  return iVar1;
}


/* KERNEL32.DLL::WriteFile @ 0068d4ee  kind=lib  attributed-by=import-ns  size=6 */

BOOL WriteFile(HANDLE hFile,LPCVOID lpBuffer,DWORD nNumberOfBytesToWrite,
              LPDWORD lpNumberOfBytesWritten,LPOVERLAPPED lpOverlapped)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d4ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = WriteFile(hFile,lpBuffer,nNumberOfBytesToWrite,lpNumberOfBytesWritten,lpOverlapped);
  return BVar1;
}


/* KERNEL32.DLL::FormatMessageA @ 0068d4f4  kind=lib  attributed-by=import-ns  size=6 */

DWORD FormatMessageA(DWORD dwFlags,LPCVOID lpSource,DWORD dwMessageId,DWORD dwLanguageId,
                    LPSTR lpBuffer,DWORD nSize,va_list *Arguments)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d4f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = FormatMessageA(dwFlags,lpSource,dwMessageId,dwLanguageId,lpBuffer,nSize,Arguments);
  return DVar1;
}


/* KERNEL32.DLL::GetSystemTimeAsFileTime @ 0068d4fa  kind=lib  attributed-by=import-ns  size=6 */

void GetSystemTimeAsFileTime(LPFILETIME lpSystemTimeAsFileTime)

{
                    /* WARNING: Could not recover jumptable at 0x0068d4fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetSystemTimeAsFileTime(lpSystemTimeAsFileTime);
  return;
}


/* KERNEL32.DLL::UnlockFileEx @ 0068d506  kind=lib  attributed-by=import-ns  size=6 */

BOOL UnlockFileEx(HANDLE hFile,DWORD dwReserved,DWORD nNumberOfBytesToUnlockLow,
                 DWORD nNumberOfBytesToUnlockHigh,LPOVERLAPPED lpOverlapped)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d506. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UnlockFileEx(hFile,dwReserved,nNumberOfBytesToUnlockLow,nNumberOfBytesToUnlockHigh,
                       lpOverlapped);
  return BVar1;
}


/* KERNEL32.DLL::GetTickCount @ 0068d50c  kind=lib  attributed-by=import-ns  size=6 */

DWORD GetTickCount(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d50c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetTickCount();
  return DVar1;
}


/* KERNEL32.DLL::LockFile @ 0068d518  kind=lib  attributed-by=import-ns  size=6 */

BOOL LockFile(HANDLE hFile,DWORD dwFileOffsetLow,DWORD dwFileOffsetHigh,
             DWORD nNumberOfBytesToLockLow,DWORD nNumberOfBytesToLockHigh)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = LockFile(hFile,dwFileOffsetLow,dwFileOffsetHigh,nNumberOfBytesToLockLow,
                   nNumberOfBytesToLockHigh);
  return BVar1;
}


/* KERNEL32.DLL::UnlockFile @ 0068d51e  kind=lib  attributed-by=import-ns  size=6 */

BOOL UnlockFile(HANDLE hFile,DWORD dwFileOffsetLow,DWORD dwFileOffsetHigh,
               DWORD nNumberOfBytesToUnlockLow,DWORD nNumberOfBytesToUnlockHigh)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d51e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UnlockFile(hFile,dwFileOffsetLow,dwFileOffsetHigh,nNumberOfBytesToUnlockLow,
                     nNumberOfBytesToUnlockHigh);
  return BVar1;
}


/* KERNEL32.DLL::QueryPerformanceCounter @ 0068d52a  kind=lib  attributed-by=import-ns  size=6 */

BOOL QueryPerformanceCounter(LARGE_INTEGER *lpPerformanceCount)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d52a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = QueryPerformanceCounter(lpPerformanceCount);
  return BVar1;
}


/* KERNEL32.DLL::FreeLibrary @ 0068d53c  kind=lib  attributed-by=import-ns  size=6 */

BOOL FreeLibrary(HMODULE hLibModule)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d53c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FreeLibrary(hLibModule);
  return BVar1;
}


/* KERNEL32.DLL::SetEndOfFile @ 0068d542  kind=lib  attributed-by=import-ns  size=6 */

BOOL SetEndOfFile(HANDLE hFile)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d542. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetEndOfFile(hFile);
  return BVar1;
}


/* KERNEL32.DLL::UnmapViewOfFile @ 0068d548  kind=lib  attributed-by=import-ns  size=6 */

BOOL UnmapViewOfFile(LPCVOID lpBaseAddress)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UnmapViewOfFile(lpBaseAddress);
  return BVar1;
}


/* KERNEL32.DLL::MapViewOfFile @ 0068d54e  kind=lib  attributed-by=import-ns  size=6 */

LPVOID MapViewOfFile(HANDLE hFileMappingObject,DWORD dwDesiredAccess,DWORD dwFileOffsetHigh,
                    DWORD dwFileOffsetLow,SIZE_T dwNumberOfBytesToMap)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d54e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = MapViewOfFile(hFileMappingObject,dwDesiredAccess,dwFileOffsetHigh,dwFileOffsetLow,
                         dwNumberOfBytesToMap);
  return pvVar1;
}


/* KERNEL32.DLL::SetFilePointer @ 0068d554  kind=lib  attributed-by=import-ns  size=6 */

DWORD SetFilePointer(HANDLE hFile,LONG lDistanceToMove,PLONG lpDistanceToMoveHigh,DWORD dwMoveMethod
                    )

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = SetFilePointer(hFile,lDistanceToMove,lpDistanceToMoveHigh,dwMoveMethod);
  return DVar1;
}


/* KERNEL32.DLL::GetFileSize @ 0068d560  kind=lib  attributed-by=import-ns  size=6 */

DWORD GetFileSize(HANDLE hFile,LPDWORD lpFileSizeHigh)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileSize(hFile,lpFileSizeHigh);
  return DVar1;
}


/* KERNEL32.DLL::CreateFileA @ 0068d566  kind=lib  attributed-by=import-ns  size=6 */

HANDLE CreateFileA(LPCSTR lpFileName,DWORD dwDesiredAccess,DWORD dwShareMode,
                  LPSECURITY_ATTRIBUTES lpSecurityAttributes,DWORD dwCreationDisposition,
                  DWORD dwFlagsAndAttributes,HANDLE hTemplateFile)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d566. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateFileA(lpFileName,dwDesiredAccess,dwShareMode,lpSecurityAttributes,
                       dwCreationDisposition,dwFlagsAndAttributes,hTemplateFile);
  return pvVar1;
}


/* KERNEL32.DLL::GetFullPathNameA @ 0068d572  kind=lib  attributed-by=import-ns  size=6 */

DWORD GetFullPathNameA(LPCSTR lpFileName,DWORD nBufferLength,LPSTR lpBuffer,LPSTR *lpFilePart)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d572. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFullPathNameA(lpFileName,nBufferLength,lpBuffer,lpFilePart);
  return DVar1;
}


/* KERNEL32.DLL::GetFullPathNameW @ 0068d578  kind=lib  attributed-by=import-ns  size=6 */

DWORD GetFullPathNameW(LPCWSTR lpFileName,DWORD nBufferLength,LPWSTR lpBuffer,LPWSTR *lpFilePart)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFullPathNameW(lpFileName,nBufferLength,lpBuffer,lpFilePart);
  return DVar1;
}


/* MSVCR110.DLL::purecall @ 0068d662  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl purecall(void)

{
                    /* WARNING: Could not recover jumptable at 0x0068d662. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  purecall();
  return;
}


/* MSVCR110.DLL::operator_new @ 0068d668  kind=lib  attributed-by=import-ns  size=6 */

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = operator_new(param_1);
  return pvVar1;
}


/* MSVCR110.DLL::operator_delete @ 0068d66e  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0068d66e. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}


/* MSVCR110.DLL::memmove @ 0068d76a  kind=lib  attributed-by=import-ns  size=6 */

void * __cdecl memmove(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d76a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memmove(_Dst,_Src,_Size);
  return pvVar1;
}


/* MSVCR110.DLL::fclose @ 0068d770  kind=lib  attributed-by=import-ns  size=6 */

int __cdecl fclose(FILE *_File)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = fclose(_File);
  return iVar1;
}


/* MSVCR110.DLL::_CxxThrowException @ 0068d798  kind=lib  attributed-by=import-ns  size=6 */

void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    /* WARNING: Could not recover jumptable at 0x0068d798. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}


/* MSVCR110.DLL::__CxxFrameHandler3 @ 0068d79e  kind=lib  attributed-by=import-ns  size=6 */

void __CxxFrameHandler3(void)

{
                    /* WARNING: Could not recover jumptable at 0x0068d79e. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  __CxxFrameHandler3();
  return;
}


/* MSVCR110.DLL::libm_sse2_cos_precise @ 0068d7a4  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl libm_sse2_cos_precise(void)

{
                    /* WARNING: Could not recover jumptable at 0x0068d7a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  libm_sse2_cos_precise();
  return;
}


/* MSVCR110.DLL::memcpy @ 0068d7aa  kind=lib  attributed-by=import-ns  size=6 */

void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d7aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}


/* MSVCR110.DLL::memset @ 0068d7b0  kind=lib  attributed-by=import-ns  size=6 */

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068d7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}


/* MSVCR110.DLL::operator_delete[] @ 0068d8ce  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl operator_delete__(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0068d8ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete__(param_1);
  return;
}


/* MSVCR110.DLL::libm_sse2_pow_precise @ 0068d8d4  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl libm_sse2_pow_precise(void)

{
                    /* WARNING: Could not recover jumptable at 0x0068d8d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  libm_sse2_pow_precise();
  return;
}


/* MSVCR110.DLL::libm_sse2_asin_precise @ 0068d9bc  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl libm_sse2_asin_precise(void)

{
                    /* WARNING: Could not recover jumptable at 0x0068d9bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  libm_sse2_asin_precise();
  return;
}


/* MSVCR110.DLL::libm_sse2_sin_precise @ 0068d9c2  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl libm_sse2_sin_precise(void)

{
                    /* WARNING: Could not recover jumptable at 0x0068d9c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  libm_sse2_sin_precise();
  return;
}


/* MSVCR110.DLL::libm_sse2_sqrt_precise @ 0068d9c8  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl libm_sse2_sqrt_precise(void)

{
                    /* WARNING: Could not recover jumptable at 0x0068d9c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  libm_sse2_sqrt_precise();
  return;
}


/* MSVCR110.DLL::libm_sse2_tan_precise @ 0068d9ce  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl libm_sse2_tan_precise(void)

{
                    /* WARNING: Could not recover jumptable at 0x0068d9ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  libm_sse2_tan_precise();
  return;
}


/* MSVCR110.DLL::__RTDynamicCast @ 0068db2c  kind=lib  attributed-by=import-ns  size=6 */

void __RTDynamicCast(void)

{
                    /* WARNING: Could not recover jumptable at 0x0068db2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __RTDynamicCast();
  return;
}


/* MSVCR110.DLL::libm_sse2_acos_precise @ 0068db32  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl libm_sse2_acos_precise(void)

{
                    /* WARNING: Could not recover jumptable at 0x0068db32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  libm_sse2_acos_precise();
  return;
}


/* MSVCR110.DLL::fread @ 0068db38  kind=lib  attributed-by=import-ns  size=6 */

size_t __cdecl fread(void *_DstBuf,size_t _ElementSize,size_t _Count,FILE *_File)

{
  size_t sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068db38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = fread(_DstBuf,_ElementSize,_Count,_File);
  return sVar1;
}


/* MSVCR110.DLL::ftell @ 0068db3e  kind=lib  attributed-by=import-ns  size=6 */

long __cdecl ftell(FILE *_File)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068db3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = ftell(_File);
  return lVar1;
}


/* MSVCR110.DLL::free @ 0068db44  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x0068db44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}


/* MSVCR110.DLL::malloc @ 0068db4a  kind=lib  attributed-by=import-ns  size=6 */

void * __cdecl malloc(size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068db4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = malloc(_Size);
  return pvVar1;
}


/* MSVCR110.DLL::fopen @ 0068db50  kind=lib  attributed-by=import-ns  size=6 */

FILE * __cdecl fopen(char *_Filename,char *_Mode)

{
  FILE *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068db50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = fopen(_Filename,_Mode);
  return pFVar1;
}


/* MSVCR110.DLL::fseek @ 0068db56  kind=lib  attributed-by=import-ns  size=6 */

int __cdecl fseek(FILE *_File,long _Offset,int _Origin)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068db56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = fseek(_File,_Offset,_Origin);
  return iVar1;
}


/* MSVCR110.DLL::sprintf @ 0068db5c  kind=lib  attributed-by=import-ns  size=6 */

int __cdecl sprintf(char *_Dest,char *_Format,...)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068db5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = sprintf(_Dest,_Format);
  return iVar1;
}


/* MSVCR110.DLL::longjmp @ 0068db62  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl longjmp(int *_Buf,int _Value)

{
                    /* WARNING: Could not recover jumptable at 0x0068db62. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  longjmp(_Buf,_Value);
  return;
}


/* MSVCR110.DLL::setjmp3 @ 0068db68  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl setjmp3(void)

{
                    /* WARNING: Could not recover jumptable at 0x0068db68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  setjmp3();
  return;
}


/* MSVCR110.DLL::floor @ 0068dd7e  kind=lib  attributed-by=import-ns  size=6 */

double __cdecl floor(double _X)

{
  double dVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068dd7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  dVar1 = floor(_X);
  return dVar1;
}


/* MSVCR110.DLL::realloc @ 0068dd84  kind=lib  attributed-by=import-ns  size=6 */

void * __cdecl realloc(void *_Memory,size_t _NewSize)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068dd84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = realloc(_Memory,_NewSize);
  return pvVar1;
}


/* MSVCR110.DLL::strncmp @ 0068dd8a  kind=lib  attributed-by=import-ns  size=6 */

int __cdecl strncmp(char *_Str1,char *_Str2,size_t _MaxCount)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068dd8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = strncmp(_Str1,_Str2,_MaxCount);
  return iVar1;
}


/* MSVCR110.DLL::libm_sse2_exp_precise @ 0068e0d6  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl libm_sse2_exp_precise(void)

{
                    /* WARNING: Could not recover jumptable at 0x0068e0d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  libm_sse2_exp_precise();
  return;
}


/* MSVCR110.DLL::qsort @ 0068e3fc  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl
qsort(void *_Base,size_t _NumOfElements,size_t _SizeOfElements,_PtFuncCompare *_PtFuncCompare)

{
                    /* WARNING: Could not recover jumptable at 0x0068e3fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  qsort(_Base,_NumOfElements,_SizeOfElements,_PtFuncCompare);
  return;
}


/* MSVCR110.DLL::memchr @ 0068e402  kind=lib  attributed-by=import-ns  size=6 */

void * __cdecl memchr(void *_Buf,int _Val,size_t _MaxCount)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068e402. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memchr(_Buf,_Val,_MaxCount);
  return pvVar1;
}


/* MSVCR110.DLL::libm_sse2_log_precise @ 0068e408  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl libm_sse2_log_precise(void)

{
                    /* WARNING: Could not recover jumptable at 0x0068e408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  libm_sse2_log_precise();
  return;
}


/* MSVCR110.DLL::_lock @ 0068e414  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl _lock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x0068e414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _lock(_File);
  return;
}


/* MSVCR110.DLL::_unlock @ 0068e41a  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl _unlock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x0068e41a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _unlock(_File);
  return;
}


/* MSVCR110.DLL::__dllonexit @ 0068e420  kind=lib  attributed-by=import-ns  size=6 */

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0068e420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}


/* MSVCR110.DLL::type_info::~type_info @ 0068e4ac  kind=lib  attributed-by=import-ns  size=6 */

void __thiscall type_info::~type_info(type_info *this)

{
                    /* WARNING: Could not recover jumptable at 0x0068e4ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~type_info(this);
  return;
}


/* MSVCR110.DLL::terminate @ 0068e4b2  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl terminate(void)

{
                    /* WARNING: Could not recover jumptable at 0x0068e4b2. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  terminate();
  return;
}


/* MSVCR110.DLL::_crt_debugger_hook @ 0068e5f2  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl _crt_debugger_hook(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0068e5f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _crt_debugger_hook(param_1);
  return;
}


/* MSVCR110.DLL::__crtUnhandledException @ 0068e5f8  kind=lib  attributed-by=import-ns  size=6 */

LONG __cdecl __crtUnhandledException(EXCEPTION_POINTERS *exceptionInfo)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068e5f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = __crtUnhandledException(exceptionInfo);
  return LVar1;
}


/* MSVCR110.DLL::__crtTerminateProcess @ 0068e5fe  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl __crtTerminateProcess(UINT uExitCode)

{
                    /* WARNING: Could not recover jumptable at 0x0068e5fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __crtTerminateProcess(uExitCode);
  return;
}


/* MSVCR110.DLL::_amsg_exit @ 0068e65a  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl _amsg_exit(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0068e65a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _amsg_exit(param_1);
  return;
}


/* MSVCR110.DLL::initterm_e @ 0068e8a6  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl initterm_e(void)

{
                    /* WARNING: Could not recover jumptable at 0x0068e8a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm_e();
  return;
}


/* MSVCR110.DLL::initterm @ 0068e8ac  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x0068e8ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}


/* MSVCR110.DLL::except_handler4_common @ 0068e8b2  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x0068e8b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  except_handler4_common();
  return;
}


/* MSVCR110.DLL::__crtSetUnhandledExceptionFilter @ 0068e8b8  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl __crtSetUnhandledExceptionFilter(LPTOP_LEVEL_EXCEPTION_FILTER exceptionFilter)

{
                    /* WARNING: Could not recover jumptable at 0x0068e8b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __crtSetUnhandledExceptionFilter(exceptionFilter);
  return;
}


/* MSVCR110.DLL::_invoke_watson @ 0068e8be  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl
_invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0068e8be. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _invoke_watson(param_1,param_2,param_3,param_4,param_5);
  return;
}


/* MSVCR110.DLL::_controlfp_s @ 0068e8c4  kind=lib  attributed-by=import-ns  size=6 */

errno_t __cdecl _controlfp_s(uint *_CurrentState,uint _NewValue,uint _Mask)

{
  errno_t eVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0068e8c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  eVar1 = _controlfp_s(_CurrentState,_NewValue,_Mask);
  return eVar1;
}


/* IPHLPAPI.DLL::GetAdaptersInfo @ 0068e8ca  kind=lib  attributed-by=import-ns  size=6 */

void GetAdaptersInfo(void)

{
                    /* WARNING: Could not recover jumptable at 0x0068e8ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetAdaptersInfo();
  return;
}


/* MSVCR110.DLL::free @ 006cc6b0  kind=lib  attributed-by=import-ns  size=5 */

void __cdecl free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x0068db44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}


/* GLU32.DLL::gluNewTess @ 006cf7f6  kind=lib  attributed-by=import-ns  size=6 */

void gluNewTess(void)

{
                    /* WARNING: Could not recover jumptable at 0x006cf7f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  gluNewTess();
  return;
}


/* GLU32.DLL::gluDeleteTess @ 006cf7fc  kind=lib  attributed-by=import-ns  size=6 */

void gluDeleteTess(void)

{
                    /* WARNING: Could not recover jumptable at 0x006cf7fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  gluDeleteTess();
  return;
}


/* GLU32.DLL::gluTessBeginPolygon @ 006cf802  kind=lib  attributed-by=import-ns  size=6 */

void gluTessBeginPolygon(void)

{
                    /* WARNING: Could not recover jumptable at 0x006cf802. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  gluTessBeginPolygon();
  return;
}


/* GLU32.DLL::gluTessBeginContour @ 006cf808  kind=lib  attributed-by=import-ns  size=6 */

void gluTessBeginContour(void)

{
                    /* WARNING: Could not recover jumptable at 0x006cf808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  gluTessBeginContour();
  return;
}


/* GLU32.DLL::gluTessVertex @ 006cf80e  kind=lib  attributed-by=import-ns  size=6 */

void gluTessVertex(void)

{
                    /* WARNING: Could not recover jumptable at 0x006cf80e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  gluTessVertex();
  return;
}


/* GLU32.DLL::gluTessEndContour @ 006cf814  kind=lib  attributed-by=import-ns  size=6 */

void gluTessEndContour(void)

{
                    /* WARNING: Could not recover jumptable at 0x006cf814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  gluTessEndContour();
  return;
}


/* GLU32.DLL::gluTessEndPolygon @ 006cf81a  kind=lib  attributed-by=import-ns  size=6 */

void gluTessEndPolygon(void)

{
                    /* WARNING: Could not recover jumptable at 0x006cf81a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  gluTessEndPolygon();
  return;
}


/* GLU32.DLL::gluTessProperty @ 006cf820  kind=lib  attributed-by=import-ns  size=6 */

void gluTessProperty(void)

{
                    /* WARNING: Could not recover jumptable at 0x006cf820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  gluTessProperty();
  return;
}


/* GLU32.DLL::gluTessCallback @ 006cf826  kind=lib  attributed-by=import-ns  size=6 */

void gluTessCallback(void)

{
                    /* WARNING: Could not recover jumptable at 0x006cf826. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  gluTessCallback();
  return;
}


/* KERNEL32.DLL::IsProcessorFeaturePresent @ 006cf8c2  kind=lib  attributed-by=import-ns  size=6 */

BOOL IsProcessorFeaturePresent(DWORD ProcessorFeature)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x006cf8c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsProcessorFeaturePresent(ProcessorFeature);
  return BVar1;
}


/* MSVCR110.DLL::strncpy @ 006cf8c8  kind=lib  attributed-by=import-ns  size=6 */

char * __cdecl strncpy(char *_Dest,char *_Source,size_t _Count)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x006cf8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = strncpy(_Dest,_Source,_Count);
  return pcVar1;
}


/* MSVCR110.DLL::strrchr @ 006cf8ce  kind=lib  attributed-by=import-ns  size=6 */

char * __cdecl strrchr(char *_Str,int _Ch)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x006cf8ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = strrchr(_Str,_Ch);
  return pcVar1;
}


/* MSVCR110.DLL::atol @ 006cf8d4  kind=lib  attributed-by=import-ns  size=6 */

long __cdecl atol(char *_Str)

{
  long lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x006cf8d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = atol(_Str);
  return lVar1;
}


/* MSVCR110.DLL::strstr @ 006cf8da  kind=lib  attributed-by=import-ns  size=6 */

char * __cdecl strstr(char *_Str,char *_SubStr)

{
  char *pcVar1;
  
                    /* WARNING: Could not recover jumptable at 0x006cf8da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = strstr(_Str,_SubStr);
  return pcVar1;
}


/* MSVCR110.DLL::libm_sse2_atan_precise @ 006e03a2  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl libm_sse2_atan_precise(void)

{
                    /* WARNING: Could not recover jumptable at 0x006e03a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  libm_sse2_atan_precise();
  return;
}


