#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
////MALE,FEMALE--ö�ٳ���
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	return 0;
//}

//int main()
//{
//	//�����ڼ�����ϴ洢���Ƕ�����
//	//a - 97�� 97ΪASCII��ֵ
//	//A - 65
//	//ASCII����
//	char a[] = "abc";//����
//	//"abc" -- 'a','b','c','\0'
//	//'\0' -- �ַ����Ľ�����'\0\ -- 0
//	//'a' -- 97
//
//	char a1[] = { 'a', 'b', 'c',0 };
//	printf("%s\n", a);
//	printf("%s\n", a1);
//	return 0;
//}

//int main()
//{
//	char a[] = "abc";
//	char b[] = { 'a', 'b', 'c','\0' };
//	//strlen�����ַ����ĳ���
//	printf("%d\n", strlen(a));//3
//	printf("%d\n", strlen(b));//���ֵ
//	return 0;
//}

//int main()
//{
//	printf("\a");
//	printf("%c\n", '\,');//��ӡ��
//	printf("%s\n", "\"");//��ӡ��
//	return 0;
//}

#include <string.h>
int main()
{
	//ת���ַ���һ���ַ�����
	printf("%d\n", strlen("c:\text\32\test.c"));
	printf("\132\n");
	printf("\x61\n");// a
	// \32 -- 32�Ǹ�8��������
	// \32��Ϊ8���ƴ�����Ǹ�10�������֣���ΪASCII��ֵ����Ӧ���ַ�
	// 32 --> 10���� 26 --> ��ΪASCII��ֵ������ַ�
	return 0;
}