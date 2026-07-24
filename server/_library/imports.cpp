// imports (_library) -- server. 92 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "imports.h"

/* MSVCR110.DLL::free @ 00416940  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x00416940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}


/* ZLIB1.DLL::inflate @ 0054a512  kind=lib  attributed-by=import-ns  size=6 */

void inflate(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054a512. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  inflate();
  return;
}


/* ZLIB1.DLL::inflateEnd @ 0054a518  kind=lib  attributed-by=import-ns  size=6 */

void inflateEnd(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054a518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  inflateEnd();
  return;
}


/* ZLIB1.DLL::compress @ 0054a51e  kind=lib  attributed-by=import-ns  size=6 */

void compress(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054a51e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  compress();
  return;
}


/* ZLIB1.DLL::inflateInit_ @ 0054a524  kind=lib  attributed-by=import-ns  size=6 */

void inflateInit_(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054a524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  inflateInit_();
  return;
}


/* WS2_32.DLL::recv @ 0054a52a  kind=lib  attributed-by=import-ns  size=6 */

int recv(SOCKET s,char *buf,int len,int flags)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a52a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = recv(s,buf,len,flags);
  return iVar1;
}


/* WS2_32.DLL::send @ 0054a530  kind=lib  attributed-by=import-ns  size=6 */

int send(SOCKET s,char *buf,int len,int flags)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = send(s,buf,len,flags);
  return iVar1;
}


/* WS2_32.DLL::accept @ 0054a536  kind=lib  attributed-by=import-ns  size=6 */

SOCKET accept(SOCKET s,sockaddr *addr,int *addrlen)

{
  SOCKET SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a536. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = accept(s,addr,addrlen);
  return SVar1;
}


/* WS2_32.DLL::bind @ 0054a53c  kind=lib  attributed-by=import-ns  size=6 */

int bind(SOCKET s,sockaddr *addr,int namelen)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a53c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = bind(s,addr,namelen);
  return iVar1;
}


/* WS2_32.DLL::closesocket @ 0054a542  kind=lib  attributed-by=import-ns  size=6 */

int closesocket(SOCKET s)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a542. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = closesocket(s);
  return iVar1;
}


/* WS2_32.DLL::htons @ 0054a548  kind=lib  attributed-by=import-ns  size=6 */

u_short htons(u_short hostshort)

{
  u_short uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = htons(hostshort);
  return uVar1;
}


/* WS2_32.DLL::listen @ 0054a54e  kind=lib  attributed-by=import-ns  size=6 */

int listen(SOCKET s,int backlog)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a54e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = listen(s,backlog);
  return iVar1;
}


/* WS2_32.DLL::socket @ 0054a554  kind=lib  attributed-by=import-ns  size=6 */

SOCKET socket(int af,int type,int protocol)

{
  SOCKET SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SVar1 = socket(af,type,protocol);
  return SVar1;
}


/* WS2_32.DLL::WSAStartup @ 0054a55a  kind=lib  attributed-by=import-ns  size=6 */

int WSAStartup(WORD wVersionRequired,LPWSADATA lpWSAData)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a55a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = WSAStartup(wVersionRequired,lpWSAData);
  return iVar1;
}


/* WS2_32.DLL::WSACleanup @ 0054a560  kind=lib  attributed-by=import-ns  size=6 */

int WSACleanup(void)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = WSACleanup();
  return iVar1;
}


/* KERNEL32.DLL::Sleep @ 0054a56c  kind=lib  attributed-by=import-ns  size=6 */

void Sleep(DWORD dwMilliseconds)

{
                    /* WARNING: Could not recover jumptable at 0x0054a56c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Sleep(dwMilliseconds);
  return;
}


/* KERNEL32.DLL::DeleteFileA @ 0054a572  kind=lib  attributed-by=import-ns  size=6 */

BOOL DeleteFileA(LPCSTR lpFileName)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a572. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteFileA(lpFileName);
  return BVar1;
}


