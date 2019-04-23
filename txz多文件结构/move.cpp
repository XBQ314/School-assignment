#include <iostream>
#include <conio.h>
#include <windows.h>
#include <fstream>
#include "coordin.h"
extern int movement;
extern position map, door, window, sofa, man;
using namespace std;
void move()
{
	char ch;
	cout<<"Please do something."<<endl;
	ch = getch();
	switch(ch)
	{
	case 'W':case'w':
		{
			man.y--;movement++;
			if (man.x == sofa.x && man.y == sofa.y){sofa.y--;}
			system ("cls");
			move_fix();
			break;
		}
	case 's':case'S':
		{
			man.y++;movement++;
			if (man.x == sofa.x && man.y == sofa.y){sofa.y++;}
			system ("cls");
			move_fix();
			break;
		}
	case 'a':case'A':
		{
			man.x--;movement++;
			if (man.x == sofa.x && man.y == sofa.y){sofa.x--;}
			system ("cls");
			move_fix();
			break;
		}
	case 'D':case'd':
		{
			man.x++;movement++;
			if (man.x == sofa.x && man.y == sofa.y){sofa.x++;}
			system ("cls");
			move_fix();
			break;
		}
	case 'R':case'r':
		{
			system ("cls");
			make_value();
			movement = 0;
			break;
		}
	case 'Q':case 'q':
		{
			system ("cls");
			menu();
			movement = 0;
			break;
		}
	case 'L':case'l':
		{
			ofstream save;
			save.open("GameData.txt");
			if(!save) {cout<<"ERROR."<<endl;}
			else 
			{
				cout<<"Saving..."<<endl;
				Sleep(1000);
				save<<map.x<<endl<<map.y<<endl<<door.x<<endl<<door.y<<endl<<window.x<<endl<<window.y<<endl<<sofa.x<<endl<<sofa.y<<endl<<man.x<<endl<<man.y<<endl;
				save.close();
				cout<<"SUCCESS!;"<<endl;
			}
			movement--;
			break;
		}
	default: 
		{
			cout<<"That's Not An Optional Choice."<<endl;
			if (movement > 0) movement--;
			move();
			break;
		}
	}
	return;
}
