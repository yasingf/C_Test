// T2.(1)
// #include <stdio.h>
// int main()
// {
// 	int i,n,s=1;
// 	printf("请输入n：");
// 	scanf("%d",&n);
// 	for(i=1;i<=n;i++)
// 		s=s*i;
// 	printf("%d!=%d\n",n,s);
// 	return 0;
// }
// T2.(2)
// #include <stdio.h>
// int main(void)
// {
// 	int i,n;float t,s=0;
// 	scanf("%d",&n);
// 	for (i = 1; i <= n; i++) {
// 		t = 1.0 / i;
// 		s = s + t;
// 	}
// 	printf("s=%f\n",s);
// 	return 0;
// }
// T2.(3)
// #include <stdio.h>
// int main(void)
// {
// 	char ch = 'z';
// 	while(ch!=('a'-1)){
// 		printf("%c",ch);
// 		ch--;
// 	}
// 	return 0;
// }
// T2.(4)
// #include <stdio.h>
// int main()
// {
// 	int i,j,k;char ch;
// 	scanf("%c",&ch);
// 	k = ch - 'A' + 1;
// 	for(i=1;i<=k;i++)
// 	{
// 		for(j=25;j>=i;j--) printf("%c",' ');
// 		for(j=1;j<=2*i-1;j++) printf("%c",'A'+ i - 1);
// 		printf("\n");
// 	}
// 	k=ch-'A';
// 	for(i=k;i>=1;i--)
// 	{
// 		for(j=25;j>=i;j--) printf("%c",' ');
// 		for(j=1;j<=2*i-1 ;j++) printf("%c",'A'+ i - 1);
// 		printf("\n");
// 	}
// 	return 0;
// }
// T3.(1)
// #include <stdio.h>
// int main() {
// 	float sum = 0.0, j = 1.0;
// 	int i;
// 	for (i = 1; i < 20; i++) {
// 		j *= i;
// 		if (i % 2 == 0) continue;
// 		sum += j;
// 	}
// 	printf("sum=%e\n", sum);
// 	return 0;
// }
// T3.(2)
// #include <stdio.h>
// int main() {
// 	int day, x1, x2;
// 	day = 0;
// 	x1 = 1020;
// 	while ( x1 > 0 )
// 	{
// 		x2 = x1 / 2 - 2;
// 		x1 = x2;
// 		day++;
// 	}
// 	printf("day=%d\n", day);
// 	return 0;
// }
// T3.(3)
// #include <stdio.h>
// int main() {
// 	int left, right; char c;
// 	printf("请输入一个算术表达式(回车结束):\n");
// 	left = 0, right = 0;
// 	for (c = 0; (c = getchar()) != '\n';) {
// 		if (c == '(' || c == '（') 
// 			left++;
// 		if (c == ')' || c == '）') 
// 			right++;
// 		if (left < right)
// 			break;

// 	}
// 	if (left == right)
// 		printf("圆括号配对正确\n");
// 	else printf("圆括号配对不正确\n");
// }
// T3.(4)
// #include <stdio.h>
// int main() {
// 	int r, m, n, k, t;
// 	scanf("%d%d", &m, &n);
// 	if (m < n) {
// 		t = m;
// 		m = n;
// 		n = t;
// 	}
// 	k = m * n;
// 	r = m % n;
// 	while (r)
// 	{
// 		m = n;
// 		n = r;
// 		r = m % n;
// 	}
// 	printf("两数的最大公约数与最小公倍数分别为%d\t%d", n, k/n);
// }
// T3.(5)
// #include <stdio.h>
// int main()
// {
// 	int i,j;
// 	for(i=0;i<10;i++)
// 	{
// 		j=i*10+6;
// 		if (j%3!=0) continue;
// 		printf("%d\n",j);
// 	}
// 	return 0;
// }
// T4.(1)
// #include <stdio.h>
// int main()
// {
// 	int sum=0,i;
// 	for(i=0;i<10;i++){
// 		sum+=i*10+8;
// 	}
// 	printf("%d\n",sum);
// 	return 0;
// }
// T4.(2)
// #include <stdio.h>
// #include <math.h>
// int main()
// {
// 	double e=0;int n,i,k;
// 	for(n=1;;n++){
// 		k = 1;
// 		for(i=1;i<=n;i++){
// 			k *= i;
// 		}
// 		e+=1.0/k;
// 		if(1.0/k<=pow(10,-5)) break;
// 	}
// 	e++;
// 	printf("%f\n",e);
// 	return 0;
// }
// T4.(3)
// #include <stdio.h>
// int main()
// {
// 	int i;
// 	for(i=7;;i++)
// 		if(i%3==1 && i%5==2 && i%7==3) {
// 			printf("人数%d\n",i);
// 			break;
// 	}
// 	return 0;
// }
// #include <stdio.h>
// int main()
// {
// 	int n=10,m=10,id,num=0,score;
// 	for(int i=1;i<=n;i++){
// 		printf("请输入学号\t");
// 		scanf("%d",&id);
// 		printf("请输入成绩：\n");
// 		for(int j=1;j<=m;j++){
// 			scanf("%d",&score);
// 			num+=score;
// 		}
// 		printf("%d\t%d\t%f",id,num,num/10.0);
// 	}
// 	return 0;
// }
