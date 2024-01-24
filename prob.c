#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {


    if (n == 0 || n == 1) {
        return 1;
    }
    
     else {
	int i,fact=1;
    	for(i=1;i<=n;++i){
    	fact*=i;

    	}
	return fact;
    }

}


int main() {

    FILE *inputFile = fopen("integers.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening input file\n");
        return 1;
    }


    FILE *outputFile = fopen("new.txt", "w");
    if (outputFile == NULL) {
        printf("Error opening output file\n");
        fclose(inputFile);
        return 1;
    }

    int num;

    // Read integers from the input file and calculate factorials
    while (fscanf(inputFile, "%d", &num) == 1) {
       int result = factorial(num);

        // Display the factorial
        printf("Factorial of %d: %d\n", num, result);

        // Write the result to the output file
        fprintf(outputFile, "%d\n", result);
    }

    // Closing the files
    fclose(inputFile);
    fclose(outputFile);

    return 0;
}

