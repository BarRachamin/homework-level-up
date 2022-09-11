#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#pragma warning (disable:4996)

time_t t;
struct tm* timeinfo;
char daytime[1000];

void log(char messege[10000000])
{
	FILE* f = fopen("LogFile.log", "a");
char str[100];
	sprintf(str, "%d.%d.%d/%d:%d:%d-%s", timeinfo->tm_mday , timeinfo->tm_mon+1, timeinfo->tm_year + 1900,timeinfo->tm_hour,timeinfo->tm_min,timeinfo->tm_sec,messege);
	fputs(str, f);
	fputs("\n", f);
	fclose(f);
}
  
void LogError(char messege[1000])
{
	char newMessege[1000];
	sprintf(newMessege, "ERROR -%s", messege);
	log(newMessege);
	
}

void LogEvent(char messege[1000])
{
	char newMessege[1000];
	sprintf(newMessege, "Event -%s", messege);
	log(newMessege);

}

int main()
{
	time(&t);
	timeinfo = localtime(&t);
	
	LogEvent("start of log");
	
	int num;
	char str[1000];
	scanf("%d",&num);
	sprintf(str, "%d\n", num);
	log(str);

	FILE* fn = fopen("numbers.txt","w");

	if (!fn)
	{
		LogError("error cant open the file");
	}
	else
	{
		LogEvent("the file  open");
		char snum[1000];
		for (int i = 1; i <= num; i++)
		{
			sprintf(snum, "%d\n", i);
			fputs(snum,fn);
		}
		fclose(fn);
		LogEvent("the file fn are closed");
	}

	LogEvent("end of log");
}



