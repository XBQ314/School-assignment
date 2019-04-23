#include <iostream>
#include <conio.h>
#include "coordin.h"
extern int movement;
extern position map, door, window, sofa, man;
using namespace std;
void move_fix()
{
	char ch = '0';
	if (man.x == door.x && man.y == door.y) {cout<<"Dont Leave Without Your Box!"<<endl;}
	else if (man.x == 0) {cout<<"You Hit The Wall!"<<endl;man.x++;movement--;}
	else if (man.x == map.x-1) {cout<<"You Hit The Wall!"<<endl;man.x--;movement--;}
	else if (man.y == 0) {cout<<"You Hit The Wall!"<<endl;man.y++;movement--;}
	else if (man.y == map.y-1) {cout<<"You Hit The Wall!"<<endl;man.y--;movement--;}

	if (sofa.x == door.x && sofa.y == door.y) 
	{
		draw_map();
		cout<<"You Win!"<<endl;
		cout<<"R to restert,Q to quit."<<endl;
		move();
		return;
	}

	if (sofa.x == 0) {cout<<"The Sofa Hits The Wall!"<<endl;man.x++;sofa.x++;movement--;}
	else if (sofa.x == map.x-1) {cout<<"The Sofa Hits The Wall!"<<endl;man.x--;sofa.x--;movement--;}
	else if (sofa.y == 0) {cout<<"The Sofa Hits The Wall!"<<endl;man.y++;sofa.y++;movement--;}
	else if (sofa.y == map.y-1) {cout<<"The Sofa Hits The Wall!"<<endl;man.y--;sofa.y--;movement--;}
	return;
}