//#include<stdio.h>
//int main() {
//	//printf("hello world");
//	char ch = 'abca';
//	printf("%c\n", ch);
//	return 0;
//};


/*
#include <stdio.h>
int main()
{
	char testInteger = 'abc';
	printf("Number = %c", testInteger);
	return 0;
}
*/
//#include <stdio.h>


//int main() {
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}


//#include <stdio.h>
//
//int main() {
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum=%d", sum);
//	return 0;
//}


//#include <stdio.h>
//int main() {
//	printf("��������Ʒ�ۼۣ�");
//	int price = 0;
//	scanf("%d",&price);
//	int pay_money = 0;
//	printf("�����븶���");
//	scanf("%d",&pay_money);
//	printf("ʵ����%d��Ӧ����%d�����㣺%d\n", pay_money, price, pay_money-price);
//	return 0;
//}


//Ӣ��ת����
//#include <stdio.h>
//int main() {
//	int foot, inch;
//	printf("������Ӣ�ߣ�");
//	scanf("%d", &foot);
//	printf("������Ӣ�磺");
//	scanf("%d", &inch);
//	printf("���Ĺ������Ϊ:%f", (foot + inch / 12.0) * 0.3048);
//	return 0;
//}


//ʱ���
//#include <stdio.h>
//int main() {
//	int hour1, minute1, hour2, minute2;
//	printf("��ֱ���������ʱ�䣬��\"1 30\"����һСʱ��ʮ����:\n");
//	scanf("%d %d", &hour1, &minute1);
//	scanf("%d %d", &hour2, &minute2);
//	int time1 = hour1 * 60 + minute1;
//	int time2 = hour2 * 60 + minute2;
//	int difference = time1 - time2;
//	if (difference < 0) {
//		difference = -difference;
//	}
//
//	printf("��ʱ�����%dʱ%d��",difference/60,difference%60);
//}


//��Ԫת��ɵ�֧
//#include <stdio.h>
//
//int main() {
//	int year = 0;
//	while (1)
//	{
//		printf("��������ݣ�");
//		scanf("%d", &year);
//		int i = ((year - 3) % 10) - 1;
//		int j = ((year - 3) % 12) - 1;
//		if (i < 0) {
//			i += 10;
//		}
//		if (j < 0) {
//			j += 12;
//		}
//		char tiangan[] = { "���ұ����켺�����ɹ�" };//���ұ����켺�����ɹ�
//		char dizhi[] = { "�ӳ���î������δ�����纥" };//�ӳ���î������δ�����纥
//		//printf("%c%c %d\n", tiangan[i*2], tiangan[i*2+1], i);
//		//printf("%c%c %d\n", dizhi[j*2], dizhi[j*2+1], j);
//		printf("��Ԫ%d�����ɵ�֧���귨Ϊ��%c%c%c%c\n", year, tiangan[i * 2], tiangan[i * 2 + 1], dizhi[j * 2], dizhi[j * 2 + 1]);
//		printf("�Ƿ������ѯ������0�˳��������������ּ�����\n");
//		int statue;
//		scanf("%d", &statue);
//
//		if (statue == 0) {
//			break;
//		}
//	}
//	
//	return 0;
//}


////�žų˷���
//#include <stdio.h>
//int main() {
//	int i = 0, j = 0;
//	for (i = 1; i <= 9; i++) {
//		for (j = 1; j <= i;j++) {
//			printf("%dX%d=%d\t", j, i, j * i);
//		}
//		printf("\n");
//	}
//	for (int c = 0; c < 100; c++) {
//		printf("=");
//	}
// return 0;
//}





//ʵ��P54 T(1)
//#include <stdio.h>
//int main() {
//	float sum = 0.0, j = 1.0;
//	int i;
//	for (i = 1; i < 20; i++) {
//		j *= i;
//		if (i % 2 == 0) continue;
//		sum += j;
//	}
//	printf("sum=%e\n", sum);
//	return 0;
//}

//ʵ��P55 T3(2)
//#include <stdio.h>
//int main() {
//	int day, x1, x2;
//	day = 0;
//	x1 = 1020;
//	while ( x1 > 0 )
//	{
//		x2 = x1 / 2 - 2;
//		x1 = x2;
//		day++;
//	}
//	printf("day=%d\n", day);
//	return 0;
//}


//ʵ��P55 T3(3)
//#include <stdio.h>
//int main() {
//	int left, right; char c;
//	printf("������һ���������ʽ(�س�����):\n");
//	left = 0, right = 0;
//	for (c = 0; (c = getchar()) != '\n';) {
//		if (c == '(' || c == '��') 
//			left++;
//		if (c == ')' || c == '��') 
//			right++;
//		if (left < right)
//			break;
//
//	}
//	if (left == right)
//		printf("Բ���������ȷ\n");
//	else printf("Բ������Բ���ȷ\n");
//}

//ʵ��P55 T3(4)
//#include <stdio.h>
//int main() {
//	int r, m, n, k, t;
//	scanf_s("%d%d", &m, &n);
//	if (m < n) {
//		t = m;
//		m = n;
//		n = t;
//	}
//	k = m * n;
//	r = m % n;
//	while (r)
//	{
//		m = n;
//		n = r;
//		r = m % n;
//	}
//	printf("���������Լ������С�������ֱ�Ϊ%d\t%d", n, k/n);
//}




//#include <stdio.h>
//int main()
//{
//	const int maxNumber = 25;
//	int isPrime[25];
//	int i, x;
//	for (i = 0; i < maxNumber; i++) {
//		isPrime[i] = 1;
//	}
//	for (x = 2; x < maxNumber; x++) {
//		if (isPrime[x]) {
//			for (i = 2; i * x < maxNumber; i++) {
//				isPrime[i * x] = 0;
//			}
//		}
//	}
//	for (i = 2; i < maxNumber; i++) {
//		if (isPrime[i]) {
//			printf("%d\t", i);
//		}
//	}
//	printf("\n");
//
//	return 0;
//
//}

