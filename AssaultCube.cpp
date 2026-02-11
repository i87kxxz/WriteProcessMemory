/*

this is work only in game withnot any Anti-Cheat

to get the Address you must found it in cheat engine ( serach in youtube how to found address in your game )

this tool is only 'WriteProcessMemory'

*/


#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	
	// Variable

	int newValue = 200; // you can change it
	int address = 0x66C6AC; // you must have the address for you game target

	// welcome

	cout << "welcome to my cheat tool ( my first cheat tool ) for game AssaultCube by wex" << endl;
	Sleep(3000);

	// the cheat
	
	HWND hwnd = FindWindowA(NULL, "AssaultCube"); // change it to your game name
	if (hwnd == NULL)
	{
		cout << "\nThe Game is Not Running Pls cheak run it and try" << endl;
		Sleep(3000);
		exit(-1);

	}

	else
	{
		DWORD procID;
		GetWindowThreadProcessId(hwnd, &procID);
		HANDLE handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, procID);
		if (handle == NULL)
		{
			cout << "\n The Process in Not Found pls make sure the name the game is right" << endl;
			Sleep(3000);
			exit(-1);
		}

		else
		{
			for (;;)
			{
				if (GetAsyncKeyState(VK_F1)) // you can change it for any key like 'VK_SPACE etc..'
				{
					WriteProcessMemory(handle, (LPVOID)address, &newValue, sizeof(int), 0);
					newValue++;
					cout << "your value is: " << newValue<< endl;
				}
			}
		}
	}	

	return 0;
}


// wex -- 2026/2/11 --