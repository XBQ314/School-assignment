#include <iostream>
using namespace std;
struct position
{
	int x;
	int y;
}; 
void move(position& man,position& box);
void get_value(position&);
void draw_map(const position& man, const position& box,const position& map,const int& exit);
int judge_situation(const position& man, const position& box,const position& map,const int& exit);
int main()
{
	bool a =1;
	int exit;
	position man, box, map;
	get_value(map);
	get_value(man);
	get_value(box);
	cin>>exit;
	draw_map(man,box,map,exit);
	while (a)
	{
		move(man, box);
		cout<<judge_situation(man,box,map,exit)<<endl;
		draw_map(man,box,map,exit);
	}
	return 0;
}
void get_value(position& a)
{
	cin>>a.x;
	cin>>a.y;
	return;
}
void draw_map(const position& man, const position& box,const position& map,const int& exit)
{
	for(int i = 1;i <= map.x;i++){cout<<"#";}
	cout<<endl;
	for(int j = 2;j <= map.y-1;j++)
	{
		for(int k = 1;k <= map.x;k++)
		{
			if (k == 1){cout<<"#";}
			else if (k == man.x && j == man.y){cout<<'*';}
			else if (k == box.x && j == box.y){cout<<'$';}
			else if (k == map.x && j != exit){cout<<'#';}
			else {cout<<' ';}
		}
		cout<<endl;
	}
	for(i = 1;i <= map.x;i++){cout<<"#";}
	cout<<endl;
}
void move(position& man,position& box)
{
	char movement;
	cout<<"Please do something."<<endl;
	cin>>movement;
	switch(movement)
	{
	case 'W':case'w':
		{
			man.y--;
			if (man.x == box.x && man.y == box.y){box.y--;}
			break;
		}
	case 's':case'S':
		{
			man.y++;
			if (man.x == box.x && man.y == box.y){box.y++;}
			break;
		}
	case 'a':case'A':
		{
			man.x--;
			if (man.x == box.x && man.y == box.y){box.x--;}
			break;
		}
	case 'D':case'd':
		{
			man.x++;
			if (man.x == box.x && man.y == box.y){box.x++;}
			break;
		}
	}
	return;
}
int judge_situation(const position& man, const position& box,const position& map,const int& exit)
{
	int situation = 0;
	situation = ((man.x == map.x)|(man.x == 1)<<1|(man.y == map.y)<<2|(man.y == 1)<<3|(box.x == map.x)<<4|(box.x == 1)<<5|(box.y == map.y)<<6|(box.y == 1)<<7);
/*	switch (situation)
	{
	case 1:case 2:case 4:case 8
	}*/
	return situation;
}