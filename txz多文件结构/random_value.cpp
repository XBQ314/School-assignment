#include<iostream>
#include <stdlib.h>
#include <time.h>
#include"coordin.h"
extern position map, door, window, sofa, man;
using namespace std;
void make_value ()
{
	bool a = 1;
	cout<<"默认房间的长度和宽度分别为15与10个单位。"<<endl;
	map.x = 15;
	map.y = 10;
	cout<<"正在随机生成门的位置。"<<endl;
	get_value(door);
	while (a == 1)
	{
		if (on_the_wall(door,map)&&!(at_corner(door,map))) {a = 0;}
		else 
		{
			get_value(door);
		}
	}
	cout<<door.x<<"  "<<door.y<<endl;
	a = 1;
	cout<<"正在随机生成窗的位置。"<<endl;
	get_value(window);
	while (a == 1)
	{
		if (on_the_wall(window,map)&&(!nearby(window,door))&&!(at_corner(window,map))) a = 0;
	    else 
		{
			get_value(window);
		} 
	}
	cout<<window.x<<"  "<<window.y<<endl;
	a =1;
	cout<<"正在随机生成家居的位置。"<<endl;
	get_value(sofa);
	while (a == 1)
	{
		if (!(on_the_wall(sofa,map))&&!(nearby(sofa,door))) a = 0;
	    else 
		{
			get_value(sofa);
		} 
	}
	cout<<sofa.x<<"  "<<sofa.y<<endl;
	a = 1;
	cout<<"正在随机生成人的位置。"<<endl;
	get_value(man);
	while (a == 1)
	{
		if (!(on_the_wall(man,map)) && !nearby(man, sofa)) a = 0;
	    else 
		{
			get_value(man);
		}
	}
	cout<<man.x<<"  "<<man.y<<endl;
	return;
}
void get_value(position& a)
{
	a.x = (random()%15);
	a.y = (random()%10);
	return;
}

int random()
{
	srand((unsigned int) time(NULL));
	return rand();
}
bool on_the_wall(const position& a,const position& map)
{
	if ((a.x == 0 || a.x == map.x-1 || a.y == 0 || a.y == map.y-1) && a.x <= map.x-1 && a.y <= map.y-1) {return 1;}
	else return 0;
}
bool nearby(const position& a,const position& b)
{
	if ((a.x == b.x+1 && a.y == b.y) ||
		(a.x == b.x-1 && a.y == b.y) ||
		(a.y == b.y+1 && a.x == b.x) ||
		(a.y == b.y-1 && a.x == b.x) ||
		(a.x == b.x && a.y == b.y)) return 1;
	else return 0;
}
bool at_corner(const position& a,const position& map)
{
	if ((a.x == 0 && a.y == 0) || (a.x == map.x-1 && a.y == map.y-1) || (a.x == 0 && a.y == map.y-1) ||(a.x == map.x-1 && a.y == 0)) return 1;
	return 0;
}