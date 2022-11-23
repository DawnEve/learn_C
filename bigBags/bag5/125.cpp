#include <windows.h>

// on windowns OS only.

int _stdcall WinMain(
	HINSTANCE  hInstance,
	HINSTANCE  hPrevInstance,
	LPSTR      lpCmdLine,
	int        nCmdShow)
{
    MessageBox(NULL,"This is my first Win32 programme","Hello, world!",MB_OK);
    return 0;
}
