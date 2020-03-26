#include <windows.h>

int WinMain(
    HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    PSTR lpCmdLine,
    int nCmdShow)
{
    MessageBoxW(0, L"Hello, World!", L"Seaground", MB_OK | MB_ICONINFORMATION);

    return 0;
}  
