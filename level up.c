#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
    four();
    return 0;
}

int one(x)
{
    return x % 10;
}

int two(x)
{
    return (x % 100)/10;
}

int three(x)
{
    if (x % 2!=0 && x%3!=0 && x%5!=0 && x%7!=0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int four()
{
    for (int i = 0; i < 10000; i++)
    {
        if (three(i) == 1)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}