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
