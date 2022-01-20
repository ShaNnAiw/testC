#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//一、  常量

//1、  字面常量-直接写出来的值

//int main()
//{
//	int num = 4;
//	3;//字面常量
//	100;//字面常量
//	3.14;//字面常量
//	return 0;
//}

//2、  const修饰的常变量

//const-常属性
// 
//int main()
//{
//	const int n = 10;//错误E0028	表达式必须含有常量值,n是变量，但又有常属性，所以叫n常变量
//	int arr[n] = { 0 };//初始化创建一个数组，里面有十个数
//	return 0;
//}

//int main()
//{
//	const int num = 4;//错误：表达式必须是可修改的左值
//	printf("%d\n",num);
//	num = 8;//错误：左值指定 const 对象
//	printf("%d\n", num);
//	return 0;
//}

//const int n = 4;//n是具有常属性的变量（常变量），本质上还是变量

//int main（）
//{
//	int arr
//	printf("%d\n");
//	return 0;
//}

//3、  #define定义的（标识符）常量

//#define MAX 10
//int main()
//{
//	int arr[MAX] = {0};
//	printf("%d\n",MAX);
//	return 0;
//}

//4、  枚举常量

//枚举：一一列举
//性别：男，女，保密
//三原色：红，黄，蓝
//星期：一，二，三，四，五，六，七

//enum-枚举关键字

//enum Sex
//{
//	MALE,//此处用逗号
//	FMALE,
//	SECRET//结束无符号
//
//};//分号不可缺少
//int main()
//{
//	enum Sex s = MALE;
//	MALE = 5;//	错误E0137	表达式必须是可修改的左值。枚举常量不可改，但通过枚举常量创建的变量（s）可以改。
//	printf("%d\n",MALE);//有值，为0
//    printf("%d\n",FMALE);//1
//	printf("%d\n",SECRET);//2
//	printf("%d\n",s);//0
//	return 0;
//}

//二、  字符串+转义字符+注释

//int float
//char
//字符串类型
//"abc";
//"hello bit";
//"";空字符串
//这种由双引号（Double Quote）引起来的遗传字符成为字符串字面值（String Literal）,或者简称字符串。

//int main()
//{
//	char arr1[] = "abc";//数组
//	//"abc"--'a' 'b' 'c' '\0'--字符串的结束标志（默认隐藏）
//	char arr2[] = { 'a','b','c' ,\0};//加上\0就不烫了，不加后面默认是随机字符
//	printf("%s\n",arr1);//输出abc
//	printf("%s\n",arr2);//输出abc烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫虜愸觖
//	return 0;
//}
//数据在计算机上存储的时候，是2进制
// #av$
// a-97
// A-65
// ...
//'a' - 97
// '\0' - 0
// 字符都有值，给每一个字符都编了编号，编号即为值-ASCII编码、ASCII码值（ASCII码表）
//注：字符串的结束标志是一个\0的转义字符，在计算字符串长度的时候\0是结束标志，不算做字符串内容。

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n",strlen(arr1));//strlen - string length-计算字符串长度的-3
//	printf("%d\n", strlen(arr2));//不加\0是随机值-42
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
//	printf("%d\n", strlen("abcdef"));// \62被解析成一个转义字符
//	printf("%s\n","\628");//62作为八进制数字对应的十进制数字为6*8^1+2*8^0=50--对应的ASCII码为字符'2'
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