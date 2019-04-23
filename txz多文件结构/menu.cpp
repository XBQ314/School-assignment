#include <iostream>
#include <windows.h>
#include <conio.h>
#include <fstream>
#include "coordin.h"
extern position map, door, window, sofa, man;
extern int movement;
using namespace std;
void menu()
{
	cout<<"1: START GAME"<<endl<<"2: LOAD GAME"<<endl<<"3: QUIT GAME"<<endl;
	char ch;
	ch = getch();
	switch (ch)
	{
		case '1':
		{
			make_value();
			Sleep(1000);
			system ("cls");
			return;
		}
		case '2':
		{
			movement = 0;
			cout<<"Loading..."<<endl;
			Sleep(1000);
			ifstream save;
			save.open("GameData.txt");
			if (!save) {cout<<"open file for read error." <<endl;return;}
			save>>map.x>>map.y>>door.x>>door.y>>window.x>>window.y>>sofa.x>>sofa.y>>man.x>>man.y;
			save.close();
			return;
		}
		case '3':
		{
			cout<<"Exiting..."<<endl;
			exit(0);
			break;
		}
		default: {cout<<"That's not an optional choice."<<endl;menu();}
	}
	return; 
}