#include<stdio.h>

int main(){
    int n,m;
    printf("Enter the rows number\n");
    scanf("%d",&n);
    printf("Enter the coloum number\n");
    scanf("%d",&m);
    for (int j = 0; j < n; j ++)
    {
       
    for(int i = 1; i <=j; i++)
    {
        printf("* ");
    }
    printf("\n");
    }
    return 0;
}