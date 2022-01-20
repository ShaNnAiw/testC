#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//P4初识C语言（2）


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

//int main()
//{
//	int arr[10] = { 0 };
//	int sz = 0;
//	sz = sizeof arr / sizeof arr[0];
//	printf("%d\n",sizeof arr);
//	printf("%d\n",sz);
//	return 0;
//}

//P5公开课

//题目1：交换两个int变量的值，不能使用第三个变量，即a=3,b=5，交换之后a=5,b=3。

#include <limits.h>

//（1）使用第三个变量，进入企业采用，代码可读性高，执行效率高
//int main()
//{
//	int a = 3;
//	int b = 5;
	//int c = 0;//准备一个空瓶
	//c = a;//把a的值赋予c，a此时空了
	//a = b;//把b的值付给给，b此时空了
	//b = c;//把c的值=a原始的值赋予b，此时c空了，没用了，注意顺序
	//printf("交换前:a=%d b=%d\n",a,b);*/

//（2）溢出的问题
	//INT_MAX;//右击-转到定义：2147483647
	//int-4个字节-32个比特位-最大值
	//如果a、b放一个超级大的数，他们的和超过最大值就不可行
	//a = a + b;
	//b = a - b;//=a+b-b=原来的a
	//a = a - b;//=a+b-a=b

//（3）按位抑或，不存在进位，可读性差，执行效率低于其他方法
//	a = a ^ b;//011^101=110
//	b = a ^ b;//110^101=011
//	a = a ^ b;//110^011=101
//	printf("交换后:a=%d b=%d\n",a,b);
//	return 0;
//}
//


//题目2、Leetcode第136题：给定一个非空整数数组，除了某个元素只出现一次以外，其余每个元素均出现两次。找出那个只出现了一次的元素。
// 例样：int a[]={1,2,3,4,5,1,2,3,4},该数组中只有5出现了一次，其他都是成对出现的，要找出5。


//（1）效率低，要执行11*11次	
	//int main()
//{
		//int arr[] = {1,2,3,4,5,1,2,3,4,5,-1};
		//int i = 0;
		//int sz = sizeof(arr) / sizeof(arr[0]);//sz为数组的元素个数
		//for (i = 0; i < sz; i++)
		//{
		//	int count = 0;//计数器
		//	int j = 0;//j和count必须是i循环下的局部变量，否则count会一直+++
		//			//创建j必须在i下的for循环，保证一个一个的比，arr[0]与arr[0-8]，arr[1]与arr[0-8]...
		//	for (j = 0; j < sz; j++)//j循环时i时固定的，也就是拿出一个固定的元素和所有元素相比--i循环时就是依次拿所有元素和所有元素比
		//	{
		//		if (arr[i] == arr[j])
//如果有一次相等，那么count+1=1，如果有两次相等那么count+1+1=2
//例如i=0时，j循环内，有两次ij值相等，即j=0、j=5，arr[0]==arr[5]--{1},count=2
//例如i=4时，j循环内，有一次ij值相等，即j=4，arr[4]--{1}，count=1
	//			{
	//				count++;
	//			}
	//		}
	//		if (count == 1)
	//		{
	//			printf("单身狗是 %d\n",arr[i]);
	//			break;
	//		}
	//	}
	//	
	//return 0;
//}//啊啊啊啊啊好难理解啊要死了

//（2）按位异或：满足交换律，任何一个数异或0=他自己，任何一个数异或他自己=0	
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
//	printf("单身狗是：%d",ret);
//	return 0;
//}


//题目3、写一个程序，程序运行，你的电脑在1分钟之后关机，如果输入“我是猪”，就会取消关机
//关机：cmd-shutdown -s -t 60  取消关机：shutdown -a
// 

#include <stdlib.h>//system
#include <string.h>//strcmp

//int main()
//{
//	char input[20] = { 0 };//存储数据
//	//关机
//	//C语言：system() -专门用来执行系统命令的。
//	system("shutdown -s -t 60");//关机
//	printf("请注意，你的电脑将在一分钟之后关机，若想取消，请输入“我是猪”：\n");
//	scanf("%s",input);
//	if (strcmp(input, "我是猪") == 0)//判断input中方的是不是“我是猪”-strcmp -string compare
//	{
//		system("shutdown -a");
//	}
//
//	return 0;
//}
// 

//初识C语言（2）的习题
//
//下面代码输出的结果是：
//int num = 10;//全局变量
//int main()
//{
//	int num = 1;//局部变量，全局局部变量名字冲突的情况下优先局部变量
//	printf("num = %d\n", num);//应该是1
//	return 0;
//}


MAX(int x,int y)//表示一个函数
{//下面是函数体
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
	printf("最大值是： %d",max);
	return 0;
}
//
//int main()
//{
//
//	return 0;
//}