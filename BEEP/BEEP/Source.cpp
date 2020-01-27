#include <windows.h>
#include <iostream>

using namespace std;

int main()
{
	HWND hWnd = GetConsoleWindow();
	ShowWindow(hWnd, SW_HIDE);

	while (true)
	{
		if (GetAsyncKeyState(65)) // A
		{
			Beep(440, 50);

			cout << "A" << endl;

			Sleep(50);
		}

		else if (GetAsyncKeyState(66)) // B
		{
			Beep(500, 50);

			cout << "B" << endl;

			Sleep(50);
		}

		else if (GetAsyncKeyState(67)) // C
		{
			Beep(520, 50);

			cout << "C" << endl;

			Sleep(50);
		}

		else if (GetAsyncKeyState(68)) // D
		{
			Beep(586, 50);

			cout << "D" << endl;

			Sleep(50);
		}

		else if (GetAsyncKeyState(69)) // E
		{
			Beep(658, 50);

			cout << "E" << endl;

			Sleep(50);
		}

		else if (GetAsyncKeyState(70)) // F
		{
			Beep(700, 50);

			cout << "F" << endl;

			Sleep(50);
		}

		else if (GetAsyncKeyState(71)) // G
		{
			Beep(780, 50);

			cout << "G" << endl;

			Sleep(50);
		}

		else if (GetAsyncKeyState(72)) // H
		{
			Beep(810, 50);

			cout << "H" << endl;

			Sleep(50);
		}

		else if (GetAsyncKeyState(73)) // I
		{
			Beep(850, 50);

			cout << "I" << endl;

			Sleep(50);
		}

		else if (GetAsyncKeyState(74)) // J
		{
			Beep(900, 50);

			cout << "F" << endl;

			Sleep(50);
		}

		else if (GetAsyncKeyState(75)) // K
		{
			Beep(945, 50);

			cout << "K" << endl;

			Sleep(50);
		}

		else if (GetAsyncKeyState(76)) // L
		{
			Beep(980, 50);

			cout << "L" << endl;

			Sleep(50);
		}

		else if (GetAsyncKeyState(77)) // M
		{
		Beep(1000, 50);

		cout << "M" << endl;

		Sleep(50);
		}

		else if (GetAsyncKeyState(78)) // N
		{
		Beep(1050, 50);

		cout << "N" << endl;

		Sleep(50);
		}

		else if (GetAsyncKeyState(79)) // O
		{
		Beep(1100, 50);

		cout << "O" << endl;

		Sleep(50);
		}

		else if (GetAsyncKeyState(80)) // P
		{
		Beep(1150, 50);

		cout << "P" << endl;

		Sleep(50);
		}

		else if (GetAsyncKeyState(81)) // Q
		{
		Beep(1200, 50);

		cout << "Q" << endl;

		Sleep(50);
		}

		else if (GetAsyncKeyState(82)) // R
		{
		Beep(1250, 50);

		cout << "R" << endl;

		Sleep(50);
		}

		else if (GetAsyncKeyState(83)) // S
		{
		Beep(1300, 50);

		cout << "S" << endl;

		Sleep(50);
		}

		else if (GetAsyncKeyState(84)) // T
		{
		Beep(1350, 50);

		cout << "T" << endl;

		Sleep(50);
		}

		else if (GetAsyncKeyState(85)) // U
		{
		Beep(1400, 50);

		cout << "U" << endl;

		Sleep(50);
		}

		else if (GetAsyncKeyState(86)) // V
		{
		Beep(1450, 50);

		cout << "V" << endl;

		Sleep(50);
		}

		else if (GetAsyncKeyState(87)) // W
		{
		Beep(1500, 50);

		cout << "W" << endl;

		Sleep(50);
		}

		else if (GetAsyncKeyState(88)) // X
		{
		Beep(1550, 50);

		cout << "X" << endl;

		Sleep(50);
		}

		else if (GetAsyncKeyState(89)) // Y
		{
		Beep(1600, 50);

		cout << "Y" << endl;

		Sleep(50);
		}

		else if (GetAsyncKeyState(90)) // Z
		{
		Beep(1650, 50);

		cout << "Z" << endl;

		Sleep(50);
		}

		Sleep(10);
	}
}