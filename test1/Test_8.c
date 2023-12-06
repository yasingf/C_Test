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
// #include <stdio.h>
// int sum(int x[],int n){
//     int i,s=0;
//     for(i=0;i<=n;i++){
//         s+=x[i];
//     }
//     return s;
// }
// int main(int argc, char const *argv[])
// {
//     int i,i1,i2,result,x[10];
//     for(i=0;i<10;i++){
//         scanf("%d",&x[i]);
//     }
//     scanf("%d%d",&i1,&i2);
//     result=sum(x+i1-1,i2-i1);//数组名x实际为指针，对指针+—整数n即为移动指针n个单位，在这里，x+i1-1代表第i1个元素
//     //原题目中写的是x+i1,这代表着i1+1位元素，而题目要求从i1位开始，因此-1处理
//     printf("Sum=%d\n",result);
//     return 0;
// }
// T3.(3)
// #include <stdio.h>
// #include <string.h>
// #define MAX 80
// void Insert(char s[]);
// int main(int argc, char const *argv[])
// {
//     char string[2*MAX];
//     scanf("%s",string);
//     Insert(string);
//     puts(string);
//     return 0;
// }
// void Insert(char srcStr[]){
//     char strTemp[MAX];int i=0,j=0;
//     strcpy(strTemp,srcStr);
//     while (strTemp[j]){//以是否为\0作为循环条件
//        srcStr[i++]=strTemp[j++];//复制，然后索引+1，原题目中空出一行来做j++，与该行功能一样
//        srcStr[i++]=' '; //填空格
//     }
//     srcStr[i] = '\0';
// }
// T3.(4)
// #include <stdio.h>
// void a(int i){
//     int j,k;
//     for(j=1;j<30-i;j++) printf("%c",' ');//输出前方空格，保证菱形形状
//     for(k=1;k<=2*i-1;k++) printf("%d",i);//输出数字
//     printf("\n");
// }
// int main(int argc, char const *argv[])
// {
//     int i;
//     for(i=1;i<=7;i++) a(i);
//     for(i=6;i>=1;i--) a(i);
//     return 0;
// }
// T4.1
// #include <stdio.h>
// void EcMaxMin(int a[],int n){
//     int i, min = a[0], max = a[0], mini = 0, maxi = 0;
//     for(i=0;i<n;i++){//找出最大值与最小值并记录位置
//         if(a[i]>max){//最大值
//             max=a[i];maxi=i;
//         }
//         if(a[i]<min){//最小值
//             min=a[i];mini=i;
//         }
//     }
//     a[mini] = max;
//     a[maxi] = min;
// }
// int main(int argc, char const *argv[])
// {
//     int a[10],i;
//     for(i=0;i<10;i++) scanf("%d",&a[i]);
//     EcMaxMin(a,sizeof(a)/sizeof(a[0]));
//     /*sizeof说明
//     sizeof(a)统计的是a所占的字节数，sizeof(a[0])统计的则为元素所占的字节数
//     函数传递数组的过程中传递的是指针，即数组第1个元素的内存地址，在函数内部无法获取外部数组的元素数量
//     这里写sizeof是较为通用的一种写法，在本例子中也可以直接写10
//     */
//     for(i=0;i<10;i++) printf("%d\t",a[i]);
//     return 0;
// }





