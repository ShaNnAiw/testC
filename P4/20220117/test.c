#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//P4��ʶC���ԣ�2��


//int main()
//{
//	printf("%s\n", ("c:\test\628\test.c"));
//	return 0;
//}

//int main()
//{
//	char input = 'n';
//	printf("��ʼѧC����\n");
//	printf("�����ѧϰ������y��yes��/n��no��>:");
//	scanf("%c", &input);
//	if (input == 'y')
//		printf("�ǹ���\n");
//	else
//		printf("����������\n");
//	return 0;
//}

//int main()
//{
//	int lines = 0;
//	printf("Begine to learn C#\n");
//	while (lines < 3)
//	{
//		printf("Wrote a line of code.%d\n",lines);
//		lines++;
//	}
//	if(lines >= 3)
//	printf("Become a professor");
//	return 0;
//}

//int Add(int x, int y)//�Զ��庯��
//{
//	int z = x + y;
//	return z;//����ֵ��z��z�����Σ�����Addǰ����int
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);//����ʱ�ÿո����
//	sum = Add(num1, num2);
//	printf("sum=%d\n",sum);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int sz = 0;
//	sz = sizeof arr / sizeof arr[0];
//	printf("%d\n",sizeof arr);
//	printf("%d\n",sz);
//	return 0;
//}

//P5������

//��Ŀ1����������int������ֵ������ʹ�õ�������������a=3,b=5������֮��a=5,b=3��

#include <limits.h>

//��1��ʹ�õ�����������������ҵ���ã�����ɶ��Ըߣ�ִ��Ч�ʸ�
//int main()
//{
//	int a = 3;
//	int b = 5;
	//int c = 0;//׼��һ����ƿ
	//c = a;//��a��ֵ����c��a��ʱ����
	//a = b;//��b��ֵ��������b��ʱ����
	//b = c;//��c��ֵ=aԭʼ��ֵ����b����ʱc���ˣ�û���ˣ�ע��˳��
	//printf("����ǰ:a=%d b=%d\n",a,b);*/

//��2�����������
	//INT_MAX;//�һ�-ת�����壺2147483647
	//int-4���ֽ�-32������λ-���ֵ
	//���a��b��һ����������������ǵĺͳ������ֵ�Ͳ�����
	//a = a + b;
	//b = a - b;//=a+b-b=ԭ����a
	//a = a - b;//=a+b-a=b

//��3����λ�ֻ򣬲����ڽ�λ���ɶ��Բִ��Ч�ʵ�����������
//	a = a ^ b;//011^101=110
//	b = a ^ b;//110^101=011
//	a = a ^ b;//110^011=101
//	printf("������:a=%d b=%d\n",a,b);
//	return 0;
//}
//


//��Ŀ2��Leetcode��136�⣺����һ���ǿ��������飬����ĳ��Ԫ��ֻ����һ�����⣬����ÿ��Ԫ�ؾ��������Ρ��ҳ��Ǹ�ֻ������һ�ε�Ԫ�ء�
// ������int a[]={1,2,3,4,5,1,2,3,4},��������ֻ��5������һ�Σ��������ǳɶԳ��ֵģ�Ҫ�ҳ�5��


//��1��Ч�ʵͣ�Ҫִ��11*11��	
	//int main()
//{
		//int arr[] = {1,2,3,4,5,1,2,3,4,5,-1};
		//int i = 0;
		//int sz = sizeof(arr) / sizeof(arr[0]);//szΪ�����Ԫ�ظ���
		//for (i = 0; i < sz; i++)
		//{
		//	int count = 0;//������
		//	int j = 0;//j��count������iѭ���µľֲ�����������count��һֱ+++
		//			//����j������i�µ�forѭ������֤һ��һ���ıȣ�arr[0]��arr[0-8]��arr[1]��arr[0-8]...
		//	for (j = 0; j < sz; j++)//jѭ��ʱiʱ�̶��ģ�Ҳ�����ó�һ���̶���Ԫ�غ�����Ԫ�����--iѭ��ʱ��������������Ԫ�غ�����Ԫ�ر�
		//	{
		//		if (arr[i] == arr[j])
//�����һ����ȣ���ôcount+1=1����������������ôcount+1+1=2
//����i=0ʱ��jѭ���ڣ�������ijֵ��ȣ���j=0��j=5��arr[0]==arr[5]--{1},count=2
//����i=4ʱ��jѭ���ڣ���һ��ijֵ��ȣ���j=4��arr[4]--{1}��count=1
	//			{
	//				count++;
	//			}
	//		}
	//		if (count == 1)
	//		{
	//			printf("������ %d\n",arr[i]);
	//			break;
	//		}
	//	}
	//	
	//return 0;
//}//����������������ⰡҪ����

//��2����λ������㽻���ɣ��κ�һ�������0=���Լ����κ�һ����������Լ�=0	
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,5,-1 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	printf("�����ǣ�%d",ret);
//	return 0;
//}


//��Ŀ3��дһ�����򣬳������У���ĵ�����1����֮��ػ���������롰���������ͻ�ȡ���ػ�
//�ػ���cmd-shutdown -s -t 60  ȡ���ػ���shutdown -a
// 

#include <stdlib.h>//system
#include <string.h>//strcmp

//int main()
//{
//	char input[20] = { 0 };//�洢����
//	//�ػ�
//	//C���ԣ�system() -ר������ִ��ϵͳ����ġ�
//	system("shutdown -s -t 60");//�ػ�
//	printf("��ע�⣬��ĵ��Խ���һ����֮��ػ�������ȡ���������롰��������\n");
//	scanf("%s",input);
//	if (strcmp(input, "������") == 0)//�ж�input�з����ǲ��ǡ�������-strcmp -string compare
//	{
//		system("shutdown -a");
//	}
//
//	return 0;
//}
// 

//��ʶC���ԣ�2����ϰ��
//
//�����������Ľ���ǣ�
//int num = 10;//ȫ�ֱ���
//int main()
//{
//	int num = 1;//�ֲ�������ȫ�־ֲ��������ֳ�ͻ����������Ⱦֲ�����
//	printf("num = %d\n", num);//Ӧ����1
//	return 0;
//}


MAX(int x,int y)//��ʾһ������
{//�����Ǻ�����
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int num1 = 0;
	int num2 = 1;
	int max = 0;
	scanf("%d%d", &num1, &num2);
	max = MAX(num1, num2);
	printf("���ֵ�ǣ� %d",max);
	return 0;
}
//
//int main()
//{
//
//	return 0;
//}