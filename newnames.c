#include <stdio.h>

int main() {
    FILE *ptr;
    ptr = fopen("names.txt", "r");

    if (ptr == NULL) {
        printf("Error opening the file.\n");
        return 1;  
    }

    char name[5]; 

    while (1) {
        for (int i = 0; i < 4; i++) {
            char ch = fgetc(ptr);

            if (ch == EOF) {
                printf("End of file reached.\n");
                fclose(ptr);
                return 0;
            }

            if (ch == '\n') {
                printf("\n");
                break;
            }

            name[i] = ch;
        }

        name[4] = '\0';

        for (int i = 0; i < 4; i++) {
            printf("%c", name[i]);
        }
                        printf("\n");
    }

    fclose(ptr);
    return 0;
}

