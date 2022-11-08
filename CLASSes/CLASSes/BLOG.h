#pragma once
class BLOG
{
public:
	
	char BlogName[20];
	int sizeblog;
	char* SpaceBlog = new char(sizeblog);
	int Line_Count;

	BLOG(char nNAme[20], int size);
	void Write_inBloge(char* text);
	void print();
	void LOAD_fromBlog();
};

