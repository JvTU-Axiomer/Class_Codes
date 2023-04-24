#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 4;
//	int b = 5;
//	if (a >= b)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//int main()
//{
//	//并且 && 逻辑与，两个操作数都为真，才为真；只要有一个为假，则为假.
//	//或	者 || 逻辑或，两个操作数只要有一个为真，则为真；两个同时为假，才为假.
//	//非零表示真，零表示假.
//	int a = 0;
//	int b = 0;
//	if (a && b)
//	{
//		printf("hehe\n");
//	}
//	if (a || b)
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//int  main()
//{
//	int a = 0;
//	int b = 0;
//	//scanf("%d %d", &a, &b);
//	scanf("%d", &a);
//	scanf("%d", &b);
//	int m = 0;
//	//(a > b) ? (m = a) : (m = b);
//	m = (a > b ? a : b);
//	/*if (a > b)
//	{
//		m = a;
//	}
//	else
//	{
//		m = b;
//	}*/
//	printf("%d\n", m);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 2;
//	int c = 5;
//	int d = (a += 3, b = 5, c = a + b, c - 4);	//d = 7.
//	printf("%d\n", d);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//下标：			0  1  2  3  4  5  6  7  8  9
//	printf("%d\n", arr[5]);
//	//arr[5]有两个操作数，一个是arr，另一个是5.
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int z = Add(3, 5);	//函数调用操作符.
//	printf("hehe\n");
//	return 0;
//}

//int main()
//{
//	auto int num = 0;
//	return 0;
//}

//typedef unsigned int u_int;
//typedef unsigned long long ull;
//int main()
//{
//	unsigned int num1 = 0;
//	u_int num2 = 0;
//	ull num3 = 0;
//
//	return 0;
//}
//
//typedef struct Node
//{
//	int dada;
//	struct Node* Node;
//}Node;

//void test()
//{
//	int a = 5;
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//void test()
//{
//	int a = 5;
//	a++;
//	printf("%d ", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//extern int g_val;	//声明外部符号 - 只是声明类型和位置，不涉及变量的具体值.
//int main()
//{
//
//	printf("%d\n", g_val);
//	return 0;
//}

//extern int Add(int x, int y);
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int s = Add(a, b);
//	printf("%d\n", s);
//	return 0;
//}

//int main()
//{
//	register int num = 10;
//	return 0;
//}

//#include <stdio.h>
//#define M 100
//int main()
//{
//    int arr[M] = { 0 };
//    int m = M;
//    printf("%d\n", sizeof(arr));    //400
//    printf("%d\n", M);
//    printf("%d\n", m);
//
//    return 0;
//}

//#define ADD(x, y) ((x) + (y))
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//	printf("%d\n", c);
//	return 0;
//}

struct Stu
{
    //定义学生的相关属性：
    char name[20];	//名字.
    int age;		//年龄.
    char sex[5];	//性别.
    char id[15];	//学号.
};

struct Book
{
    //定义书籍的相关属性：
    char name[20];  //成员
    char author[10];    //成员
    double price;   //成员
};

int main()
{
    struct Stu s = { "张三", 18, "男" };	//创建一个对象并且初始化.
    struct Book b = { "《鹏哥C语言》", "鹏哥", 66.6f };

    printf("%s %s %f\n", b.name, b.author, b.price);
    return 0;
}