/* KERNEL32.DLL::AreFileApisANSI @ 0054a578  kind=lib  attributed-by=import-ns  size=6 */

BOOL AreFileApisANSI(void)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = AreFileApisANSI();
  return BVar1;
}


/* KERNEL32.DLL::GetSystemTime @ 0054a57e  kind=lib  attributed-by=import-ns  size=6 */

void GetSystemTime(LPSYSTEMTIME lpSystemTime)

{
                    /* WARNING: Could not recover jumptable at 0x0054a57e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetSystemTime(lpSystemTime);
  return;
}


/* KERNEL32.DLL::LocalFree @ 0054a584  kind=lib  attributed-by=import-ns  size=6 */

HLOCAL LocalFree(HLOCAL hMem)

{
  HLOCAL pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = LocalFree(hMem);
  return pvVar1;
}


/* KERNEL32.DLL::GetTempPathA @ 0054a58a  kind=lib  attributed-by=import-ns  size=6 */

DWORD GetTempPathA(DWORD nBufferLength,LPSTR lpBuffer)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a58a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetTempPathA(nBufferLength,lpBuffer);
  return DVar1;
}


/* KERNEL32.DLL::GetCurrentProcessId @ 0054a590  kind=lib  attributed-by=import-ns  size=6 */

DWORD GetCurrentProcessId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentProcessId();
  return DVar1;
}


/* KERNEL32.DLL::DeleteFileW @ 0054a596  kind=lib  attributed-by=import-ns  size=6 */

BOOL DeleteFileW(LPCWSTR lpFileName)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a596. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteFileW(lpFileName);
  return BVar1;
}


/* KERNEL32.DLL::CloseHandle @ 0054a59c  kind=lib  attributed-by=import-ns  size=6 */

BOOL CloseHandle(HANDLE hObject)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a59c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CloseHandle(hObject);
  return BVar1;
}


/* KERNEL32.DLL::GetVersionExA @ 0054a5a2  kind=lib  attributed-by=import-ns  size=6 */

BOOL GetVersionExA(LPOSVERSIONINFOA lpVersionInformation)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a5a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetVersionExA(lpVersionInformation);
  return BVar1;
}


/* KERNEL32.DLL::GetFileAttributesExW @ 0054a5ae  kind=lib  attributed-by=import-ns  size=6 */

BOOL GetFileAttributesExW
               (LPCWSTR lpFileName,GET_FILEEX_INFO_LEVELS fInfoLevelId,LPVOID lpFileInformation)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a5ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetFileAttributesExW(lpFileName,fInfoLevelId,lpFileInformation);
  return BVar1;
}


/* KERNEL32.DLL::GetSystemInfo @ 0054a5b4  kind=lib  attributed-by=import-ns  size=6 */

void GetSystemInfo(LPSYSTEM_INFO lpSystemInfo)

{
                    /* WARNING: Could not recover jumptable at 0x0054a5b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetSystemInfo(lpSystemInfo);
  return;
}


/* KERNEL32.DLL::CreateFileMappingW @ 0054a5c0  kind=lib  attributed-by=import-ns  size=6 */

HANDLE CreateFileMappingW(HANDLE hFile,LPSECURITY_ATTRIBUTES lpFileMappingAttributes,DWORD flProtect
                         ,DWORD dwMaximumSizeHigh,DWORD dwMaximumSizeLow,LPCWSTR lpName)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a5c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateFileMappingW(hFile,lpFileMappingAttributes,flProtect,dwMaximumSizeHigh,
                              dwMaximumSizeLow,lpName);
  return pvVar1;
}


/* KERNEL32.DLL::LoadLibraryA @ 0054a5cc  kind=lib  attributed-by=import-ns  size=6 */

HMODULE LoadLibraryA(LPCSTR lpLibFileName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a5cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadLibraryA(lpLibFileName);
  return pHVar1;
}


/* KERNEL32.DLL::LockFileEx @ 0054a5d8  kind=lib  attributed-by=import-ns  size=6 */

