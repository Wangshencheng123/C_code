#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a = 10;
	printf("%d\n", a);
	printf("%d\n", !a);
	//C���������Ǳ�ʾ��� 
	//0-��
	//��0-��
	return 0;


//int main()
//{
//	int a = 10;
//	a = 20;
//	a = a+10; //1
//	a += 10;  //2  ��������ȫ�ȼ�   ���ϸ�ֵ��
//	return 0;
}


//int main()
//{
//	//	 (2���ƣ�λ����
//	//	  & ��λ��
//	//    | ��λ��
//	//    ^��λ���
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
//	//��λ��������2���ƣ�
//	//   <<����
//	//   <<����
//	int a = 1;
//	int b = a << 2;
//	//����1ռ4���ֽ�--32��bitλ
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}











//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };  //��������
//	//char ch[x] = {}; //�ַ���
//	//printf("%d\n", arr[4]);   //�±�ķ�ʽ����Ԫ��--arr[�±�]
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
//	printf("�ú�ѧϰ\n");
//	while (line < 20000)
//	{
//		printf("��ҪŬ��ѧϰ�ô���:%d\n",line);
//		line++;
//	}
//	if (line >= 20000)
//		printf("ӭȢ�׸���\n");
//
//	return 0;
//}









//#include <stdio.h>
//
//int main()
//{
//	int input = 0;
//	printf("�����廪\n");
//	printf("��Ҫ�ú�ѧϰ��(1/0) >:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("�ܿ���\n");
//	else
//		printf("������\n");
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
//	printf("%c\n", '\'');//��ӡ������--'
//	printf("%s\n", "\"");//��ӡ˫����--"
//	return 0;
//}