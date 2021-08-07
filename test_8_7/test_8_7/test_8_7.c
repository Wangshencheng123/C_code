#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


int main()
{
	int a = (int)3.14;//double  -->int  （类型）强制类型转换
	printf("%d\n", a);
	return 0;
}
//int main()
//{
//	int a = 10;
//	int b = a++;//后置++，先使用，再++
//	int b = ++a;//前置++，先++，再使用
//	int b = a--;//后置--，先--，再使用
//	int b = --a;//前置--，先使用，再--
//	printf("a = %d b = %d\n", a, b);//
//
//	return 0;
//}











//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1, num2);
//	printf("max = %d\n", max);
//	return 0;
//}






//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//		printf("较大值是：%d\n", num1);
//	else
//		printf("较大值是：%d\n", num2);
//	return 0;
//}