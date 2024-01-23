#include<stdio.h>

int main(){
    int n,m;
    printf("Enter the rows number\n");
    scanf("%d",&n);
    printf("Enter the coloum number\n");
    scanf("%d",&m);
    for (int j = 0; j < m; j ++)
    {

    
    
    for(int i = 1; i <=n; i++)
    {
        printf("%d ",i);
    }
    printf("\n");
    }
    return 0;



}