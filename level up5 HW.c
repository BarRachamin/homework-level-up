#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning (disable:4996)



int exe1()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	FILE* f;
	f = fopen("exe5_1.bin", "w");
	if (f)
	{
		fwrite(arr, sizeof(int), 10, f);
		fclose(f);
	}
	else
	{
		printf("error");
	}
	return 0;
}

int exe2()
{
	int arr1[4];
	int arr2[8];
	int sum1 = 0;
    int sum2 = 0;	
	for (int i = 0; i < 4; i++)
	{
		printf("this is int4 ");
		scanf("%d", &arr1[i]);
		sum1 = sum1 + arr1[i];

	}
	for (int i = 0; i < 8; i++)
	{
		printf("this is int8 ");
		scanf("%d", &arr2[i]);
		sum2 = sum2 + arr2[i];
	}
	FILE* f;
	f = fopen("exe5_2.bin", "w");
	if (sum1 > sum2)
	{
		if (f)
		{
			fwrite(arr1, sizeof(int), 4, f);
			fclose(f);
		}
		else
		{
			printf("error");
		}
	}
	else
	{
		if (f)
		{
			fwrite(arr2, sizeof(int), 8, f);
			fclose(f);
		}
		else
		{
			printf("error");
		}
	}
	
	return 0;
}


int exe3()
{
	struct Exe3
	{
        int val;
		char name[100];
		short answer;
	};

	struct Exe3 test1;

	scanf("%d", &test1.val);

	scanf("%s", &test1.name);

	

	if ((strlen(test1.name) > 5) && (test1.val > 10))
	{
		test1.answer=1;
	}
	else
	{
		test1.answer = 0;
	}
	FILE* f;
	f = fopen("exe5_3.bin", "w");
	if (f)
	{
		fwrite(&test1, sizeof(struct Exe3), 3, f);
		fclose(f);
	}
	else
	{
		printf("erorr");

	}
	return 0;
}


int exe4()
{
	int arr[15];
	int num = 1;
	for (int i = 0; i < 15; i++)
	{
		arr[i] = num;
		num = num + 6;

		
	}

	FILE* f;
	f = fopen("exe5_4.bin", "w");
	if (f)
	{
		fwrite(&arr, sizeof(int), 15, f);
		fclose(f);
	}
	else
	{
		printf("error");
	}
	return 0;
}

int exe5()
{
	FILE* f;
	int sum = 0;
	int counti = 0;
	int num;
	f = fopen("EX4.bin", "r");
	if (f)
	{


		while(fread(&num, sizeof(int), 1, f))
		{
			printf("the number: %d\n", num);
			sum = sum + num;
			counti++;
			
		}
		fclose(f);
		printf(" the sum:%d\n", sum);
		printf("the number of int:%d", counti);
	}
	else
	{
		printf("error!!");
	}
	return 0;

}


int exe6()
{
	struct Exe6
	{
		int val;
		char name[100];
		short answer;
	};

	int memoryNum;
	printf("number of memory:\n");
	scanf("%d",&memoryNum);

	struct Exe6* list;
	struct Exe6* startlist;
	int sumval = 0;
	list = malloc(sizeof(struct Exe6) * memoryNum);
	startlist = list;

	for (int i = 0; i < memoryNum; i++)
	{
		printf("val:\n");
		scanf("%d",&list->val);
		printf("name:\n");
		scanf("%s",&list->name);

		if ((strlen(list->name) > 5) && (list->val > 10))
		{
			list->answer = 1;
		}
		else
		{
			list->answer = 0;
		}

		sumval = sumval + list->answer;
		list++;
	}

	FILE* f;
	f = fopen("exe5_6.bin", "w");
	fwrite(startlist, sizeof(struct Exe6), memoryNum, f);
	fclose(f);
	printf("%d", sumval);
	free(startlist);

	

}

int main()
{

	exe6();


	return 0;

}