BOOL LockFileEx(HANDLE hFile,DWORD dwFlags,DWORD dwReserved,DWORD nNumberOfBytesToLockLow,
               DWORD nNumberOfBytesToLockHigh,LPOVERLAPPED lpOverlapped)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a5d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = LockFileEx(hFile,dwFlags,dwReserved,nNumberOfBytesToLockLow,nNumberOfBytesToLockHigh,
                     lpOverlapped);
  return BVar1;
}


/* KERNEL32.DLL::GetProcAddress @ 0054a5e4  kind=lib  attributed-by=import-ns  size=6 */

FARPROC GetProcAddress(HMODULE hModule,LPCSTR lpProcName)

{
  FARPROC pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a5e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = GetProcAddress(hModule,lpProcName);
  return pFVar1;
}


/* KERNEL32.DLL::GetLastError @ 0054a5ea  kind=lib  attributed-by=import-ns  size=6 */

DWORD GetLastError(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a5ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetLastError();
  return DVar1;
}


/* KERNEL32.DLL::GetTempPathW @ 0054a5f0  kind=lib  attributed-by=import-ns  size=6 */

DWORD GetTempPathW(DWORD nBufferLength,LPWSTR lpBuffer)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetTempPathW(nBufferLength,lpBuffer);
  return DVar1;
}


/* KERNEL32.DLL::FlushFileBuffers @ 0054a5f6  kind=lib  attributed-by=import-ns  size=6 */

BOOL FlushFileBuffers(HANDLE hFile)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a5f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FlushFileBuffers(hFile);
  return BVar1;
}


/* KERNEL32.DLL::MultiByteToWideChar @ 0054a5fc  kind=lib  attributed-by=import-ns  size=6 */

int MultiByteToWideChar(UINT CodePage,DWORD dwFlags,LPCSTR lpMultiByteStr,int cbMultiByte,
                       LPWSTR lpWideCharStr,int cchWideChar)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a5fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = MultiByteToWideChar(CodePage,dwFlags,lpMultiByteStr,cbMultiByte,lpWideCharStr,cchWideChar)
  ;
  return iVar1;
}


/* KERNEL32.DLL::CreateFileW @ 0054a602  kind=lib  attributed-by=import-ns  size=6 */

HANDLE CreateFileW(LPCWSTR lpFileName,DWORD dwDesiredAccess,DWORD dwShareMode,
                  LPSECURITY_ATTRIBUTES lpSecurityAttributes,DWORD dwCreationDisposition,
                  DWORD dwFlagsAndAttributes,HANDLE hTemplateFile)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a602. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateFileW(lpFileName,dwDesiredAccess,dwShareMode,lpSecurityAttributes,
                       dwCreationDisposition,dwFlagsAndAttributes,hTemplateFile);
  return pvVar1;
}


/* KERNEL32.DLL::ReadFile @ 0054a608  kind=lib  attributed-by=import-ns  size=6 */

BOOL ReadFile(HANDLE hFile,LPVOID lpBuffer,DWORD nNumberOfBytesToRead,LPDWORD lpNumberOfBytesRead,
             LPOVERLAPPED lpOverlapped)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ReadFile(hFile,lpBuffer,nNumberOfBytesToRead,lpNumberOfBytesRead,lpOverlapped);
  return BVar1;
}


/* KERNEL32.DLL::GetFileAttributesW @ 0054a60e  kind=lib  attributed-by=import-ns  size=6 */

DWORD GetFileAttributesW(LPCWSTR lpFileName)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a60e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileAttributesW(lpFileName);
  return DVar1;
}


/* KERNEL32.DLL::GetFileAttributesA @ 0054a620  kind=lib  attributed-by=import-ns  size=6 */

DWORD GetFileAttributesA(LPCSTR lpFileName)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileAttributesA(lpFileName);
  return DVar1;
}


/* KERNEL32.DLL::FormatMessageW @ 0054a62c  kind=lib  attributed-by=import-ns  size=6 */

