#define _CRT_SECURE_NO_WARNINGS 1
#include <cstdio>
#include <iostream>
using namespace std;
//int main()
//{
//    int A, B;
//    cin >> A >> B;
//    if (A % B == 0 || B % A == 0)
//    {
//        cout << "Sao" << endl;
//    }
//    else
//    {
//        cout << "Nao Sao" << endl;
//    }
//    return 0;
//}

//int main()
//{
//    int x, y;
//    double price;
//    scanf("%d%d", &x, &y);
//    if (x == 1) price = 4;
//    else if (x == 2) price = 4.5;
//    else if (x == 3) price = 5;
//    else if (x == 4) price = 2;
//    else price = 1.5;
//    printf("Total:R$ %.2lf\n", price * y);
//    return 0;
//}

//int main()
//{
//    double x;
//    cin >> x;
//    if (x >= 0 && x <= 25) cout << "[0, 25]" << endl;
//    else if (x > 25 && x <= 50) cout << "(25, 50]" << endl;
//    else if (x > 50 && x <= 75) cout << "(50, 75]" << endl;
//    else if (x > 75 && x <= 100) cout << "(75, 100]" << endl;
//    else cout << "Fora de intervalo" << endl;
//    return 0;
//}

//int main()
//{
//    double a, b, c;
//    cin >> a >> b >> c;
//    if (a + b > c && a + c > b && b + c > a)
//    {
//        printf("C = %.1lf\n", a + b + c);
//    }
//    else
//    {
//        printf("Area = %.1lf\n", (a + b) * c / 2);
//    }
//    return 0;
//}

#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a >= b && a >= c) cout << a << endl;
    else if (b >= a && b >= c) cout << b << endl;
    else if (c >= a && c >= b) cout << c << endl;

    return 0;
}