#include <stdio.h>
#include <stdlib.h>
 #pragma warning (disable:4996)

int Exe1()
{
	 char count = 0;
	FILE* ptr;
	ptr = fopen("C:\\Users\\User\\source\\repos\\mm-C-Lang-main\\mm-C-Lang\\Week2_2_File1.txt", "r");
	if (ptr == NULL)
	{
		printf("ERROR!");
	}
	else
	{
		char ch = fgetc(ptr);
		while (ch != EOF)
		{

			count++;
			ch = fgetc(ptr);
		}
		fclose(ptr);
		printf("%d", count);
		return 0;
	}
}

int Exe2()
{
	char count = 0;
	FILE* ptr;
	ptr = fopen("C:\\Users\\User\\source\\repos\\mm-C-Lang-main\\mm-C-Lang\\Week2_2_File1.txt", "r");
	if (ptr == NULL)
	{
		printf("ERROR!");
	}
	else
	{
		char ch = fgetc(ptr);
		while (ch != EOF)
		{
			
			if (ch == '*')
			{
				count++;
				ch = fgetc(ptr);
			}
		}
		fclose(ptr);
		printf("%d", count);
		return 0;
	}
}

int Exe3()
{
	char count = 0;
	FILE* ptr;
	ptr = fopen("C:\\Users\\User\\source\\repos\\mm-C-Lang-main\\mm-C-Lang\\Week2_2_File2.txt", "r");
	if (ptr == NULL)
	{
		printf("ERROR!");
	}
	else
	{
		char ch = fgetc(ptr);
		while (ch != EOF)
		{

			
			
			if (ch == '\n')
			{
				count++;
			}
			ch = fgetc(ptr);
		}
		fclose(ptr);
		count++;
		printf("%d", count);
		return 0;
	}
}

int Exe4()
{
	
	FILE* Letter;
	Letter= fopen("C:\\Users\\User\\source\\repos\\mm-C-Lang-main\\mm-C-Lang\\Week2_2_File3.txt", "r");
	
	char ptrNum;
	char ptrChar;
	int Counti = 0;
	int Countc = 0;	
	if (Letter == NULL)
	{

		printf("ERROR!");
	}
	else
	{
		ptrNum = fgetc(Letter)-'0';
		ptrChar = fgetc(Letter);
		while (ptrChar != EOF)
		{
			if (ptrChar == 'c')
			{
				Countc += ptrNum;
			}
			else if(ptrChar=='i')
			{
				Counti+=ptrNum;
			}
			ptrNum = fgetc(Letter) - '0';
			ptrChar = fgetc(Letter);
		}
		fclose(Letter);
    int* intArr;
	char* charArr;
	int* intArr2;
	char* charArr2;

		intArr = malloc(Counti * sizeof(int));
		charArr = malloc(Countc * sizeof(char));

		intArr2 = intArr;
		charArr2 = charArr;

		for (int i = 0; i < Counti; i++)
		{
			printf("for int\n");
			scanf("%d", intArr);
			
			printf("%d\n", *intArr);
			printf("%x\n", intArr);
				intArr++;
		}


		for (int i = 0; i < Countc; i++)
		{
			printf("for char\n");
			scanf("%c", charArr);

			printf("%c\n", *charArr);
			printf("%x\n", charArr);
			charArr++;
		}
		free(intArr2);
		free(charArr2);
	}
	return 0;
}


int main()
{
	Exe1();

	return 0;
}
