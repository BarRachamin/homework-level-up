#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning (disable;4996)


int exe1()
{

	struct Item
	{

		char name[100];
		int age;
		int ID;

	};

	struct Item listperson[100];

for (int i = 0; i < 5; i++)
{

	scanf("%s %d %d ",  listperson[i].name, &listperson[i].age, &listperson[i].ID);


	
}

for (int i = 0; i <5; i++)
{
	printf(" %s %d %d\n", listperson[i].name, listperson[i].age, listperson[i].ID);
	
}


}



int main()
{

}
