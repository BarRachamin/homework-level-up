#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#pragma warning (disable:4996)

int main_2()
{
	int a = 10;
	int b = 12;
	char operation;
	printf("Please select a calculation operation (+,-,*,/) or press E to exit\n");
	operation = getch();

  while (operation!='E')
  {


	switch (operation)
	{
	case '+':
		printf("%d+%d=%d\n", a, b, a + b);
		break;
	case'-':	
		printf("%d-%d=%d\n", a, b, a - b);
		break;
	case'/':	
		printf("%d/%d=%d\n", a, b, a / b);
		break;
	case'*':	
		printf("%d*%d=%d\n", a, b, a * b);
		break;
	case 'E': 	printf("end of progrm");
		break;
	default:
		printf("Wrong selection. Try be more sharp\n");
		break;
	}
	printf("Please select a calculation operation (+,-,*,/) or press E to exit\n");
	operation = getchar();
  }
}