#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

int example1 ()
{
	FILE* f;

	int a = 190;
	int b = 290;
	int c = 390;

	f = fopen("data.bin", "w");

	if (f == NULL)
	{
		//error
	}
	else
	{
		fwrite(&a, sizeof(int), 1, f);
		fwrite(&b, sizeof(int), 1, f);
		fwrite(&c, sizeof(int), 1, f);
		fclose(f);
	}


	FILE* f1 = fopen("data.bin", "r");
	if (f1 == NULL)
	{
		//error
	}
	else
	{
		int read=fread(&b, sizeof(int), 1, f1);
		printf("%d", b);
		fclose(f1);
	}
}

int exe1_2()
{
	FILE* f;
	short num;
	scanf("%hu", &num);
	f=fopen("exe1_2.bin", "w");

	if (f == NULL)
	{
		//error
	}
	else
	{
		fwrite(&num, sizeof(short), 1, f);
		fclose(f);
	}


	FILE* f1;
	short num2;
	f1 = fopen("exe1_2.bin", "r");
	if (f1 == NULL)
	{
		//error
	}
	else
	{
		fread(&num2, sizeof(short), 1, f1);
		num2 = num2 * num2;
		printf("%hu", num2);
		fclose(f1);
	}
}

int exe3()
{
	FILE* f;
	int num;
	f = fopen("exe3.bin", "w");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &num);
		

		if (f == NULL)
		{
			//error
		}
		else
		{
			fwrite(&num, sizeof(int), 1, f);
			
		}
	}
	fclose(f);

	
} 

int exe4()
{
	FILE* f;
	f = fopen("numbersloop.bin", "r");
	int sum = 0;
	int num;
	for (int i = 0; i < 10; i++)
	{
		if (f == NULL)
		{
			//error
		}
		else
		{

			fread(&num, sizeof(int), 1, f);
			printf("%d\n", num);
			sum = sum + num;
		}
	}
	fclose(f);
	printf("%d", sum);

}


int example2()
{
	int arr[5] = { 23,44,56,100,1009 };
	FILE* f = fopen("array.dat", "w");
	if (f == NULL)
	{
		//error
	}
	else
	{
		//arr =&arr[5]
		int written = fwrite(arr, sizeof(int), 5, f);
		fclose(f);
	}


	FILE* f1;
	 int arr2[5];

	f1 = fopen("array.dat", "r");
	if (f1 == NULL)
	{
		//error
	}
	else
	{
		fread(arr2, sizeof(int), 2, f1);
		printf("%s", arr2);
		fclose(f1);
			
	}
}


int example3()
{
	FILE* f;
	struct student
	{
		char name[100];
		int age;
	};


	f = fopen("struct.bin", "w");

	struct student stu;
	strcpy(stu.name, "Shlomi");
	stu.age = 18;

	if (f == NULL)
	{
		// error

	}
	else
	{
		fwrite(&stu, sizeof(struct student), 1, f);
		fclose(f);
	}


	struct student newStu;

	f = fopen("struct.bin", "r");
	if (f == NULL)
	{
		// error
	}
	else
	{
		int read = fread(&newStu, sizeof(struct student), 1, f);
		fclose(f);
	}

	return 0;
}


int example4()
{
	struct Student
	{
		int age;
		char name[100];
		int classLevel;
	};

	struct Student s = { 20,"Amos",1 };
	s.age = 21;

	FILE* f = fopen("oneStudent.dat", "w");

	if (f == NULL)
	{
		// error
	}
	else
	{
		fwrite(&s, sizeof(struct Student), 1, f);
		fclose(f);
	}
	//////////////////////////////////////////////////////

	/// Prepare memory

	struct Student* list;
	struct Student* currentStudent;

	int size = 4;
	currentStudent = malloc(sizeof(struct Student) * size);
	list = currentStudent;


	strcpy(currentStudent->name, "Matan");
	currentStudent->classLevel = 2;
	currentStudent->age = 30;
	currentStudent++;


	strcpy(currentStudent->name, "Amos");
	currentStudent->classLevel = 3;
	currentStudent->age = 22;
	currentStudent++;

	strcpy(currentStudent->name, "Amram");
	currentStudent->classLevel = 5;
	currentStudent->age = 24;
	currentStudent++;

	strcpy(currentStudent->name, "Yaacov");
	currentStudent->classLevel = 123;
	currentStudent->age = 120;


	/// Save Memory
	f = fopen("students.dat", "w");
	fwrite(list, sizeof(struct Student), size, f);
	fclose(f);

	// free
	free(list);
}

 

int main()
{
	example2();

	return 0;
}
