// T2.(1)
// #include <stdio.h>
// int len(const char *s){
//     int len=0;
//     while (*s!='\0')
//     {
//         s++;
//         len++;
//     }
//     return len;
// }//�������ϵ�д������gcc�����л������vs�������������д�˸ú���
// int main(int argc, char const *argv[])
// {
//     char str[80];
//     gets(str);
//     printf("\"%s\" include %d characters.\n",str,len(str));
//     return 0;
// }
// T2.(2)
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i;
//     static int a[8] = {10, 5, 4, 0, 12, 18, 20, 46};
//     void jhmaxmin();
//     printf("Orginal array:\n");
//     for (i = 0; i < 8; i++)
//     {
//         printf("%5d", a[i]);
//     }
//     printf("\n");
//     jhmaxmin(a, 8);
//     printf("Array after swaping max and min:\n");
//     for (i = 0; i < 8; i++)
//     {
//         printf("%5d", a[i]);
//     }
//     printf("\n");
//     return 0;
// }
// void jhmaxmin(int *p, int n)//����������ָ��
// {
//     int t, *max, *min, *end, *q;
//     end = p + n;//ָ���ƶ�
//     max = min = p;
//     for (q = p + 1; q < end; q++)
//     {
//         if (*q > *max)
//             max = q;
//         if (*q < *min)
//             min = q;
//     }
//     t = *max;//*max��Ϊmax��ַ���������
//     *max = *min;
//     *min = t;
// }
// T2.(3)
// #include <stdio.h>
// #include <string.h>
// int main(int argc, char const *argv[])
// {
//     int i, a[26] = {0};//�ڶ����ʱ���ʼ��������Ҫforѭ��
//     char ch, str[80], *p = str;
//     gets(str);
//     while (*p)
//     {
//         ch = *p++;//�Ȱ�*p��ֵ��ch��֮��p����ƶ�һλ
//         ch = (ch >= 'A' && ch <= 'Z') ? ch + 'a' - 'A' : ch;//��Ŀ����,d=a?b:c,aΪ��d=b,aΪ��d=c
//         if (ch >= 'a' && ch <= 'z')
//             a[ch - 'a']++;
//     }
//     for (i = 0; i < 26; i++)
//         printf("%2c���ֵĴ���Ϊ:%d\n", 'a' + i, a[i]);
//     return 0;
// }
// T3.(1)

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int x, y, z, max, *px, *py, *pz, *pmax;
//     scanf("%d%d%d", &x, &y, &z);
//     px = &x;
//     py = &y;
//     pz = &z;
//     pmax = &max;
//     *pmax = *px;
//     if (*pmax < *py)
//         *pmax = *py;
//     if (*pmax < *pz)
//         *pmax = *pz;
//     printf("max=%d\n", max);
//     return 0;
// }

// T3.(2)
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a[8], *p, i, j, k, t;
//     p = a;//��������Ԫ�صĵ�ַ��ֵ��p
//     printf("Input the numbers:");
//     for (i = 0; i < 8; i++)
//     {
//         scanf("%d", p + i);
//     }
//     for (i = 0; i < 7; i++)
//     {
//         for (j = i; j < 8; j++)
//         {
//             if (j == i || *(p + j) < t)
//             {
//                 t = *(p + j);
//                 k = j;
//             }
//         }
//         if (k != i)
//         {
//             t = *(p + k);
//             *(p + k) = *(p + i);
//             *(p + i) = t;
//         }
//     }
//     for (i = 0; i < 8; i++)
//         printf("%5d", *(p + i));
//     return 0;
// }

// T3.(3)
// #include <stdio.h>
// #include <string.h>
// int chnum(char *p);
// int main(int argc, char const *argv[])
// {
//     char str[6];
//     int n;
//     gets(str);
//     if (*str == '-')
//         n = -chnum(str + 1);
//     else
//         n = chnum(str);
//     printf("%d\n", n);
//     return 0;
// }
// int chnum(char *p)
// {
//     int num = 0, k, len, j;
//     len = strlen(p);
//     for (; *p != '\0'; p++)
//     {
//         k = *p - '0';
//         j = (--len);
//         while (j-->0)
//         {
//             k *= 10;
//         }
//         num = num + k;
//     }
//     return num;
// }

// T3.(4)
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i,k=0;char a[80],b[110],*p;
//     p=a;
//     gets(p);
//     for(i=0;*p!='\0';p++,k++,i++){
//         if(i%3==0&&i!=0){b[k]=' ';k++;};
//         b[k]=*p;
//     }
//     b[k]='\0';
//     puts(b);
//     return 0;
// }

//T4.(1)
// #include<stdio.h>
// #include <math.h>
// int main(int argc, char const *argv[])
// {
//     char str[100], * s; int num[100] = { 0 }, i = 0, n = 0, j;
//     s=str;
//     gets(str);
//     for(;*s!='\0';s++){
//         if(*s>='0'&&*s<='9'){
//             num[i++]=*s-'0';
//         }
//     }i--;
//     for(j=0;i>=0;i--,j++){
//         n+=num[j] * pow(10,i);
//     }
//     printf("%d",n);
//     return 0;
// }

// T4.(2)
// #include <stdio.h>
// void encrypt(char *str[]){
//     char *c;
//     c=str;
//     for(;*c!='\0';c++){
//         if(*c>='a'&&*c<'x'){
//             *c+=3;
//         }else if(*c>='x'&&*c<='z'){
//             switch (*c)
//             {
//             case 'x': *c = 'a';break;
//             case 'y': *c = 'b';break;
//             case 'z': *c = 'c';break;
//             }
//         }
//     }
// }
// void decrypt(char str[]){
//     char *c;
//     c=str;
//     for(;*c!='\0';c++){
//         if(*c>='d'&&*c<='z'){
//             *c-=3;
//         }else if(*c>='a'&&*c<='c'){
//             switch (*c)
//             {
//             case 'a': *c = 'x';break;
//             case 'b': *c = 'y';break;
//             case 'c': *c = 'z';break;
//             }
//         }
//     }
// }
// int main(int argc, char const *argv[])
// {
//     char str[100];
//     gets(str);
//     printf("ԭʼ�ַ�����%s\n",str);
//     encrypt(str);
//     printf("���ܺ�:%s\n",str);
//     decrypt(str);
//     printf("���ܺ�:%s\n",str);
//     return 0;
// }
