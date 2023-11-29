//P47 T2.1
//#include <stdio.h>
//#include <math.h>
//int main(void) {
//	int a, b; float x;
//	scanf("%d%d", &a, &b);
//	x = 2 * a * b / pow(a + b, 2);
//	printf("x=%f", x);
//}

//P48 T2.2
//#include <stdio.h>
//int main(void) {
//	float c, f;
//	printf("请输入一个华氏温度：");
//	scanf("%f", &f);
//	c = (5.0 / 9) * (f - 32);
//	printf("摄氏温度为：%.2f", c);
//}

//P48 T2.3
//#include <stdio.h>
//int main(void)
//{
//	char c1, c2;
//	c1 = getchar();
//	printf("%c,%d\n", c1, c1);
//	c2 = c1 - 32;
//	printf("%c,%d\n", c2, c2);
//}

//P48 T3.1
//#include <stdio.h>
//#include <math.h>
//int main(void){
//	float pi = 3.1415926, h, r, ly, sy, sq, vq, vz;
//	printf("请输入园半径r，圆柱高h：");
//	scanf("%f%f", &r, &h);
//	ly = 2 * pi * h; sy = pi * pow(r, 2); sq = 4 * pi * pow(r, 2);
//	vq = (4.0 / 3) * pi * pow(r, 3); vz = pi * h * pow(r, 2);
//	printf("圆周长为:%.2f\t", ly); printf("圆面积为:%.2f\n", sy); 
//	printf("圆球表面积为;%.2f\t", sq); printf("圆球体积为:%.2f\n", vq);
//	printf("圆柱体积为:%.2f\t", vz);
//}

//P48 T3.2
//#include <stdio.h>
//int main(void) {
//	int x; float y;
//	printf("Enter x,y：");
//	scanf("%d%f", &x, &y);
//	printf("x+y=%.1f", x + y);
//}

//P48 T3.3
//#include <stdio.h>
//int main(void) {
//	int x, y, t;
//	printf("请输入x，y：");
//	scanf("%d%d", &x, &y);
//	if (x < y) { 
//		t = x, x = y, y = t;
//		printf("交换后的x=%d,y=%d\n", x, y);
//	}
//}

//实验P49 T4(1)
//#include <stdio.h>
//int main(void) {
//	printf("请输入三个字符：");
//	for (int i = 0; i < 3; i++) {
//		char a;
//		a = getchar();
//		printf("%c\n", a);
//	}
//}

//实验P49 T4(2)
//#include <stdio.h>
//#include <math.h>
//int main() {
//	int a, b, c, x1, x2;
//	printf("请输入系数a b c:\n");
//	scanf("%d%d%d", &a, &b, &c);
//	int delta = pow(b, 2) - 4 * a * c;
//	if (delta < 0) {
//		printf("该方程无解\n");
//	}
//	else if (delta == 0) {
//		x1 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
//		printf("该方程只有一根%d\n", x1);
//	}
//	else
//	{
//		x1 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
//		x2 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
//		printf("该方程的根为%d和%d\n", x1, x2);
//	}
//  return 0;
//}