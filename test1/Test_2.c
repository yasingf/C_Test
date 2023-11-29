//1.(1)
//#include <stdio.h>
//int main(void) {
//	int x = 2, y = 3, a;
//	a = x - y;
//	printf("a=%d\n", a);
//	return 0;
//}

//1.(2)
//#include <stdio.h>
//int main(void) {
//	int a, b, sum;
//	printf("Please input a,b\n");
//	scanf("%d%d", &a, &b);
//	sum = a * a + b * b;
//	printf("%d^2 + %d^2 = %d\n", a, b, sum);
//	return 0;
//}

//1.(3)
//#include <stdio.h>
//int main(void) {
//	int a, b, max;
//	scanf("%d%d", &a, &b);
//	max = a;
//	if (a < b) max = b;
//	printf("max=%d", max);
//	return 0;
//}

//2
//#include <stdio.h>
//int main(void) {
//	int a, b, m;
//	printf("Input a,b,please!\n");
//	scanf("%d%d", &a, &b);
//	m = a * b;
//	printf("%d * %d = %d\n", a, b, m);
//	return 0;
//}

//3.(1)
//#include <stdio.h>
//int main() {
//	int n;
//	printf("请输入整数：\n");
//	scanf("%d",&n);
//	if (n % 3 == 0 && n % 5 == 0) printf("该数能被3和5整除\n");
//	else printf("该数不能同时被3和5整除\n");
//	return 0;
//}


//T4(1)
//#include <stdio.h>
//int main() {
//	printf("How are you!\n");
//	return 0;
//}

//T4(2)
//#include <stdio.h>
//#include <math.h>
//int main() {
//	int i, a, sum = 0;
//	for (i = 0; i < 3; i++) {
//		printf("请输入第%d个整数:\t",i+1);
//		scanf("%d", &a);
//		sum += pow(a, 3);
//	}
//	printf("立方和为%d", sum);
//}