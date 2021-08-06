#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a = 10;
	printf("%d\n", a);
	printf("%d\n", !a);
	//C语言中我们表示真假 
	//0-假
	//非0-真
	return 0;


//int main()
//{
//	int a = 10;
//	a = 20;
//	a = a+10; //1
//	a += 10;  //2  这两种完全等价   复合赋值符
//	return 0;
}


//int main()
//{
//	//	 (2进制）位操作
//	//	  & 按位与
//	//    | 按位或
//	//    ^按位异或
//	int a = 3;
//	int b = 5;
//	//011
//	//101
//	int c = a&b;
//	printf("%d\n", c);
//	return 0;
//}


//int main()
//{
//	//移位操作符（2进制）
//	//   <<左移
//	//   <<右移
//	int a = 1;
//	int b = a << 2;
//	//整型1占4个字节--32个bit位
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}











//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };  //整型数组
//	//char ch[x] = {}; //字符型
//	//printf("%d\n", arr[4]);   //下标的方式访问元素--arr[下标]
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	return 0;
//}








//int main()
//{
//	int line = 0;
//	printf("好好学习\n");
//	while (line < 20000)
//	{
//		printf("我要努力学习敲代码:%d\n",line);
//		line++;
//	}
//	if (line >= 20000)
//		printf("迎娶白富美\n");
//
//	return 0;
//}









//#include <stdio.h>
//
//int main()
//{
//	int input = 0;
//	printf("考上清华\n");
//	printf("你要好好学习吗？(1/0) >:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("能考上\n");
//	else
//		printf("卖红薯\n");
//
//	return 0;
//}







///*
//int main()
//{
//	/*
//	int a = 0;
//	*/
//	return 0;
//}
//*/




//int main()
//{
//	printf("%c\n", '\'');//打印单引号--'
//	printf("%s\n", "\"");//打印双引号--"
//	return 0;
//}