#include <stdio.h>
#include <stdlib.h>

void Func(char str_arg[2])
{
	int m = sizeof(str_arg);//计算的是所占的字节数
	int n = strlen(str_arg);//实际的长度
	printf("%d\n", m);
	printf("%d\n", n);
}

union X
{
	int x;
	char y[4];
}a;

#define F(x,y) x<y?x:y

int main()
{
	//char str[] = "Hello";
	//Func(str);

	/*a.x = 0x11223344;
	printf("%x ", a.y[0]);
	printf("%x ", a.y[1]);
	printf("%x ", a.y[2]);
	printf("%x ", a.y[3]);
	printf("%x ", a.y[4]);*/

	//int a, x;
	//for (a = 0, x = 0; a <= 1 && !x++; a++)
	//{
	//	a++;
	//}
	//printf("%d %d", a, x);//2 1

	//int n = F(1, 3);
	//printf("%d\n", n);

	//int a[5] = { 1, 2, 3, 4, 5 };
	//int *p1 = (int *)(&a + 1);
	//int *p2 = (int *)((int)a + 1);
	//int *p3 = (int *)(a + 1);
	//printf("%d %x %d\n", p1[-1], p2[0], p3[1]);//5  *  3

	int num[10] = { 1, -2, 3, 10, -4, 7, 2, -5, -3, 2 };
	int i;
	int tmp = 0;
	for (i = 0; i < 10; i++)
	{
		if ((num[i] + num[i + 1])>0)
		{
			tmp += num[i + 1];
		}
	}
	printf("%d\n", tmp);

	system("pause");
	return 0;
}

