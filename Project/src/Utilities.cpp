#include "Utilities.h"

void clrscr()
{
	COORD coordScreen = { 0, 0 };
	DWORD cCharsWritten;
	DWORD dwConSize;
	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(hCon, &csbi);
	dwConSize = csbi.dwSize.X * csbi.dwSize.Y;
	FillConsoleOutputCharacter(hCon, TEXT(' '), dwConSize, coordScreen, &cCharsWritten);
	GetConsoleScreenBufferInfo(hCon, &csbi);
	FillConsoleOutputAttribute(hCon, csbi.wAttributes, dwConSize, coordScreen, &cCharsWritten);
	SetConsoleCursorPosition(hCon, coordScreen);
}

void setColor(unsigned int color, unsigned int background_color)
{
	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	if (background_color == BLACK)
		SetConsoleTextAttribute(hCon, color);
	else
		SetConsoleTextAttribute(hCon, color | BACKGROUND_BLUE | BACKGROUND_GREEN |
				BACKGROUND_RED);
}

void printAppName()
{
	setColor(3, 0);

	string appName = "###############################################################################\n##            ____   ____ _   _  ___   ___  _     ____  _   _ ____           ##\n##           / ___| / ___| | | |/ _ \\ / _ \\| |   | __ )| | | / ___|          ##\n##           \\___ \\| |   | |_| | | | | | | | |   |  _ \\| | | \\___ \\          ##\n##            ___) | |___|  _  | |_| | |_| | |___| |_) | |_| |___) |         ##\n##           |____/ \\____|_| |_|\\___/ \\___/|_____|____/ \\___/|____/          ##\n##                                                                           ##\n###############################################################################";

	cout << appName << endl << endl;

	setColor(7, 0);
}

void pressKeyToContinue(){
	setColor(11, 0);
	cout << " >Press any key to return to the previous MENU. " << flush;
	setColor(7, 0);
	_getch();
}

void exiting(){
	clrscr();
	printAppName();
	setColor(11, 0);
	cout << endl<<endl<<setw(51) << "<<<<<<<<<<<<+>>>>>>>>>>>>" << endl;
	cout << setw(51) << "<<<<<               >>>>>" << endl;
	cout << setw(51) << "<<<<<    EXITING    >>>>>" << endl;
	cout << setw(51) << "<<<<<               >>>>>" << endl;
	cout << setw(51) << "<<<<<<<<<<<<+>>>>>>>>>>>>" << endl << endl << endl;
	setColor(7, 0);
	Sleep(1000);
	exit(0);
}

void cleanBuffer()
{
	if (cin.fail())
	{
		cin.ignore(1000, '\n');
		cin.clear();
	}

	cin.clear();
	fflush(stdin);

}
