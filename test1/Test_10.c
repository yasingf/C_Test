#include <string.h>
#include <stdio.h>
#define NUM 5
struct student{
    int rank;
    char name[20];
    float score;
}stu[] = {
    5,"Cary",95.8,
    3,"Tom",89.3,
    4,"Marry",78.2,
    1,"Jack",95.1,
    2,"Jim",90.6
};
int main(int argc, char const *argv[])
{
    char str[10];int i;
    do{
        printf("Enter a name:");
        scanf("%s",str);
    }
    return 0;
}
