#include <stdio.h>

void printNames(int, int);

int main() {
    FILE *fptr;
    char content[100];

    fptr = fopen("names.txt", "r");

    if (fptr == NULL){
    
        printf("\nError: Cannot open file");
        printf("\n-----------------------\n\n");
    
        return 1;    
    } 
    	else 
    
    {
        int total_length=0;
        int four=0;

        for (int i=0;i<sizeof(content);i++) {
            content[i]=fgetc(fptr);
            

            if (content[i]!='\n' && content[i]!=EOF) {
            
                if (four<=4){
            
                    printf("%c",content[i]);
                    four++;
                    total_length++;
            
                }
            }
            
            else 
          
          {
          
               printf("\n");
          
            }

            if(content[i] == EOF) {
               break;      
            }
        }
    
    }

    fclose(fptr);

    int length = 0;
    printf("\nEnter number of characters a name should have : ");
    scanf("%d", &length);

	    printNames(length, 5); // Call printnames function with the specified length and 5 letters

    return 0;
}

void printNames(int targetLength, int numberOfLetters) {
    FILE *fptr;
    char names[100];
    int name_length = 0;

	    fptr = fopen("names.txt", "r");

    if (fptr == NULL) {
        printf("\nError: Cannot open file");
        printf("\n-----------------------\n\n");
    } else {
        rewind(fptr);

        for (int i=0;i<sizeof(names);i++){
            names[i]=fgetc(fptr);

            if(names[i]!='\n' && names[i]!=EOF){
                name_length++;
            }

            if (names[i]=='\n' && names[i]!=EOF) {
                if (name_length==targetLength) {
                    names[i + 1]='\0';
                    printf("%s",names);
                    i=0-1;
                    
                    name_length=0;
                    
                } 
                
                else 
                	{
                
                    i = 0 - 1;
                
                    name_length = 0;
                }
                
            } 
            
            else if (names[i] == EOF) {
                break;
            
            }
        
        		}
    }
}

