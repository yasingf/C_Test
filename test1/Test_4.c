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
//	printf("������һ�������¶ȣ�");
//	scanf("%f", &f);
//	c = (5.0 / 9) * (f - 32);
//	printf("�����¶�Ϊ��%.2f", c);
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
//	printf("������԰�뾶r��Բ����h��");
//	scanf("%f%f", &r, &h);
//	ly = 2 * pi * h; sy = pi * pow(r, 2); sq = 4 * pi * pow(r, 2);
//	vq = (4.0 / 3) * pi * pow(r, 3); vz = pi * h * pow(r, 2);
//	printf("Բ�ܳ�Ϊ:%.2f\t", ly); printf("Բ���Ϊ:%.2f\n", sy); 
//	printf("Բ������Ϊ;%.2f\t", sq); printf("Բ�����Ϊ:%.2f\n", vq);
//	printf("Բ�����Ϊ:%.2f\t", vz);
//}

//P48 T3.2
//#include <stdio.h>
//int main(void) {
//	int x; float y;
//	printf("Enter x,y��");
//	scanf("%d%f", &x, &y);
//	printf("x+y=%.1f", x + y);
//}

//P48 T3.3
//#include <stdio.h>
//int main(void) {
//	int x, y, t;
//	printf("������x��y��");
//	scanf("%d%d", &x, &y);
//	if (x < y) { 
//		t = x, x = y, y = t;
//		printf("�������x=%d,y=%d\n", x, y);
//	}
//}

//ʵ��P49 T4(1)
//#include <stdio.h>
//int main(void) {
//	printf("�����������ַ���");
//	for (int i = 0; i < 3; i++) {
//		char a;
//		a = getchar();
//		printf("%c\n", a);
//	}
//}

//ʵ��P49 T4(2)
//#include <stdio.h>
//#include <math.h>
//int main() {
//	int a, b, c, x1, x2;
//	printf("������ϵ��a b c:\n");
//	scanf("%d%d%d", &a, &b, &c);
//	int delta = pow(b, 2) - 4 * a * c;
//	if (delta < 0) {
//		printf("�÷����޽�\n");
//	}
//	else if (delta == 0) {
//		x1 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
//		printf("�÷���ֻ��һ��%d\n", x1);
//	}
//	else
//	{
//		x1 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
//		x2 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / 2 * a;
//		printf("�÷��̵ĸ�Ϊ%d��%d\n", x1, x2);
//	}
//  return 0;
//}