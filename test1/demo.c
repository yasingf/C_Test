#include <stdlib.h>
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int cnt = 0;
	void *p;
	while ( (p=malloc(100*1024*1024)) ){
		cnt++;
	}
	printf("分配了%d00MB内存\n",cnt);
	free(p)
	return 0;
}