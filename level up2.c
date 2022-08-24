#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 #pragma warning(disable:4996)



int Exe1(unsigned char num1, unsigned char num2)
{
  
    num1 <<= num2;
    return num1;
}

char Exe2()
{
    char num1 = 0b00000011;
    char mask = 0b00000001;
    char maskResult = num1 ^ mask;
    return maskResult;
}

unsigned char Exe3(unsigned char num)
{
    unsigned char home[255];
    unsigned char newnum = num;
    unsigned char mask = 0b00000001;
    for (int i = 0; i < 8; i++)
    {
        char onebit = newnum & mask;
        newnum = newnum >> 1;
        
        home[i] = onebit;


    }
    for (int i = 7; i >= 0; i--)
    {
        printf("%d", home[i]);
    }

}




unsigned char Exe4(unsigned char x)
{
    unsigned char home[255];
    unsigned char mask = 0b00000001;
    unsigned char num = mask << x - 1;
    
   

    for (int i = 0; i < 8; i++)
    {
        char onebit = num & mask;
        num= num >> 1;

        home[i] = onebit;


    }
    for (int i = 7; i >= 0; i--)
    {
        printf("%d", home[i]);
    }

    return 0;
}

unsigned char Exe5()
{
    unsigned char home[255];
    unsigned char mask = 0b00000001;
    unsigned char num1 = mask << 7 - 1;
    for (int i = 0; i < 8; i++)
    {
        char onebit = num1 & mask;
        num1 = num1 >> 1;

        home[i] = onebit;


    }
    for (int i = 7; i >= 0; i--)
    {
        printf("%d", home[i]);

    }
    printf("\n");
     home[255];
    unsigned char sum = num1 ^ num1;
    for (int i = 0; i < 8; i++)
    {
        char onebit = sum & mask;
        sum = sum >> 1;

        home[i] = onebit;


    }
    for (int i = 7; i >= 0; i--)
    {
        printf("%d", home[i]);
    }
    printf("\n");
     home[255];
    unsigned char num2 = mask <<2 - 1;
    for (int i = 0; i < 8; i++)
    {
        char onebit = num2 & mask;
        num2 = num2 >> 1;

        home[i] = onebit;


    }
    for (int i = 7; i >= 0; i--)
    {
        printf("%d", home[i]);
    } home[255];
    printf("\n");
    num1 = mask << 7 - 1;
    for (int i = 0; i < 8; i++)
    {
        char onebit = num1 & mask;
        num1 = num1 >> 1;

        home[i] = onebit;


    }
    for (int i = 7; i >= 0; i--)
    {
        printf("%d", home[i]);
    }
    printf("\n");
   unsigned char sum2 = num1 ^ num2;
    
    home[255];
    for (int i = 0; i < 8; i++)
    {
        char onebit = sum2 & mask;
        sum2 = sum2 >> 1;

        home[i] = onebit;


    }
    for (int i = 7; i >= 0; i--)
    {
        printf("%d", home[i]);
    }

}

    int main()
    {
        Exe5();
        

    }