DWORD FormatMessageW(DWORD dwFlags,LPCVOID lpSource,DWORD dwMessageId,DWORD dwLanguageId,
                    LPWSTR lpBuffer,DWORD nSize,va_list *Arguments)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = FormatMessageW(dwFlags,lpSource,dwMessageId,dwLanguageId,lpBuffer,nSize,Arguments);
  return DVar1;
}


/* KERNEL32.DLL::LoadLibraryW @ 0054a632  kind=lib  attributed-by=import-ns  size=6 */

HMODULE LoadLibraryW(LPCWSTR lpLibFileName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a632. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadLibraryW(lpLibFileName);
  return pHVar1;
}


/* KERNEL32.DLL::WideCharToMultiByte @ 0054a638  kind=lib  attributed-by=import-ns  size=6 */

int WideCharToMultiByte(UINT CodePage,DWORD dwFlags,LPCWSTR lpWideCharStr,int cchWideChar,
                       LPSTR lpMultiByteStr,int cbMultiByte,LPCSTR lpDefaultChar,
                       LPBOOL lpUsedDefaultChar)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = WideCharToMultiByte(CodePage,dwFlags,lpWideCharStr,cchWideChar,lpMultiByteStr,cbMultiByte,
                              lpDefaultChar,lpUsedDefaultChar);
  return iVar1;
}


/* KERNEL32.DLL::WriteFile @ 0054a63e  kind=lib  attributed-by=import-ns  size=6 */

BOOL WriteFile(HANDLE hFile,LPCVOID lpBuffer,DWORD nNumberOfBytesToWrite,
              LPDWORD lpNumberOfBytesWritten,LPOVERLAPPED lpOverlapped)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a63e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = WriteFile(hFile,lpBuffer,nNumberOfBytesToWrite,lpNumberOfBytesWritten,lpOverlapped);
  return BVar1;
}


/* KERNEL32.DLL::FormatMessageA @ 0054a644  kind=lib  attributed-by=import-ns  size=6 */

DWORD FormatMessageA(DWORD dwFlags,LPCVOID lpSource,DWORD dwMessageId,DWORD dwLanguageId,
                    LPSTR lpBuffer,DWORD nSize,va_list *Arguments)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = FormatMessageA(dwFlags,lpSource,dwMessageId,dwLanguageId,lpBuffer,nSize,Arguments);
  return DVar1;
}


/* KERNEL32.DLL::GetSystemTimeAsFileTime @ 0054a64a  kind=lib  attributed-by=import-ns  size=6 */

void GetSystemTimeAsFileTime(LPFILETIME lpSystemTimeAsFileTime)

{
                    /* WARNING: Could not recover jumptable at 0x0054a64a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetSystemTimeAsFileTime(lpSystemTimeAsFileTime);
  return;
}


/* KERNEL32.DLL::UnlockFileEx @ 0054a656  kind=lib  attributed-by=import-ns  size=6 */

BOOL UnlockFileEx(HANDLE hFile,DWORD dwReserved,DWORD nNumberOfBytesToUnlockLow,
                 DWORD nNumberOfBytesToUnlockHigh,LPOVERLAPPED lpOverlapped)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a656. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UnlockFileEx(hFile,dwReserved,nNumberOfBytesToUnlockLow,nNumberOfBytesToUnlockHigh,
                       lpOverlapped);
  return BVar1;
}


/* KERNEL32.DLL::GetTickCount @ 0054a65c  kind=lib  attributed-by=import-ns  size=6 */

DWORD GetTickCount(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a65c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetTickCount();
  return DVar1;
}


/* KERNEL32.DLL::LockFile @ 0054a668  kind=lib  attributed-by=import-ns  size=6 */

BOOL LockFile(HANDLE hFile,DWORD dwFileOffsetLow,DWORD dwFileOffsetHigh,
             DWORD nNumberOfBytesToLockLow,DWORD nNumberOfBytesToLockHigh)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = LockFile(hFile,dwFileOffsetLow,dwFileOffsetHigh,nNumberOfBytesToLockLow,
                   nNumberOfBytesToLockHigh);
  return BVar1;
}


