#include<stdio.h>
int main(){

int myarray[25];
int arraysize=25;
int unique_num=0;
int num;
int unique=0;

    printf("Enter 25 unique integers [between 10 - 100]:\n");
	for(int i=0;i<arraysize;i++){
		
		scanf("%d",&num);
		
	if(num>=10 && num<=100){
	int notduplicate=0;
		
		
	 for (int j = 0; j < unique_num; j++) {
               if (num == myarray[j]) {
                   unique = 0;
                   break;
                }
            }
            
	
	if(unique){
	
	 myarray[unique_num]=num;
	unique_num++;
	
	if (unique_num == 1) {
             printf("Unique values stored in the array are:\n");
            
               }
          printf("%d ", num);
            
            }
        } 
        
        
        
       else {
        printf("Please enter a number between 10 and 100.\n");
           i--;
        }
    }
	
//	printf("Unique values entered by User are = \n");
//	printf("%d ",myarray[i]);
	
//	for(int i=0;i<unique_num;i++){
	
//		printf("%d ",myarray[i]);
//
//	}
		
	
	//}


//} 	
return 0;
}
	

//}

