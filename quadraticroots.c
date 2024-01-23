#include<stdio.h>
int main(){

int a,b,c;

printf("Enter Values of A,B,C: ");
scanf("%d %d %d",&a,&b,&c);

int roots=(b*b)-4*a*c;

if(roots<0){
    printf("Roots are complex\n");
}
if(roots>0){
        printf("Roots are real and unequal\n");
}

if(roots=0){
        printf("Roots are real and equal\n");
}
return 0;
}