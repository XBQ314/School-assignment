#include <iostream>
#include "coordin.h"
extern position map, door, window, sofa, man;
extern int movement;
using namespace std;
void draw_map()
{
	for(int i = 0;i <= map.x-1;i++)
	{
		if ( i == man.x && 0 == man.y) cout<<'@';
		else if ( i == window.x && window.y == 0) cout<<'-';
		else if ( i == sofa.x && sofa.y == 0)cout<<'*';
		else if ( i == door.x && door.y == 0) cout<<' ';
		else cout<<'#';
	}
	cout<<endl;
	for(int j = 1;j <= map.y-2;j++)
	{
		for(int k = 0;k <= map.x-1;k++)
		{
			if ( k == man.x && j == man.y) cout<<'@';
			else if (k == 0 || k == map.x-1)
			{
				if ( k == sofa.x && sofa.y == j)cout<<'*';
				else if ( k == door.x && j == door.y) cout<<' ';
				else if (k == window.x && j == window.y) cout<<'|';
				else cout<<'#';
			}
			else if ( k == sofa.x && j == sofa.y) cout<<'*';
			else if ( k == man.x && j == man.y) cout<<'@';
			else cout<<' ';
		}
		cout<<endl;
	}
	for(i = 0;i <= map.x-1;i++)
	{
		if ( i == man.x && j == man.y) cout<<'@';
		else if ( i == window.x && window.y == map.y-1) cout<<'-';
		else if ( i == sofa.x && sofa.y == map.y-1)cout<<'*';
		else if ( i == door.x && door.y == map.y-1) cout<<' ';
		else cout<<'#';
	}
	cout<<endl;
	cout<<"你一共移动了"<<movement<<"次"<<endl;
	cout<<"Press R to restart"<<endl;
	cout<<"Press Q to quit"<<endl;
	cout<<"Press L to save"<<endl;
}