#include<stdio.h>
#include<stdlib.h>

int main(){

char newpass[15];
char confirmpass[15];

int const limit=15;
int error=0;

printf("\nPassword Must be between 8 and 15 character Inclusive\nIt should contain atleast one uppercase alphabhet\nThe new password and confirmation password must be same\n");

printf("\nEnter New Password = ");
scanf("%s",newpass);


int password_length =0;

    while (newpass[password_length] != '\0'){
        password_length++;
    
    }

 if (password_length > limit || password_length < 8){
 
        printf("Invalid Password!\n\a");
    
    } 

	else {
	
	printf("\nConfirm Password = ");
	scanf("%s", confirmpass);
	
	int same = 0, upper = 0;

	for (int i = 0; i <password_length; i++) {
      if (newpass[i] == confirmpass[i]) {

                same++;
               
	 if (newpass[i] >= 'A' && newpass[i] <= 'Z') {
                    upper++;
                
                }
            }
        }
        
        if(upper==0){
        
        printf("\nInvalid Password!\n\a");
        
        }
        
        if(upper!=0 && same == password_length){
        
        printf("\nPassword Changed Succesfully\n\a");
        }
	
	
	}

return 0;	
}
