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
// }//按照书上的写法，在gcc下运行会出错，而vs上正常，因此重写了该函数
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
// void jhmaxmin(int *p, int n)//数组名就是指针
// {
//     int t, *max, *min, *end, *q;
//     end = p + n;//指针移动
//     max = min = p;
//     for (q = p + 1; q < end; q++)
//     {
//         if (*q > *max)
//             max = q;
//         if (*q < *min)
//             min = q;
//     }
//     t = *max;//*max即为max地址里面的内容
//     *max = *min;
//     *min = t;
// }
// T2.(3)
// #include <stdio.h>
// #include <string.h>
// int main(int argc, char const *argv[])
// {
//     int i, a[26] = {0};//在定义的时候初始化，不需要for循环
//     char ch, str[80], *p = str;
//     gets(str);
//     while (*p)
//     {
//         ch = *p++;//先把*p的值给ch，之后p向后移动一位
//         ch = (ch >= 'A' && ch <= 'Z') ? ch + 'a' - 'A' : ch;//三目运算,d=a?b:c,a为真d=b,a为假d=c
//         if (ch >= 'a' && ch <= 'z')
//             a[ch - 'a']++;
//     }
//     for (i = 0; i < 26; i++)
//         printf("%2c出现的次数为:%d\n", 'a' + i, a[i]);
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
