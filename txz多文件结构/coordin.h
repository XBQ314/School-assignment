#ifndef COORDIN_H_
#define COORDIN_H_

struct position
{
	int x;
	int y;
}; 
int random();
void get_value(position&);
void draw_map();
bool on_the_wall(const position&, const position&);
bool nearby(const position&,const position&);
bool at_corner(const position&,const position&);
void move();
void move_fix();
void make_value();
void menu();

#endif