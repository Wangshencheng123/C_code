#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#include <string.h>
//�ṹ��--�������Ӷ���--�����Լ��������������
//�ˣ����+�Ա�+����+����
//�飺����+����+���+����+������

//struct--�ṹ��ؼ���
struct Book  //����һ���ṹ������
{
	char name[20];//C���Գ������
	short price;//�۸�55Ԫ
};

int main()
{
	//���ýṹ�����ʹ���һ�������͵Ľṹ�����
	struct Book b1 = { "C���Գ������", 55 };

	strcpy(b1.name,"C++");//strcpy--string copy �ַ�������-�⺯����Ҫͷ�ļ�
	printf("%s\n", b1.name);



	//struct Book* pb = &b1;
	//printf("%s\n", pb->name);
	//printf("%d\n", pb->price);

	//printf("%s\n", (*pb).name);
	//printf("%d\n", (*pb).price);
	
	//printf("�����ǣ�%s\n", b1.name);
	//printf("�۸��ǣ�%dԪ\n", b1.price);
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
//	//&a--&Ϊȡ��ַ����
//	int *p = &a;
//	//*p = 20;
//	//*p;   *--�����ò�����
//	//printf("a = %d\n", a);
//	//��һ�ֱ�����������ŵ�ַ��--ָ�����
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	return 0;
//}