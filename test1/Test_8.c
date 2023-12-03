//T2.(1)
#include <stdio.h>
int fun(int n){
    int i;
    static int p=1;
    for(i=2;i<n;i++){
        p*=n;
    }
    return p;
}
int main(int argc, char const *argv[])
{
    int n;
    return 0;
}
