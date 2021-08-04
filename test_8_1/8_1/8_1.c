#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>















        //枚举常量
		//枚举：一一列举   
		// 性别： 男，女,保密   三原色：红、黄、蓝

		//枚举关键字-- enum

//enum Sex
//{
//	MALE,    //
//	FEMALE,  //枚举常量
//	SECRET   //
//};
//int main()
//{
//	//enum Sex s = FEMALE;
//	printf("%d\n", MALE);   //0 
//	printf("%d\n", FEMALE); //1
//	printf("%d\n", SECRET); //2
//	return 0;
//}












//#define定义的标识符常量
//#define MAX 10   //定义一个MAX  值为10
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0; 
//
//}
//	 












	//const -常属性
	//const int n = 10;//n是变量，但是又有常属性，所以我们说n是常变量，n不能改变
	//error   int arr[n] = { 0 };
	//int arr[10] = { 0 };
    //  return 0;




	//字面常量：3； 100； 3.14；
	//const int num = 4;  // const - 常属性   const修饰的常变量
	//printf("%d\n", num);
	//num = 8;
	//printf("%d\n", num);
	//return 0;











//int main()         //生命周期
//{
//	{
//		int a = 10;
//		printf("a = %d\n", a);//OK
//	}
//	printf("a = %d\n", a);//error
//	return 0;
//}