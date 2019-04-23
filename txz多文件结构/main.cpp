#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include "coordin.h"
using namespace std;
position map, door, window, sofa, man;
int movement = 0;
int main()
{
	menu();
	draw_map();
	while (1)
	{
		move();
		draw_map();
	}
	return 0;
}

