#include<stdio.h>
int main(){
    
    int rows;
    printf("Enter Number of Rows: ");
    scanf("%d",&rows);
    
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
    
    return 0;
}