/* KERNEL32.DLL::UnlockFile @ 0054a66e  kind=lib  attributed-by=import-ns  size=6 */

BOOL UnlockFile(HANDLE hFile,DWORD dwFileOffsetLow,DWORD dwFileOffsetHigh,
               DWORD nNumberOfBytesToUnlockLow,DWORD nNumberOfBytesToUnlockHigh)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a66e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UnlockFile(hFile,dwFileOffsetLow,dwFileOffsetHigh,nNumberOfBytesToUnlockLow,
                     nNumberOfBytesToUnlockHigh);
  return BVar1;
}


/* KERNEL32.DLL::QueryPerformanceCounter @ 0054a67a  kind=lib  attributed-by=import-ns  size=6 */

BOOL QueryPerformanceCounter(LARGE_INTEGER *lpPerformanceCount)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a67a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = QueryPerformanceCounter(lpPerformanceCount);
  return BVar1;
}


/* KERNEL32.DLL::FreeLibrary @ 0054a68c  kind=lib  attributed-by=import-ns  size=6 */

BOOL FreeLibrary(HMODULE hLibModule)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FreeLibrary(hLibModule);
  return BVar1;
}


/* KERNEL32.DLL::SetEndOfFile @ 0054a692  kind=lib  attributed-by=import-ns  size=6 */

BOOL SetEndOfFile(HANDLE hFile)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a692. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetEndOfFile(hFile);
  return BVar1;
}


/* KERNEL32.DLL::UnmapViewOfFile @ 0054a698  kind=lib  attributed-by=import-ns  size=6 */

BOOL UnmapViewOfFile(LPCVOID lpBaseAddress)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UnmapViewOfFile(lpBaseAddress);
  return BVar1;
}


/* KERNEL32.DLL::MapViewOfFile @ 0054a69e  kind=lib  attributed-by=import-ns  size=6 */

LPVOID MapViewOfFile(HANDLE hFileMappingObject,DWORD dwDesiredAccess,DWORD dwFileOffsetHigh,
                    DWORD dwFileOffsetLow,SIZE_T dwNumberOfBytesToMap)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a69e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = MapViewOfFile(hFileMappingObject,dwDesiredAccess,dwFileOffsetHigh,dwFileOffsetLow,
                         dwNumberOfBytesToMap);
  return pvVar1;
}


/* KERNEL32.DLL::SetFilePointer @ 0054a6a4  kind=lib  attributed-by=import-ns  size=6 */

DWORD SetFilePointer(HANDLE hFile,LONG lDistanceToMove,PLONG lpDistanceToMoveHigh,DWORD dwMoveMethod
                    )

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a6a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = SetFilePointer(hFile,lDistanceToMove,lpDistanceToMoveHigh,dwMoveMethod);
  return DVar1;
}


/* KERNEL32.DLL::GetFileSize @ 0054a6b0  kind=lib  attributed-by=import-ns  size=6 */

DWORD GetFileSize(HANDLE hFile,LPDWORD lpFileSizeHigh)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileSize(hFile,lpFileSizeHigh);
  return DVar1;
}


/* KERNEL32.DLL::CreateFileA @ 0054a6b6  kind=lib  attributed-by=import-ns  size=6 */

HANDLE CreateFileA(LPCSTR lpFileName,DWORD dwDesiredAccess,DWORD dwShareMode,
                  LPSECURITY_ATTRIBUTES lpSecurityAttributes,DWORD dwCreationDisposition,
                  DWORD dwFlagsAndAttributes,HANDLE hTemplateFile)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a6b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = CreateFileA(lpFileName,dwDesiredAccess,dwShareMode,lpSecurityAttributes,
                       dwCreationDisposition,dwFlagsAndAttributes,hTemplateFile);
  return pvVar1;
}


