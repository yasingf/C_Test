//例7-12
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
// 	char st[15];
// 	printf("input string:\n");
// 	scanf("%s",st);
// 	printf("%s\n",st);
// 	return 0;
// }

//例7-13
// int main(int argc, char const *argv[])
// {
// 	char st1[5],st2[5],st3[5],st4[5];
// 	printf("input string:\n");
// 	scanf("%s %s %s %s",st1,st2,st3,st4);
// 	printf("%s %s %s %s\n",st1,st2,st3,st4);
// 	return 0;
// }


// 2.(1)
// #include <stdio.h>
// int main()
// {
// 	int a[12],av,i,n=12;
// 	for(i=0;i<n;i++) scanf("%d",&a[i]);
// 	for(i=0;i<n;i++){
// 		printf("%d\t",a[i]);
// 		if((i+1)%3==0) printf("\n");
// 		av+=a[i];
// 	}
// 	printf("av=%f\n",(float)av/n);
// 	return 0;
// }
//T2.(2)
// #include <stdio.h>
// int main()
// {
// 	int a[10],i,sum=0;
// 	for(i=0;i<10;i++)
// 	{
// 		scanf("%d",&a[i]);
// 		sum+=a[i];
// 	}
// 	printf("sum=%d\n",sum);
// 	return 0;
// }
// T2.(3)
// #include <stdio.h>
// int main()
// {
// 	char a[10] = "wel", b[] = "come";int i=0,n=0;
// 	while (a[n]) {
// 		n++;
// 	}
// 	for(i=0;b[i];i++){
// 		a[n+i]=b[i];
// 	}
// 	a[n+i]='\0';
// 	printf("%s\n", a);
// 	return 0;
// }
//T2.(4)
// #include <stdio.h>
// #define N 4
// #define M 4
// int main(int argc, char const *argv[])
// {
// 	int i,j,k,flag1,flag2,a[N][M],max,maxj;
// 	for(i=0;i<N;i++){
// 		for(j=0;j<M;j++){
// 			scanf("%d",&a[i][j]);
// 		}
// 	}
// 	flag2 = 0;
// 	for(i=0;i<N;i++){
// 		max = a[i][0];maxj=0;
// 		for(j=1;j<M;j++){
// 			if(a[i][j]>max){
// 				max=a[i][j];
// 				maxj=j;
// 			}
// 		}
// 		for (k = 0, flag1 = 1; k < N && flag1; k++) {
// 			if (max > a[k][maxj]) flag1 = 0;
// 		}
// 		if(flag1){
// 			printf("\nThe saddle point is:a[%d][%d]=%d\n",i+1,maxj+1,max);
// 			flag2=1;
// 		}
		
// 	}
// 	if(!flag2) printf("\nThere is no saddle point in the Matrix\n");
// 	return 0;
// }

//T3.(1)
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
// 	int i = 0, base, n, j, num[20];
// 	scanf("%d",&n);
// 	scanf("%d",&base);
// 	do{
// 		i++;
// 		num[i]=n%base;
// 		n=n/base;

// 	}while(n!=0);
// 	for (j = i; j > 0; j--) {
// 		printf("%d", num[j]); 
// 	}
// 	return 0;
// }
// T3.(2)
// #include <stdio.h>
// #include <string.h>
// int main(int argc, char const *argv[])
// {
// 	char string[20],str[3][20];int i;
// 	for(i=0;i<3;i++) gets(str[i]);
// 	if(strcmp(str[0],str[1])>0) strcpy(string,str[0]);
// 	else strcpy(string,str[1]);
// 	if(strcmp(string,str[2])<0) strcpy(string,str[2]);
// 	puts(string);
// 	return 0;
// }
// T3.(3)
// #include <stdio.h>
// #define N 10
// int main(int argc, char const *argv[])
// {
// 	int a[] = {0,1,2,3,4,5,6,7,8,9},k;
// 	int low=0,high=(sizeof(a)/sizeof(a[0]))-1,mid,find=0;
// 	printf("请输入要查找的值:\n");
// 	scanf("%d",&k);
// 	while(low<=high){
// 		mid = (low+high)/2;
// 		if (a[mid]==k){
// 			printf("找到位置为：%d\n",mid+1);
// 			find=1;
// 		}
// 		if(a[mid]>k){
// 			high=mid-1;
// 		}else low=mid+1;
// 	}
// 	if(!find) printf("%d未找到\n",k);
// 	return 0;
// }
// t3.(4)
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
// 	int i,a[10],sum=0,count=0;
// 	printf("请输入：\n");
// 	for(i=0;i<10;i++) scanf("%d",&a[i]);
// 	for(i=0;i<10;i++){
// 		if(a[i]<0) continue;
// 		sum+=a[i];
// 		count++;
// 	}
// 	printf("sum=%d,count=%d\n",sum,count);
// 	return 0;
// }
// T4.(1)
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
// 	int a[11],i,j,p,temp,k;
// 	//读入数组
// 	for(i=0;i<10;i++) scanf("%d",&a[i]);
// 	//选择排序
// 	for(i=0;i<10;i++){
// 		p=i;
// 		for(j=i+1;j<10;j++){
// 			if(a[p]<a[j]) p=j;
// 		}
// 		temp = a[i];
// 		a[i]=a[p];
// 		a[p]=temp;
// 	}
// 	printf("请输入要插入的数字：");
// 	scanf("%d",&k);
// 	//寻找插入位置
// 	for(i=0;i<10;i++){
// 		if(k>=a[0]) break;
// 		if(k<a[i]&&k>=a[i+1]) break;
// 	}
// 	for(j=10;j>i;j--) a[j]=a[j-1];//把找到的位置后的元素均往后移
// 	a[i]=k;//插入
// 	for(i=0;i<11;i++) printf("%d\t",a[i]);//输出插入后的数组
// 	return 0;
// }
//T4.(2)
// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
// 	int A=[2][3],B=[2][3],C=[2][3],i,j;
// 	//读入矩阵A，B
// 	for(i=0;i<2;i++){
// 		for(j=0;j<3;j++) scanf("%d",&A[i][j]);
// 	}
// 	for(i=0;i<2;i++){
// 		for(j=0;j<3;j++) scanf("%d",&B[i][j]);
// 	}
// 	// 计算矩阵C
// 	for(i=0;i<2;i++){
// 		for(j=0;j<3;j++) C[i][j]=A[i][j]+B[i][j];
// 	}
// 	return 0;
// }
// T4.(3)
//#include <stdio.h>
//#include <string.h>
//int main(int argc, char const *argv[])
//{
//	char c,str[100];int i,j;
//	gets(str);
//	printf("请输入要删除的字符");
//	c=getchar();
//	for(i=0;i<strlen(str);i++){
//		if(str[i]==c){
//			for(j=i;j<strlen(str);j++) str[j]=str[j+1] ;
//		}
//	}
//	puts(str);
//	return 0;
//}
//T4.(4)
#include <stdio.h>
