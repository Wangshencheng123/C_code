#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#include <string.h>
//结构体--描述复杂对象--我们自己创造出来的类型
//人：身高+性别+姓名+体重
//书：书名+作者+书号+定价+出版社

//struct--结构体关键字
struct Book  //创建一个结构体类型
{
	char name[20];//C语言程序设计
	short price;//价格55元
};

int main()
{
	//利用结构体类型创建一个该类型的结构体变量
	struct Book b1 = { "C语言程序设计", 55 };

	strcpy(b1.name,"C++");//strcpy--string copy 字符串拷贝-库函数需要头文件
	printf("%s\n", b1.name);



	//struct Book* pb = &b1;
	//printf("%s\n", pb->name);
	//printf("%d\n", pb->price);

	//printf("%s\n", (*pb).name);
	//printf("%d\n", (*pb).price);
	
	//printf("书名是：%s\n", b1.name);
	//printf("价格是：%d元\n", b1.price);
	return 0;
}




//int main()
//{
//	printf("%d\n", sizeof(char *));  //4
//	printf("%d\n", sizeof(short *)); //4
//	printf("%d\n", sizeof(int *));   //4
//	printf("%d\n", sizeof(double *));//4
//	return 0;
//}



//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'm';
//	printf("%c\n", ch);
//	return 0;
//}





//int main()
//{
//	int a = 10;
//	//&a--&为取地址符号
//	int *p = &a;
//	//*p = 20;
//	//*p;   *--解引用操作符
//	//printf("a = %d\n", a);
//	//有一种变量是用来存放地址的--指针变量
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	return 0;
//}