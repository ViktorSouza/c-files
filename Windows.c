#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
LRESULT CALLBACK WindowProcedure(HWND, UINT, WPARAM, LPARAM);

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hprevInst, LPTCH args, int nCmdShow)
{

    char g_szClassName[] = "myWindowClass";
    WNDCLASSEX wc;
    // wc.cbSize = sizeof(WNDCLASSEX);                // The size, in bytes, of this structure
    wc.style = 0;                                  // The class style(s)
    wc.lpfnWndProc = WindowProcedure;              // A pointer to the window procedure
    wc.cbClsExtra = 0;                             // The number of extra bytes to allocate following the window-class structure.
    wc.cbWndExtra = 0;                             // The number of extra bytes to allocate following the window instance.
    wc.hInstance = hInstance;                      // A handle to the instance that contains the window procedure for the class.
    wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);    // A handle to the class icon. This member must be a handle to an icon resource. If this member is NULL, the system provides a default icon.
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);      // A handle to the class cursor. This member must be a handle to a cursor resource. If this member is NULL, an application must explicitly set the cursor shape whenever the mouse moves into the application's window.
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1); // A handle to the class background brush.
    wc.lpszMenuName = NULL;                        // Pointer to a null-terminated character string that specifies the resource name of the class menu.
    wc.lpszClassName = g_szClassName;              // A string that identifies the window class.
    // wc.Icon = LoadIcon(NULL, IDI_APPLICATION);     // A handle to a small icon that is associated with the window class.Create the window

    if (!RegisterClassEx(&wc))
    {
        MessageBox(NULL, "Window Registration Failed!", "Error!",
                   MB_ICONEXCLAMATION | MB_OK);
        // return -1;
    };

    MSG msg = {};
    // while (GetMessage(&msg, NULL, NULL, NULL))

    // {

    //     TranslateMessage(&msg);
    //     DispatchMessage(&msg);
    // }

    HWND hwnd;
    hwnd = CreateWindowEx(
        0,                   // Optional window styles.
        g_szClassName,       // Window class
        "My window",         // Window text
        WS_OVERLAPPEDWINDOW, // Window style
        CW_USEDEFAULT,       // Position X
        CW_USEDEFAULT,       // Position Y
        800,                 // Width
        600,                 // Height
        NULL,                // Parent window
        NULL,                // Menu
        hInstance,           // Instance handle
        NULL                 // Additional application data
    );
    ShowWindow(hwnd, nCmdShow);

    printf("BAH MEUKKKKKKKKKKKKKKKKKKKK");
    return 0;
}

LRESULT CALLBACK WindowProcedure(HWND hWnd, UINT msg, WPARAM wp, LPARAM lp)
{
    printf("Uau!%d ~ %d", msg, hWnd);
    switch (msg)
    {
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    default:
        return DefWindowProcW(hWnd, msg, wp, lp);
    }
};