#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//һ��  ����

//1��  ���泣��-ֱ��д������ֵ

//int main()
//{
//	int num = 4;
//	3;//���泣��
//	100;//���泣��
//	3.14;//���泣��
//	return 0;
//}

//2��  const���εĳ�����

//const-������
// 
//int main()
//{
//	const int n = 10;//����E0028	���ʽ���뺬�г���ֵ,n�Ǳ����������г����ԣ����Խ�n������
//	int arr[n] = { 0 };//��ʼ������һ�����飬������ʮ����
//	return 0;
//}

//int main()
//{
//	const int num = 4;//���󣺱��ʽ�����ǿ��޸ĵ���ֵ
//	printf("%d\n",num);
//	num = 8;//������ֵָ�� const ����
//	printf("%d\n", num);
//	return 0;
//}

//const int n = 4;//n�Ǿ��г����Եı��������������������ϻ��Ǳ���

//int main����
//{
//	int arr
//	printf("%d\n");
//	return 0;
//}

//3��  #define����ģ���ʶ��������

//#define MAX 10
//int main()
//{
//	int arr[MAX] = {0};
//	printf("%d\n",MAX);
//	return 0;
//}

//4��  ö�ٳ���

//ö�٣�һһ�о�
//�Ա��У�Ů������
//��ԭɫ���죬�ƣ���
//���ڣ�һ�����������ģ��壬������

//enum-ö�ٹؼ���

//enum Sex
//{
//	MALE,//�˴��ö���
//	FMALE,
//	SECRET//�����޷���
//
//};//�ֺŲ���ȱ��
//int main()
//{
//	enum Sex s = MALE;
//	MALE = 5;//	����E0137	���ʽ�����ǿ��޸ĵ���ֵ��ö�ٳ������ɸģ���ͨ��ö�ٳ��������ı�����s�����Ըġ�
//	printf("%d\n",MALE);//��ֵ��Ϊ0
//    printf("%d\n",FMALE);//1
//	printf("%d\n",SECRET);//2
//	printf("%d\n",s);//0
//	return 0;
//}

//����  �ַ���+ת���ַ�+ע��

//int float
//char
//�ַ�������
//"abc";
//"hello bit";
//"";���ַ���
//������˫���ţ�Double Quote�����������Ŵ��ַ���Ϊ�ַ�������ֵ��String Literal��,���߼���ַ�����

//int main()
//{
//	char arr1[] = "abc";//����
//	//"abc"--'a' 'b' 'c' '\0'--�ַ����Ľ�����־��Ĭ�����أ�
//	char arr2[] = { 'a','b','c' ,\0};//����\0�Ͳ����ˣ����Ӻ���Ĭ��������ַ�
//	printf("%s\n",arr1);//���abc
//	printf("%s\n",arr2);//���abc��������������������������������̔����
//	return 0;
//}
//�����ڼ�����ϴ洢��ʱ����2����
// #av$
// a-97
// A-65
// ...
//'a' - 97
// '\0' - 0
// �ַ�����ֵ����ÿһ���ַ������˱�ţ���ż�Ϊֵ-ASCII���롢ASCII��ֵ��ASCII���
//ע���ַ����Ľ�����־��һ��\0��ת���ַ����ڼ����ַ������ȵ�ʱ��\0�ǽ�����־���������ַ������ݡ�

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n",strlen(arr1));//strlen - string length-�����ַ������ȵ�-3
//	printf("%d\n", strlen(arr2));//����\0�����ֵ-42
//	return 0;
//}

//int main()
//{
//	printf("%c\n",'\628');
//	return 0;
//
//}

//int main()
//{
//	printf("%d\n", strlen("abcdef"));// \62��������һ��ת���ַ�
//	printf("%s\n","\628");//62��Ϊ�˽������ֶ�Ӧ��ʮ��������Ϊ6*8^1+2*8^0=50--��Ӧ��ASCII��Ϊ�ַ�'2'
//return 0;}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = a << 2;
//	printf("%d\n",b);
//	printf("%d",a);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	printf("%d\n",c);
//	return 0;
//}

int main()
{
	int arr[10] = { 0 };
	printf("%d\n", strlen(arr[10]));
	return 0;
}
//
//int main()
//{
//
//	return 0;
//}
//
//int main()
//{
//
//	return 0;
//}
//
//int main()
//{
//
//	return 0;
//}