#include<stdio.h>
int main(){
    char name[30];
    char id[8];
    float cgpa;

    FILE *fptr;
    fptr=fopen("firstfile.txt","w");

    printf("Enter Your Name: ");
    scanf("%[^\n]%*c",name);
    fprintf(fptr,"%s\n",name); //fprinitf(pointer,"formatidentifier",variable);
  
    printf("Enter Your Roll No [p230123]: ");
    scanf("%[^\n]%*c",id);
    fprintf(fptr,"%s\n",id);

    printf("Enter CGPA: ");
    scanf("%f",&cgpa);
    fprintf(fptr,"%.2f\n",cgpa);

    fclose(fptr);

}
