#include <stdio.h>

int main() {
    FILE *file;
    char data[30];

   file = fopen("firstfile.txt", "r");

 for(int i=0;i<30;i++){
    data[i]=fgetc(file);
    if(data[i]==EOF){
     break;
     	}   

}

 for(int i=0;i<30;i++){
    printf("%c",data[i]);

}

    fclose(file);
    return 0;
}

