#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#define MAX(X,Y) (X>Y?X:Y)

int main()
{
	int a = 10;
	int b = 20; 
	int max = MAX(a, b);
	printf("%d\n", max);
	return 0;
}



//static 修饰局部变量
//局部变量的生命周期变长
//static 修饰全局变量
//改变了变量的作用域，让静态的全局变量只能在自己所在的源文件内部使用
//出了源文件就不能使用了
//static修饰函数
//也是改变了函数的作用域
//外部链接属性 --> 内部链接属性


//extern int Add(int, int);
//
//int main()
//{
//	int a = 10;
//	int b = 10;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}
//int main()
//{
//	//extern--声明外部符号
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}
//


//static 修饰局部变量
//局部变量的生命周期变长

//void test()
//{
//	static int a = 1;//a是一个静态的局部变量
//	a++;
//	printf("a = %d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while(i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	//typedef--类型定义-类型重定义
//	typedef unsigned int u_int;//重新定义
//	unsigned int num = 10;
//	u_int num = 10;
//	return 0;
//}

//int main()
//{
//	register int a = 10;//建议把a定义成寄存器变量
//	return 0;
//}



//int main()
//{
//	auto int a = 10;//局部变量--自动变量，前面的auto省略掉了
//	return 0;
//}