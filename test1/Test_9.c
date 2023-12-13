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
#include <stdio.h>
int main(int argc, char const *argv[])
{
   int i; static int a[8]={10,5,4,0,12,18,20,46};
   void jhmaxmin();
   return 0;
}
void jhmaxmin(int *p,int n){
   int t,*max,*min,*end,
}