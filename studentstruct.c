#include<stdio.h>
int main(){

    struct student
    {
        char name[20];
        int age;
        int marks;
    };
    
    struct student s1,s2;
    
        printf("Enter Name of Student 1: ");
        scanf(" %[^\n]%c",&s1.name);

        printf("Enter Age of Student 1: ");
        scanf("%d",&s1.age);

        printf("Total Marks of Student 1: ");
        scanf("%d",&s1.marks);

        printf("Enter Name of Student 2: ");
        scanf(" %[^\n]%c",&s2.name);

        printf("Enter Age of Student 1: ");
        scanf("%d",&s2.age);

        printf("Total Marks of Student 1: ");
        scanf("%d",&s2.marks);

        printf("\nStudent 1 Information\n");
        
        printf("Name: ");
         for(int i=0;i<20;i++){
         if(s1.name[i]=='\0'){
             break;
         }
         else{
        printf("%c",s1.name[i]);
         }
         }
         printf("\n");

         printf("Age: ");
         printf("%d\n",s1.age);

         printf("Total Marks: ");
         printf("%d\n",s1.marks);

          printf("\nStudent 2 Information\n");
        
        printf("Name: ");
         for(int i=0;i<20;i++){
         if(s2.name[i]=='\0'){
             break;
         }
         else{
        printf("%c",s2.name[i]);
         }
         }
         printf("\n");

         printf("Age: ");
         printf("%d\n",s2.age);

         printf("Total Marks: ");
         printf("%d\n",s2.marks);

         int average=(s1.marks+s2.marks)/2;
         printf("\nAverage Marks are: %d\n",average);
    }

