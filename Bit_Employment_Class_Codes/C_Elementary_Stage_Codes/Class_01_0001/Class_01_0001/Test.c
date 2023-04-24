#define _CRT_SECURE_NO_WARNINGS 1

//写一个C语言的代码，在屏幕上打印：hello bit
//#include <stdio.h>
//int main()
//{
//	printf("hello bit\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("%d\n%d\n", 20, 10);
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int age1;
//	int age2 = 20;
//
//	float weight = 55.5f;
//	double weight2 = 80.5;
//
//	int num = 10;
//	printf("%d\n", num);
//	num = 20;
//	printf("%d\n", num);
//
//	return 0;
//}

//#include <stdio.h>
//int a = 100; //全局变量
//
//int main()
//{
//	int a = 10; //局部变量
//	printf("a = %d\n", a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//写一个代码，求两个整数的和
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//输入两个整数的值
//	scanf("%d %d", &num1, &num2);
//	sum = num1 + num2;
//	//打印
//	printf("%d\n", sum);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	/*int a = 0;
//	scanf("%d", &a);
//	printf("%d\n", a);*/
//
//	char ch = 0;
//	scanf("%c", &ch);
//	printf("%c\n", ch);
//	return 0;
//}

//include <stdio.h>
//int main()
//{
//	{
//		int a = 100;
//		printf("%d\n", a);
//	}
//	printf("%d\n", a);
//	
//	return 0;
//}

//需要声明外部符号
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

//include <stdio.h>
//int main()
//{
//	const int a = 3;
//	printf("%d\n", a);
//	return 0;
//}

//include <stdio.h>
//int main()
//{
//    //数组的创建
//    const int n = 10;   //错误！
//    int arr[n];
//    return 0;
//}

//#include <stdio.h>
//#define SIZE 10
//#define MAX = 10000
//#define CH 'W'
//int main()
//{
//	//10
//	int a = SIZE;
//	int arr[SIZE] = { 0 };
//	printf("%c\n", CH);
//	return 0;
//}

//#include <stdio.h>
//enum SEX
//{
//    //列出了枚举类型的可能取值
//    //枚举常量
//    MALE = 4,
//    FEMALE, //5
//    SECRET  //6
//};
//
//int main()
//{
//    //MALE = 5;   //会报错！
//    enum SEX s = FEMALE;
//    printf("%d\n", s);
//
//    printf("%d\n", MALE);
//    printf("%d\n", FEMALE);
//    printf("%d\n", SECRET);
//}

//#include <stdio.h>
//int main()
//{
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	"abcdef";
//	char ch1 = 'a';
//	char ch2 = 'b';
//	char ch3 = 'c';
//	char ch1[6] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	char ch2[] = "abcdef";
//	char ch3[] = { '\0', 'a', 'b', 'c', 'd', 'e', 'f' };
//
//	printf("%s\n", ch1);
//	printf("%s\n", ch2);
//	printf("%s\n", ch3);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    char ch1[] = { 'a', 'b', 'c' };
//    char ch2[] = "abc";
//    int len1 = strlen(ch1);
//    int len2 = strlen(ch2);
//    printf("%d\n", len1);
//    printf("%d\n", len2);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    printf("(are you ok??)\n");
//    //are you ok]
//    //??) -> 三字母词 -> 代表 ]
//    printf("(are you ok\?\?)\n");
//
//    printf("ab\ndef\n");
//
//    printf("C:\test\test.c");
//    printf("C:\\test\\test.c");
//
//    printf("%c\n", 'a');
//    //printf("%c\n", ''');    //出错！
//    printf("%c\n", '\'');
//
//    printf("%c\n", "'");    //$
//    printf("%s\n", "'");       //'
//
//    printf("%s\n", "a\\tb");
//
//    printf("%s\n", "abc\bdef");
//
//    printf("%c\n", '\130'); //X
//    printf("%c\n", '\133'); //[
//    printf("%s\n", "\13045612"); //X45612
//
//    printf("%c\n", '\x31'); //1
//
//    printf("%d\n", strlen("c:\test\x11\328\test.c"));   //字符串长度为15
//
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("加入比特就业课学习\n");
//	printf("你愿意好好学习吗？(1/0)>:");
//	int flag = 0;
//	scanf("%d", &flag);
//
//	if (flag == 1)
//	{
//		printf("好offer\n");
//	}
//	else if (flag == 0)
//	{
//		printf("卖红薯\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int line = 0;
//	while (line < 50000)
//	{
//		if (...)
//		{
//			//...
//		}
//		printf("敲代码：%d\n", line);
//		line++;
//	}
//
//	if (line == 50000)
//		printf("好offer\n");
//	else
//		printf("差点意思\n");
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	printf("hehe\n");
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int iq, eq;
//	int n;
//	n = scanf("%d %d", &iq, &eq);
//	printf("%d\n", n);
//	return 0;
//}

//#include <stdio.h>
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	//求两个整数的和
//	int a = 0;
//	int b = 0;
//
//	//输入
//	scanf("%d %d", &a, &b);
//	int sum = Add(a, b);
//	//输出
//	printf("%d\n", sum);
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//这是一个整型数组，最多放10个元素
//    //              0  1  2  3  4  5  6  7  8  9
//    char ch[8];//这是一个字符数组
//
//    //打印下标为5的数组元素.
//    printf("%d\n", arr[5]);
//    //遍历数组元素并打印.
//    int i = 0;
//    while (i < 10)
//    {
//        printf("%d ", arr[i]);
//        i++;
//    }
//
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 7 / 2;
//	printf("%d\n", a);	//7
//}

#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    //输入
    scanf("%d", &a);
    scanf("%d", &b);
    int m = 0;
    m = a > b ? a : b;
    /*
    if (a > b) m = a;
    else m = b;
    */
    printf("%d\n", m);
    return 0;
}