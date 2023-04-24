#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    int nota[6] = { 0 };
    int moeda[6] = { 0 };
    double n = 0;
    cin >> n;
    while (n >= 100)
    {
        n = n - 100;
        nota[0]++;
    }
    while (n >= 50)
    {
        n = n - 50;
        nota[1]++;
    }
    while (n >= 20)
    {
        n = n - 20;
        nota[2]++;
    }
    while (n >= 10)
    {
        n = n - 10;
        nota[3]++;
    }
    while (n >= 5)
    {
        n = n - 5;
        nota[4]++;
    }
    while (n >= 2)
    {
        n = n - 2;
        nota[5]++;
    }
    while (n >= 1)
    {
        n = n - 1;
        moeda[0]++;
    }
    while (n >= 0.5)
    {
        n = n - 0.5;
        moeda[1]++;
    }
    while (n >= 0.25)
    {
        n = n - 0.25;
        moeda[2]++;
    }
    while (n >= 0.1)
    {
        n = n - 0.1;
        moeda[3]++;
    }
    while (n >= 0.05)
    {
        n = n - 0.05;
        moeda[4]++;
    }
    while (n >= 0.01)
    {
        n = n - 0.01;
        moeda[5]++;
    }
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", nota[0]);
    printf("%d nota(s) de R$ 50.00\n", nota[1]);
    printf("%d nota(s) de R$ 20.00\n", nota[2]);
    printf("%d nota(s) de R$ 10.00\n", nota[3]);
    printf("%d nota(s) de R$ 5.00\n", nota[4]);
    printf("%d nota(s) de R$ 2.00\n", nota[5]);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moeda[0]);
    printf("%d moeda(s) de R$ 0.50\n", moeda[1]);
    printf("%d moeda(s) de R$ 0.25\n", moeda[2]);
    printf("%d moeda(s) de R$ 0.10\n", moeda[3]);
    printf("%d moeda(s) de R$ 0.05\n", moeda[4]);
    printf("%d moeda(s) de R$ 0.01\n", moeda[5]);
    return 0;
}