/* KERNEL32.DLL::GetFullPathNameA @ 0054a6c2  kind=lib  attributed-by=import-ns  size=6 */

DWORD GetFullPathNameA(LPCSTR lpFileName,DWORD nBufferLength,LPSTR lpBuffer,LPSTR *lpFilePart)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a6c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFullPathNameA(lpFileName,nBufferLength,lpBuffer,lpFilePart);
  return DVar1;
}


/* KERNEL32.DLL::GetFullPathNameW @ 0054a6c8  kind=lib  attributed-by=import-ns  size=6 */

DWORD GetFullPathNameW(LPCWSTR lpFileName,DWORD nBufferLength,LPWSTR lpBuffer,LPWSTR *lpFilePart)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a6c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFullPathNameW(lpFileName,nBufferLength,lpBuffer,lpFilePart);
  return DVar1;
}


/* MSVCR110.DLL::purecall @ 0054a7b0  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl purecall(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054a7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  purecall();
  return;
}


/* MSVCR110.DLL::operator_new @ 0054a7b6  kind=lib  attributed-by=import-ns  size=6 */

void * __cdecl operator_new(uint param_1)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a7b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = operator_new(param_1);
  return pvVar1;
}


/* MSVCR110.DLL::operator_delete @ 0054a7bc  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl operator_delete(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0054a7bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete(param_1);
  return;
}


/* MSVCR110.DLL::_CxxThrowException @ 0054a8c8  kind=lib  attributed-by=import-ns  size=6 */

void _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    /* WARNING: Could not recover jumptable at 0x0054a8c8. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}


/* MSVCR110.DLL::__CxxFrameHandler3 @ 0054a8ce  kind=lib  attributed-by=import-ns  size=6 */

void __CxxFrameHandler3(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054a8ce. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  __CxxFrameHandler3();
  return;
}


/* MSVCR110.DLL::libm_sse2_asin_precise @ 0054a9bc  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl libm_sse2_asin_precise(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054a9bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  libm_sse2_asin_precise();
  return;
}


/* MSVCR110.DLL::libm_sse2_cos_precise @ 0054a9c2  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl libm_sse2_cos_precise(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054a9c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  libm_sse2_cos_precise();
  return;
}


/* MSVCR110.DLL::libm_sse2_sin_precise @ 0054a9c8  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl libm_sse2_sin_precise(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054a9c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  libm_sse2_sin_precise();
  return;
}


/* MSVCR110.DLL::libm_sse2_sqrt_precise @ 0054a9ce  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl libm_sse2_sqrt_precise(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054a9ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  libm_sse2_sqrt_precise();
  return;
}


/* MSVCR110.DLL::memcpy @ 0054a9d4  kind=lib  attributed-by=import-ns  size=6 */

void * __cdecl memcpy(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054a9d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memcpy(_Dst,_Src,_Size);
  return pvVar1;
}


/* MSVCR110.DLL::libm_sse2_pow_precise @ 0054ab14  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl libm_sse2_pow_precise(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054ab14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  libm_sse2_pow_precise();
  return;
}


/* MSVCR110.DLL::memset @ 0054ab1a  kind=lib  attributed-by=import-ns  size=6 */

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054ab1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}


/* MSVCR110.DLL::setjmp3 @ 0054ab20  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl setjmp3(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054ab20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  setjmp3();
  return;
}


/* MSVCR110.DLL::operator_delete[] @ 0054ad3c  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl operator_delete__(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0054ad3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  operator_delete__(param_1);
  return;
}


/* MSVCR110.DLL::libm_sse2_acos_precise @ 0054b1d6  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl libm_sse2_acos_precise(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054b1d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  libm_sse2_acos_precise();
  return;
}


/* MSVCR110.DLL::libm_sse2_exp_precise @ 0054b1dc  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl libm_sse2_exp_precise(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054b1dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  libm_sse2_exp_precise();
  return;
}


/* MSVCR110.DLL::_lock @ 0054b456  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl _lock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x0054b456. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _lock(_File);
  return;
}


/* MSVCR110.DLL::_unlock @ 0054b45c  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl _unlock(int _File)

{
                    /* WARNING: Could not recover jumptable at 0x0054b45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _unlock(_File);
  return;
}


/* MSVCR110.DLL::__dllonexit @ 0054b462  kind=lib  attributed-by=import-ns  size=6 */

