#include <stdio.h>


int main()
{
	//计算两个数的和
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	//输入数据--使用输入函数scanf
	scanf("%d%d", &num1, &num2);//&表示取地址符号
	//C语言语法规定，变量要定义在当前代码块的最前面
	sum = num1 + num2;
	printf("sum =%d\n", sum);
	return 0;
}