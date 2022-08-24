#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning(disable:4996)



char exe1()
{
	char* filename = "C:\\Users\\User\\source\\repos\\level up4\\level up4\\Exe1.txt";
	char* relativeFilename = "Exe1.txt";

	FILE* f = fopen(relativeFilename, "w");
	if (f == NULL)
	{
		printf("ERROR!");
	}
	else
	{
		for (int i = 0; i < 10; i++)
		{
			fputc('*', f);
			fputc('\n', f);
		}
		fclose(f);
	}
}


char exe2()
{
	char* filename = "C:\\Users\\User\\source\\repos\\level up4\\level up4\\Exe2.txt";
	char* relativeFilename = "Exe2.txt";

	FILE* f = fopen(relativeFilename, "w");
	if (f == NULL)
	{
		printf("ERROR!");
	}
	else
	{
		for (int i = 0; i < 10; i++)
		{
			for (int i = 0; i < 10; i++)
			{
				fputc('A', f);
				
			}
			fputc('\n', f);
		}
		fclose(f);
	}
}

char exe3(int x)
{
	char* filename = "C:\\Users\\User\\source\\repos\\level up4\\level up4\\Exe3.txt";
	char* relativeFilename = "Exe3.txt";

	FILE* f = fopen(relativeFilename, "w");
	if (f == NULL)
	{
		printf("ERROR!");
	}
	else
	{
		for (int i = 0; i <x; i++)
		{
			for (int i = 0; i < 50; i++)
			{
				fputc('*', f);

			}
			fputc('\n', f);
		}
		fclose(f);
	}
}

char exe4()
{
	char word[10];
	//char word2 = "barTHeboss";
 //strcpy(word, word2);
	int number;
	//int word;
	gets(word);
	scanf("%d", &number);
	




	char* filename = "C:\\Users\\User\\source\\repos\\level up4\\level up4\\Exe4.txt";
	char* relativeFilename = "Exe4.txt";

	FILE* f = fopen(relativeFilename, "w");
	if (f == NULL)
	{
		printf("ERROR!");
	}
	else
	{
		for (int i = 0; i < number; i++)
		{


			for (int i = 0; i < strlen(word); i++)
			{
				fputc(word[i], f);

			}

		}
			fputc('\n', f);
		
		fclose(f);
	}
}



int main()
{
	exe2();
	exe3(3);
	exe4();
	return 0;
}