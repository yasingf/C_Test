//T2.(1)
// #include <stdio.h>
// int fun(int n){//ʵ�ּ���׳˲�����
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
// void Inverse(char str[]);//��Ŀ��ȱʧ�ֺţ���������Ҫ�ԷֺŽ�β
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
//     for(i=0;i<d;i++){//����Ŀ��д��һ��ѭ��������⣬��ʡcpu����
//         t[i]=s[d-i-1];//������
//         t[d+i]=s[i];//˳����
//     }
//     t[d*2]='\0';//�ַ���Ҫ��\0��β
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
//     for(i=m;;i++){//��һ��ѭ����������m�����
//         for(k=2;k<sqrt(i);k++){//�ж��Ƿ�Ϊ����
//             if(i%k==0) break;//����ܱ�������������
//         }
//         if(i%k) return i;//�ж��Ƿ��Ǳ��������������δ�ܱ�����������
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


