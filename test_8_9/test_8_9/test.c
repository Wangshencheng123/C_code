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



//static ���ξֲ�����
//�ֲ��������������ڱ䳤
//static ����ȫ�ֱ���
//�ı��˱������������þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//����Դ�ļ��Ͳ���ʹ����
//static���κ���
//Ҳ�Ǹı��˺�����������
//�ⲿ�������� --> �ڲ���������


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
//	//extern--�����ⲿ����
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}
//


//static ���ξֲ�����
//�ֲ��������������ڱ䳤

//void test()
//{
//	static int a = 1;//a��һ����̬�ľֲ�����
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
//	//typedef--���Ͷ���-�����ض���
//	typedef unsigned int u_int;//���¶���
//	unsigned int num = 10;
//	u_int num = 10;
//	return 0;
//}

//int main()
//{
//	register int a = 10;//�����a����ɼĴ�������
//	return 0;
//}



//int main()
//{
//	auto int a = 10;//�ֲ�����--�Զ�������ǰ���autoʡ�Ե���
//	return 0;
//}