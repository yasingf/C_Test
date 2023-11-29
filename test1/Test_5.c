//P50 T2.(1)
//#include <stdio.h>
//int main() {
//	int a, b, c, max;
//	printf("请输入三个数，每个数之间以空格分开：");
//	scanf("%d %d %d", &a, &b, &c);
//	max = a;
//	if (b > c) {
//		if (b > a)max = b;
//	}
//	else if (c >= b) {
//		if (c > a)max = c;
//	}
//	printf("最大的为%d", max);
//}
//T2.(2)
//#include <stdio.h>
//int main(void) {
//	char ch,ch1,ch2;
//	printf("Enter a character:\n");
//	ch = getchar();
//	if(ch>='a'&&ch<='z'){
//		ch -= 32;
//	}if (ch>='A'&&ch<='Z'){
//		ch1 = ch - 1;
//		ch2 = ch + 1;
//		if(ch=='A') ch1 = ch+25;
//		else if(ch=='Z') ch2 = ch-25;
//	}
//	printf("%c%c%c\n",ch1,ch,ch2);
//}
//T2.(3)
// #include <stdio.h>
// int main(void)
// {
// 	int m;
// 	printf("请输入月份:\n");
// 	scanf("%d",&m);
// 	switch(m)
// 	{
// 	case 1:printf("Jan");break;
// 	case 2:printf("Feb");break;
// 	case 3:printf("Mar");break;
// 	case 4:printf("Apr");break;
// 	case 5:printf("May");break;
// 	case 6:printf("Jun");break;
// 	case 7:printf("Jul");break;
// 	case 8:printf("Aug");break;
// 	case 9:printf("Sep");break;
// 	case 10:printf("Oct");break;
// 	case 11:printf("Nov");break;
// 	case 12:printf("Dec");break;
// 	}
// 	return 0;
// }
// T3.(1)
// #include <stdio.h>
// int main()
// {
// 	int a,b,d;
// 	char ch;
// 	printf("请输入一个表达式：\n");
// 	scanf("%d%c%d",&a,&ch,&b);
// 	switch(ch)
// 	{
// 	case '+':d = a + b;printf("%d + %d = %d\n",a,b,d);break;
// 	case '-':d = a - b;printf("%d - %d = %d\n",a,b,d);break;
// 	case '*':d = a * b;printf("%d * %d = %d\n",a,b,d);break;
// 	case '/':if(b==0) printf("除数为0\n");
// 			 else printf("%d/%d=%f\n",a,b,(float)a/b);
// 			 break;
// 	default:printf("输入错误\n");
// 	}
// 	return 0;
// }
// T3.(2)
// #include <stdio.h>
// int main()
// {
// 	char c;
// 	printf("请输入:\n");
// 	scanf("%c",&c);
// 	if (c>='0' && c<='9') printf("0~9\n");
// 	else if(c>='A'&&c<='Z') printf("A~Z\n");
// 	else if(c>='a'&&c<='z') printf("a~z\n");
// 	else printf("!,@,···\n");
// 	return 0;

//T3.(3)
// #include <stdio.h>
// int main(void)
// {
// 	float a,b;
// 	printf("请主持人输入时尚手机的实际价格\n");
// 	scanf("%f",&b);
// 	printf("请观众猜时尚手机的价格\n");
// 	scanf("%f",&a);
// 	if(a<b) printf("低了\n");
// 	if(a==b) printf("猜对了\n");
// 	if(a>b)	printf("高了\n");	
// 	return 0;
// }
//T4.(1)
// #include <stdio.h>
// int main()
// {
// 	int a,b,c,sum,max,min,product;float avr;
// 	printf("请输入三个整数:\n");
// 	scanf("%d%d%d",&a,&b,&c);
// 	sum = a + b + c;
// 	avr = sum/3.0;
// 	product = a*b*c;
// 	max = a>=b ? a : b;
// 	max = max>=c? max : c;
// 	min = a<=b ? a : b;
// 	min = min<=c? min : c;
// 	printf("三个数和为%d,平均值为%.2f,积为%d，最小值为%d，最大值为%d\n",sum,avr,product,min,max );
// 	return 0;
// }

// T4.(2)
// #include <stdio.h>
// int main(void)
// {
// 	float x,y; 
// 	printf("请输入x：\n");
// 	scanf("%f",&x);
// 	if(x<5) y=1-x*x;
// 	else y = x<15 ? x-1 : 2*x*x-1;
// 	printf("y=%f",y);
// 	return 0;
// }
//T4.(3)
// #include <stdio.h>
// int main()
// {
// 	int a;
// 	printf("请输入0~6中的一个:\n");
// 	scanf("%d",&a);
// 	switch(a)
// 	{
// 	case(0):printf("Sunday\n");break;
// 	case(1):printf("Monday\n");break;
// 	case(2):printf("Tuesday\n");break;
// 	case(3):printf("Wednesday\n");break;
// 	case(4):printf("Thursday\n");break;
// 	case(5):printf("Friday\n");break;
// 	case(6):printf("Sarurday\n");break;
// 	default:printf("erro\n");
// 	}
// 	return 0;
// }