void __dllonexit(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054b462. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __dllonexit();
  return;
}


/* MSVCR110.DLL::type_info::~type_info @ 0054b626  kind=lib  attributed-by=import-ns  size=6 */

void __thiscall type_info::~type_info(type_info *this)

{
                    /* WARNING: Could not recover jumptable at 0x0054b626. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ~type_info(this);
  return;
}


/* MSVCR110.DLL::_crt_debugger_hook @ 0054b62c  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl _crt_debugger_hook(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0054b62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _crt_debugger_hook(param_1);
  return;
}


/* MSVCR110.DLL::__crtUnhandledException @ 0054b632  kind=lib  attributed-by=import-ns  size=6 */

LONG __cdecl __crtUnhandledException(EXCEPTION_POINTERS *exceptionInfo)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054b632. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = __crtUnhandledException(exceptionInfo);
  return LVar1;
}


/* MSVCR110.DLL::__crtTerminateProcess @ 0054b638  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl __crtTerminateProcess(UINT uExitCode)

{
                    /* WARNING: Could not recover jumptable at 0x0054b638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __crtTerminateProcess(uExitCode);
  return;
}


/* MSVCR110.DLL::terminate @ 0054b63e  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl terminate(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054b63e. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  terminate();
  return;
}


/* MSVCR110.DLL::_XcptFilter @ 0054b694  kind=lib  attributed-by=import-ns  size=6 */

int __cdecl _XcptFilter(ulong _ExceptionNum,_EXCEPTION_POINTERS *_ExceptionPtr)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054b694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _XcptFilter(_ExceptionNum,_ExceptionPtr);
  return iVar1;
}


/* MSVCR110.DLL::_amsg_exit @ 0054b69a  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl _amsg_exit(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0054b69a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _amsg_exit(param_1);
  return;
}


/* MSVCR110.DLL::initterm_e @ 0054b8f2  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl initterm_e(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054b8f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm_e();
  return;
}


/* MSVCR110.DLL::initterm @ 0054b8f8  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl initterm(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054b8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  initterm();
  return;
}


/* MSVCR110.DLL::except_handler4_common @ 0054b8fe  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl except_handler4_common(void)

{
                    /* WARNING: Could not recover jumptable at 0x0054b8fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  except_handler4_common();
  return;
}


/* MSVCR110.DLL::__crtSetUnhandledExceptionFilter @ 0054b904  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl __crtSetUnhandledExceptionFilter(LPTOP_LEVEL_EXCEPTION_FILTER exceptionFilter)

{
                    /* WARNING: Could not recover jumptable at 0x0054b904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __crtSetUnhandledExceptionFilter(exceptionFilter);
  return;
}


/* MSVCR110.DLL::_invoke_watson @ 0054b90a  kind=lib  attributed-by=import-ns  size=6 */

void __cdecl
_invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0054b90a. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _invoke_watson(param_1,param_2,param_3,param_4,param_5);
  return;
}


/* MSVCR110.DLL::_controlfp_s @ 0054b910  kind=lib  attributed-by=import-ns  size=6 */

errno_t __cdecl _controlfp_s(uint *_CurrentState,uint _NewValue,uint _Mask)

{
  errno_t eVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054b910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  eVar1 = _controlfp_s(_CurrentState,_NewValue,_Mask);
  return eVar1;
}


/* KERNEL32.DLL::IsProcessorFeaturePresent @ 0054b916  kind=lib  attributed-by=import-ns  size=6 */

BOOL IsProcessorFeaturePresent(DWORD ProcessorFeature)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0054b916. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsProcessorFeaturePresent(ProcessorFeature);
  return BVar1;
}


