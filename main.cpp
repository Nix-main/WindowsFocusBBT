#include <Windows.h>
#include <iostream>

extern "C" {
    __declspec(dllexport) void bringGameToFront() {
        HWND hw = FindWindow(null, L"BattleBlockTheater");
        SetForegroundWindow(hw);
    }
}