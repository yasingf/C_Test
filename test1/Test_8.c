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
//     result=sum(x+i1-1,i2-i1);//������xʵ��Ϊָ�룬��ָ��+������n��Ϊ�ƶ�ָ��n����λ�������x+i1-1�����i1��Ԫ��
//     //ԭ��Ŀ��д����x+i1,�������i1+1λԪ�أ�����ĿҪ���i1λ��ʼ�����-1����
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
//     while (strTemp[j]){//���Ƿ�Ϊ\0��Ϊѭ������
//        srcStr[i++]=strTemp[j++];//���ƣ�Ȼ������+1��ԭ��Ŀ�пճ�һ������j++������й���һ��
//        srcStr[i++]=' '; //��ո�
//     }
//     srcStr[i] = '\0';
// }
// T3.(4)
// #include <stdio.h>
// void a(int i){
//     int j,k;
//     for(j=1;j<30-i;j++) printf("%c",' ');//���ǰ���ո񣬱�֤������״
//     for(k=1;k<=2*i-1;k++) printf("%d",i);//�������
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
//     for(i=0;i<n;i++){//�ҳ����ֵ����Сֵ����¼λ��
//         if(a[i]>max){//���ֵ
//             max=a[i];maxi=i;
//         }
//         if(a[i]<min){//��Сֵ
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
//     /*sizeof˵��
//     sizeof(a)ͳ�Ƶ���a��ռ���ֽ�����sizeof(a[0])ͳ�Ƶ���ΪԪ����ռ���ֽ���
//     ������������Ĺ����д��ݵ���ָ�룬�������1��Ԫ�ص��ڴ��ַ���ں����ڲ��޷���ȡ�ⲿ�����Ԫ������
//     ����дsizeof�ǽ�Ϊͨ�õ�һ��д�����ڱ�������Ҳ����ֱ��д10
//     */
//     for(i=0;i<10;i++) printf("%d\t",a[i]);
//     return 0;
// }





