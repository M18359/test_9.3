#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//1!+2!+...+n!
int main()
{
	//1 2 6 24 120
	int n = 0;
	scanf("%d", &n);
	int j = 0;
	int ret = 1;
	int i = 0;
	int sum = 0;
	for (i = 1; i <= n; i++)
	{
		/*for (j = 1; j <= i; j++)
		{
			ret *= j;
		}*/
		ret *= i;
		sum += ret;
	}
	//����n!
	
	printf("%d\n", sum);
	return 0;
}


//void test(int a[])
//{
//	//
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	test(arr);
//	return 0;
//}

//�������ж�
//int is_angle(int a, int b, int c)
//{
//	if ((a + b > c) && (a + c > b) && (b + c > a))
//		return 1;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d%d%d", &a, &b, &c) == 3)
//	{
//		if (is_angle(a,b,c) == 1)
//		{
//			if ((a == b) && (a == c))
//			{
//				printf("�ǵȱ�������\n");
//			}
//			else if (((a == b) && (a != c)) || ((a == c) && (a != b))
//				|| ((b == c) && (b != a)))
//			{
//				printf("�ǵ���������\n");
//			}
//			else
//			{
//				printf("����ͨ������\n");
//			}
//		}
//		else
//		{
//			printf("����������\n");
//		}
//
//	}
//	return 0;
//}


//int leap_year(int y)
//{
//	return(((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
//}
//int main()
//{
//	int y = 0;
//	int m = 0;
//	int d = 0;
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	while (scanf("%d %d", &y, &m) == 2)
//	{
//		int d = days[m];
//		if ((leap_year(y) == 1) && m == 2)
//		{
//			d++;
//		}
//		printf("%d\n", d);
//	}
//	
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if ((i == j) || (i + j == (n - 1)))
//					printf("*");
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	
//	return 0;
//}
//��ӡ��������������ż��λ������λ
//int print_ou_ji(int n)
//{
//	//1101
//	int i = 0;
//	//����λ
//	for (i = 30; i >=0; i-=2)
//	{
//		printf("%d", ((n >> i) & 1));
//	}
//	printf("\n");
//	for (i = 31; i > 0; i -= 2)
//	{
//		printf("%d", ((n >> i) & 1));
//	}
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_ou_ji(n);
//	return 0;
//}


//�������ζ�����λ�в�ͬλ�ĸ���
//int num_of_diff(int m, int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))//ÿλ�ó����Ƚ�
//			count++;
//	}
//	return count;
//}
//int num_of_diff(int m,int n)
//{
//	//1100         1100
//	//1011         1010
//	//0111         1000
//	int i = m ^ n;//������
//	//ͳ��i���м���1
//	int count = 0;
//	while (i)
//	{
//		i = i & (i - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int num=num_of_diff(m, n);
//	printf("%d", num);
//	return 0;
//}


//дһ���������ض�������1�ĸ���
//int numof1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);//ÿִ��һ�Σ���ʹn���Ҳ��1��ʧ
//		count++;
//	}
//	return count;
//}
// 1101
// 1100
// 1100
// 1010
// 1000
// 0100
// 0000
//int numof1(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//			count++;
//	}
//	return count;
//}
//int numof1(unsigned int n)//unsigned int������
//{
//	int count = 0;
//	while (n)
//	{
//		if ((n % 2) == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n",numof1(n));
//	return 0;
//}
//a    b    c   
//8    7    8      
//9    23

//struct Peo
//{
//	char name[20];
//	char sex[5];
//	char tele[12];
//};
//
//void print1(struct Peo p)
//{
//	printf("%s %s %s\n", p.name, p.sex, p.tele);
//}
//void print2(struct Peo* pp)
//{
//	printf("%s %s %s\n", pp->name, pp->sex, pp->tele);
//}
//int main()
//{
//	struct Peo p1 = { "����","��","123098888"};
//	print1(p1);
//	struct Peo p2 = { "����","Ů","098900099" };
//	print2(&p2);
//	return 0;
//}


//int my_strlen(char* str)
//{
//	/*int count = 0;
//	while (*str != '\n')
//	{
//		count++;
//		str++;
//	}
//	return count;*/
//	int count = 0;
//	char* start = str;
//	while (*str != '\n')
//	{
//		count++;
//		str++;
//	}
//	return (str - start);
//}
//
//int main()
//{
//	int len = my_strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}