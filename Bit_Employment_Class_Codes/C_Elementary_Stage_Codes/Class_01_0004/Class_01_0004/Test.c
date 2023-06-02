#include <stdio.h>
int func(int a)
{
    int b;
    switch (a)
    {
    case 1: b = 30;
    case 2: b = 20;
    case 3: b = 16;
    default: b = 0;
    }
    return b;
}

int main()
{
    int b = func(1);
    printf("%d\n", b);
    return 0;
}