#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable :4996)


int exemple()
{


	int a = 90;
	int c = 88;
	int* b;

	b = &a;
	//printf("%x\n", b);
	printf("%d\n", *b);

	a = 100;
	//printf("%x\n", b);
	printf("%d\n", *b);

	b = &c;

	b = malloc(10 * sizeof(int));
	*b = 100;
	int* original = b;
	b++;
	*b = 200;

	char* charPtr;
	charPtr = b;
	charPtr++;
	*charPtr = 'A';


	free(original);

	return 0;
}
int Exe1()
{
	 
	int* pointer = malloc(4 * sizeof(int));

	for (int i = 0; i < 4; i++)
	{
		*pointer = i;
		printf("%x\n", pointer);
		printf("%d\n", *pointer);
		pointer++;
	};



	return 0;
}

int* alloc5Numbers (int num1,int num2,int num3,int num4,int num5)
{
	int* adress;
	int* pointer;
	pointer= malloc(5 * sizeof(int));
	adress=pointer;
	if (pointer == NULL)
	{
		printf("erorr");
	}
	else
	{
		*pointer = num1;
		pointer++;
		*pointer = num2;
		pointer++;
		*pointer = num3;
		pointer++;
		*pointer = num4;
		pointer++;
		*pointer = num5;
		

	}
	
	return adress;
}

int printNum(int* numberList)
{
	 
		int sum = 0;
		int* pointer = numberList;

		for (int i = 0; i < 5; i++)
		{
			sum += *pointer;
			
			printf("%d\n", *pointer);
			pointer++;
		}
		printf("%d\n", sum);
		return sum;

}

int allocnumbers(int x)
{
	int* adress;
	int nums;
	int* pointer;
	pointer = malloc(x * sizeof(int));
	adress = pointer;
	for (int i = 0; i < x; i++)
	{
		 scanf("%d", &nums);
		*pointer = nums;
		pointer++;
	}
	
	int sum = 0;
	

	for (int i = 0; i < x; i++)
	{
		sum += *adress;
		printf("adress ");
		printf("%x\n", adress);
		printf("num");
		printf("%d\n", *adress);
		adress++;
	}
	printf("sum ");
	printf("%d\n", sum);

}

int main()
{
	
		int x;
		 scanf("%d", &x);
		allocnumbers(x);

		
	return 0;
}