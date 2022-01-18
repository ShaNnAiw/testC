//#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//	printf("%s\n", ("c:\test\628\test.c"));
//	return 0;
//}

//int main()
//{
//	char input = 'n';
//	printf("开始学C语言\n");
//	printf("你会坚持学习吗？输入y（yes）/n（no）>:");
//	scanf("%c", &input);
//	if (input == 'y')
//		printf("涨工资\n");
//	else
//		printf("继续当咸鱼\n");
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

//int Add(int x, int y)//自定义函数
//{
//	int z = x + y;
//	return z;//返回值是z，z是整形，所以Add前面是int
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);//输入时用空格隔开
//	sum = Add(num1, num2);
//	printf("sum=%d\n",sum);
//	return 0;
//}

int main()
{
	int arr[10] = { 0 };
	int sz = 0;
	sz = sizeof arr / sizeof arr[0];
	printf("%d\n",sizeof arr);
	printf("%d\n",sz);
	return 0;
}

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