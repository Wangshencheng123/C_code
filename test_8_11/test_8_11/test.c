#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int day = 0;
	printf("请输入数字：");
	scanf("%d", &day);

	switch (day)
	{
	case 1:
		printf("周一\n");
		break;
	case 2:
		printf("周二\n");
		break;
	case 3:
		printf("周三\n");
		break;
	case 4:
		printf("周四\n");
		break;
	case 5:
		printf("周五\n");
		break;
	case 6:
		printf("周六\n");
		break;
	case 7:
		printf("周日\n");
		break;
	default:
		break;
	}
	return 0;
}





//int main()
//{	
//	int sum = 0;
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			sum += 1;
//			i++;
//	}
//	printf("奇数个数为：%d\n", sum);
//	//int sum = 0;,
//	//int i = 0;
//	//if (i++; i < 100; i % 2 == 1)
//	//{
//	//	sum += 1;
//	//}
//	//printf("sum = %d\n", sum);
//	return 0;
//}





//练习判断一个数是否为奇数
//int main()
//{
//	int num = 0;
//	printf("请输入一个数：");
//	scanf("%d", &num);
//	if (num % 2 == 1)
//	{
//		printf("这个数是奇数\n");	
//	}
//	else
//	{
//		printf("这个数是偶数\n");
//	}
//	return 0;
//}









//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//		{
//			printf("hello world!\n");
//		}
//	}
//		else
//		{
//			printf("ni hao\n");
//		}
//	return 0;
//}








//int main()
//{
//	int age = 0;
//	printf("请输入年龄：");
//	scanf("%d", &age);
//
//	if (age < 18)
//		printf("未成年\n");
//	else
//		printf("成年\n");
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	;//只写分号为一个空语句
//	return 0;
//}