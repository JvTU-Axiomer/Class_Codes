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
//	//���� && �߼��룬������������Ϊ�棬��Ϊ�棻ֻҪ��һ��Ϊ�٣���Ϊ��.
//	//��	�� || �߼�������������ֻҪ��һ��Ϊ�棬��Ϊ�棻����ͬʱΪ�٣���Ϊ��.
//	//�����ʾ�棬���ʾ��.
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
//	//�±꣺			0  1  2  3  4  5  6  7  8  9
//	printf("%d\n", arr[5]);
//	//arr[5]��������������һ����arr����һ����5.
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int z = Add(3, 5);	//�������ò�����.
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

//extern int g_val;	//�����ⲿ���� - ֻ���������ͺ�λ�ã����漰�����ľ���ֵ.
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
    //����ѧ����������ԣ�
    char name[20];	//����.
    int age;		//����.
    char sex[5];	//�Ա�.
    char id[15];	//ѧ��.
};

struct Book
{
    //�����鼮��������ԣ�
    char name[20];  //��Ա
    char author[10];    //��Ա
    double price;   //��Ա
};

int main()
{
    struct Stu s = { "����", 18, "��" };	//����һ�������ҳ�ʼ��.
    struct Book b = { "������C���ԡ�", "����", 66.6f };

    printf("%s %s %f\n", b.name, b.author, b.price);
    return 0;
}