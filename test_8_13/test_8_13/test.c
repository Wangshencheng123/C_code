#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	for (;;)
	{
		printf("hello\n");
	}

	//����2
	int x, y;
	for (x = 0, y = 0; x<2 && y<5; ++x, y++)
	{
		printf("hehe\n");
	}
	return 0;
}




//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}





//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (i = 5)
//			printf("nihao\n");
//		printf("haha\n");
//	}
//	return 0;
//}


////����1
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	}
//	return 0;
//}
////����2
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}



//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}



//int main()
//{
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", &password);////�������룬�������password������
//	//��������ʣһ��  '\n'
//	//��ȡһ�� ��\n'
//	//getchar();
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("ȷ������(Y/N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("����ȷ��\n");
//	}
//	else
//	{
//		printf("ȡ������\n");
//	}
//	return 0;
//}



//int main()
//{
//	int ch = 0;
//	//EOF--end of file �ļ�������־-��ֵΪ-1
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}




//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		i = i + 1;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}




//
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}



//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 4)
//			break;
//		printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}