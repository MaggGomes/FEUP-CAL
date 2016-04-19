#include "Menu.h"

Menu::Menu(){};
// TODO FALTA IMPLEMENTAR SAVE E LOAD DATA
void Menu::loadData(){};
void Menu::saveData(){};

void Menu::menuStarting(){
	string Menu[5] = { "<<  SCHOOL MANAGEMENT>>", "<<  CLIENT MANAGEMENT >>", "<<  BUS MANAGEMENT    >>", "<<  VIEW OF CITY MAP  >>", "<<  EXIT              >>" };
	bool validade = true;
	int pointer = 0;

	while (validade)
	{
		clrscr();
		printAppName();
		setColor(11, 0);
		cout << setw(51) << "<<<<<   WELLCOME   >>>>>" << endl << endl;

		for (int i = 0; i < 5; ++i)
		{
			if (i == pointer)
			{
				cout << "                           ";
				setColor(3, 1);
				cout << Menu[i] << endl << endl;
			}
			else
			{
				setColor(3, 0);
				cout << setw(51) << Menu[i] << endl << endl;
			}
		}
		setColor(7, 0);

		while (validade)
		{
			int ch = _getch();

			if (ch == 0 || ch == 224)
				ch = 256 + _getch();

			if (ch == ARROW_DOWN) {
				Beep(250, 160);
				pointer += 1;
				if (pointer == 5)
				{
					pointer = 0;
				}
				break;
			}

			if (ch == ARROW_UP){
				Beep(250, 160);
				pointer -= 1;
				if (pointer == -1)
				{
					pointer = 4;
				}
				break;
			}

			if (ch == '\r')
			{
				setColor(7, 0);
				Beep(200, 160);

				switch (pointer)
				{
				case 0:
					validade = false;
					menuSchoolManagement();
					break;
				case 1:
					validade = false;
					menuClientManagement();
					break;
				case 2:
					validade = false;
					menuBusManagement();
					break;
				case 3:
					validade = false;
					exit(0);
					break;
				case 4:
					saveData();
					exiting();
				}
			}
		}
	}
}

void Menu::menuSchoolManagement(){
	string Menu[4] = { "<<   BUS MANAGEMENT     >>", "<<  CLIENT MANAGEMENT >>", "<<  SEE CITY MAP      >>", "<<  EXIT              >>" };
	bool validade = true;
	int pointer = 0;

	while (validade)
	{
		clrscr();
		printAppName();
		setColor(11, 0);
		cout << setw(51) << "<<<<<   CLIENT   >>>>>" << endl << endl;

		for (int i = 0; i < 4; ++i)
		{
			if (i == pointer)
			{
				cout << "                           ";
				setColor(3, 1);
				cout << Menu[i] << endl << endl;
			}
			else
			{
				setColor(3, 0);
				cout << setw(51) << Menu[i] << endl << endl;
			}
		}
		setColor(7, 0);

		while (validade)
		{
			int ch = _getch();

			if (ch == 0 || ch == 224)
				ch = 256 + _getch();

			if (ch == ARROW_DOWN) {
				Beep(250, 160);
				pointer += 1;
				if (pointer == 4)
				{
					pointer = 0;
				}
				break;
			}

			if (ch == ARROW_UP){
				Beep(250, 160);
				pointer -= 1;
				if (pointer == -1)
				{
					pointer = 3;
				}
				break;
			}

			if (ch == '\r')
			{
				setColor(7, 0);
				Beep(200, 160);

				switch (pointer)
				{
				case 0:
					validade = false;
					exit(0);
					break;
				case 1:
					validade = false;
					exit(0);
					break;
				case 2:
					validade = false;
					exit(0);
					break;
				case 3:
					saveData();
					exiting();
				}
			}
		}
	}
}

void Menu::menuClientManagement(){
	string Menu[4] = { "<<   BUS MANAGEMENT     >>", "<<  CLIENT MANAGEMENT >>", "<<  SEE CITY MAP      >>", "<<  EXIT              >>" };
	bool validade = true;
	int pointer = 0;

	while (validade)
	{
		clrscr();
		printAppName();
		setColor(11, 0);
		cout << setw(51) << "<<<<<   CLIENT   >>>>>" << endl << endl;

		for (int i = 0; i < 4; ++i)
		{
			if (i == pointer)
			{
				cout << "                           ";
				setColor(3, 1);
				cout << Menu[i] << endl << endl;
			}
			else
			{
				setColor(3, 0);
				cout << setw(51) << Menu[i] << endl << endl;
			}
		}
		setColor(7, 0);

		while (validade)
		{
			int ch = _getch();

			if (ch == 0 || ch == 224)
				ch = 256 + _getch();

			if (ch == ARROW_DOWN) {
				Beep(250, 160);
				pointer += 1;
				if (pointer == 4)
				{
					pointer = 0;
				}
				break;
			}

			if (ch == ARROW_UP){
				Beep(250, 160);
				pointer -= 1;
				if (pointer == -1)
				{
					pointer = 3;
				}
				break;
			}

			if (ch == '\r')
			{
				setColor(7, 0);
				Beep(200, 160);

				switch (pointer)
				{
				case 0:
					validade = false;
					exit(0);
					break;
				case 1:
					validade = false;
					exit(0);
					break;
				case 2:
					validade = false;
					exit(0);
					break;
				case 3:
					saveData();
					exiting();
				}
			}
		}
	}
}

void Menu::menuBusManagement(){
	string Menu[4] = { "<<  BUS MANAGEMENT    >>", "<<  CLIENT MANAGEMENT >>", "<<  SEE CITY MAP      >>", "<<  EXIT              >>" };
	bool validade = true;
	int pointer = 0;

	while (validade)
	{
		clrscr();
		printAppName();
		setColor(11, 0);
		cout << setw(51) << "<<<<<     BUS      >>>>>" << endl << endl;

		for (int i = 0; i < 4; ++i)
		{
			if (i == pointer)
			{
				cout << "                           ";
				setColor(3, 1);
				cout << Menu[i] << endl << endl;
			}
			else
			{
				setColor(3, 0);
				cout << setw(51) << Menu[i] << endl << endl;
			}
		}
		setColor(7, 0);

		while (validade)
		{
			int ch = _getch();

			if (ch == 0 || ch == 224)
				ch = 256 + _getch();

			if (ch == ARROW_DOWN) {
				Beep(250, 160);
				pointer += 1;
				if (pointer == 4)
				{
					pointer = 0;
				}
				break;
			}

			if (ch == ARROW_UP){
				Beep(250, 160);
				pointer -= 1;
				if (pointer == -1)
				{
					pointer = 3;
				}
				break;
			}

			if (ch == '\r')
			{
				setColor(7, 0);
				Beep(200, 160);

				switch (pointer)
				{
				case 0:
					validade = false;
					exit(0);
					break;
				case 1:
					validade = false;
					exit(0);
					break;
				case 2:
					validade = false;
					exit(0);
					break;
				case 3:
					saveData();
					exiting();
				}
			}
		}
	}
}

