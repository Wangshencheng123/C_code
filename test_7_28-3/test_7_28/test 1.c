#include <stdio.h>


int main()
{
	//�����������ĺ�
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	//��������--ʹ�����뺯��scanf
	scanf("%d%d", &num1, &num2);//&��ʾȡ��ַ����
	//C�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ��
	sum = num1 + num2;
	printf("sum =%d\n", sum);
	return 0;
}