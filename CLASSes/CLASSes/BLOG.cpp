#include "BLOG.h"
#include <iostream>
#include <string.h>
#pragma warning(disable:4996)


BLOG::BLOG(char nNAme[20],int nsize)
{
	sizeblog = nsize;
	strcpy(BlogName, nNAme);
}


void BLOG::Write_inBloge(char* text)
{
	char FileName[20];
	sprintf(FileName, "%s.txt", BlogName);
	strcpy(SpaceBlog, text);
	FILE* Blog = fopen(FileName, "a");

	if (Blog)
	{
	
		fputs(text, Blog);
		fputs("\n", Blog);

	}
	else
	{
		//erorr
	}
	fclose(Blog);
}



void BLOG::print()
{
	printf("The blog of: %s\n", BlogName);
	printf("%s\n", SpaceBlog);
}

void BLOG::LOAD_fromBlog()
{
	char FileName[20];
	sprintf(FileName, "%s.txt", BlogName);
	FILE* Load = fopen(FileName, "r");

	if (Load)
	{
		fread(SpaceBlog,sizeblog,1,Load);
	}
	else
	{
		//error
	}
	fclose(Load);
}