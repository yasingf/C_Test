//T2.(1)
// #include <stdio.h>
// int fun(int n){//实现计算阶乘并返回
//     int i;
//     static int p=1;
//     for(i=2;i<n;i++){
//         p*=n;
//     }
//     return p;
// }
// int main(int argc, char const *argv[])
// {
//     int n,f;
//     printf("input number:");
//     scanf("%d",&n);
//     f=fun(n);
//     printf("%d",f);
//     return 0;
// }
// T2.(2)
// #include <stdio.h>
// #include <string.h>
// #define ARR_SIZE 80
// void Inverse(char str[]);//题目中缺失分号，函数声明要以分号结尾
// int main(int argc, char const *argv[])
// {
//     char str[ARR_SIZE];
//     printf("Please enter a string:");
//     gets(str);
//     Inverse(str);
//     printf("The inversed string is:");
//     puts(str);
//     return 0;
// }
// void Inverse(char str[]){
//     int len,i=0,j;char temp;
//     len=strlen(str);
//     for(j=len-1;i<j;i++,j--){
//         temp=str[i];
//         str[i]=str[j];
//         str[j]=temp;
//     }
// }
// T2.(3)
// #include <stdio.h>
// #include <string.h>
// void sub(char s[],char t[]){
//     int i,d;
//     d = strlen(s);
//     for(i=0;i<d;i++){//对题目重写，一个循环解决问题，节省cpu算力
//         t[i]=s[d-i-1];//逆序复制
//         t[d+i]=s[i];//顺序复制
//     }
//     t[d*2]='\0';//字符串要以\0结尾
// }
// int main(int argc, char const *argv[])
// {
//     char s[100],t[100];
//     printf("Please enter string s:");
//     gets(s);
//     sub(s,t);
//     puts(t);
//     return 0;
// }
// T3.(1)
// #include <stdio.h>
// #include <math.h>
// int fun(int m){
//     int i,k;
//     for(i=m;;i++){//第一重循环，遍历比m大的数
//         for(k=2;k<sqrt(i);k++){//判断是否为素数
//             if(i%k==0) break;//如果能被整除，则跳出
//         }
//         if(i%k) return i;//判断是否是被整除的数，如果未能被整除即素数
//     }
// }
// int main(int argc, char const *argv[])
// {
//     int n;
//     printf("Please enter n:");
//     scanf("%d",&n);
//     printf("%d\n",fun(n));
//     return 0;
// }
// T3.(2)
#include <stdio.h>
int sum(int x[],int n){
    int i,s=0;
    for(i=0;i<n;i++){
        s+=x[i];
    }
    return s;
}
int main(int argc, char const *argv[])
{
    int i,i1,i2,result,x[10];
    for(i=0;i<10;i++){
        scanf("%d",&x[i]);
    }
    result=sum(x+i1,x+i2);
    return 0;
}


