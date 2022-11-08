#include"BALL.h"
#include <iostream>
#include <string.h>
#pragma warning(disable:4996)


Ball::Ball(int nsize, char ntype[15], char ncolor[20])
{
	size = nsize;
	strcpy(type, ntype);
	strcpy(color, ncolor);
}

void Ball::Jumping()
{
	size -= 1;
	strcpy(color, " black");
}

void Ball::Roll()
{
	size -= 1;
	strcpy(color, "black");
}

void Ball::WashAndPump(int Nsize, char Ncolor[20])
{
	size = Nsize;
	strcpy(color, Ncolor);
}