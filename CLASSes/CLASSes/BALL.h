#pragma once
class Ball
{
public:

	/// <summary>
	///  Properties
	/// </summary>

	int size;
	char type[15];
	char color[20];

	/// <summary>
	/// Actions
	/// </summary>
	Ball(int nsize, char ntype[15], char ncolor[20]);
	void Jumping();
	void Roll();
	void WashAndPump(int Nsize, char Ncolor[20]);
};