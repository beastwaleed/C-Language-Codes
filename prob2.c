#include<stdio.h>


float anumSalary(float salary){

	return salary*12.0;
}

int main(){

	float getsalary;
	
	float salary;	
	char currentchar;
	int n;

    FILE *name;
    FILE *earn;

    name = fopen("data.txt", "r");
    earn = fopen("annum.txt", "w");

    if (name == NULL){
        printf("Error Opening Input File\n");
        return 1;
    }

    if (earn == NULL){
        printf("Error Opening Output File\n");
        fclose(name);
        return 1;
    }
    
    printf("How Many Employees Does the File Contains: ");
	scanf("%d",&n);

    for (int employee = 1; employee <= n; ++employee) {
    while ((currentchar = fgetc(name))!= EOF && currentchar!=','){
        fputc(currentchar, earn);
    }
	
	fputc(',',earn);

           while (fscanf(name, "%f", &getsalary) == 1){ //fscanf(pointer,"format identifier",variable to store);
            anumSalary(getsalary);
            fprintf(earn, "%.3f", anumSalary(getsalary));
            
            if(getsalary='\n'){
            fprintf(earn, "\n");}

}
}
    // Close the files
    fclose(name);
    fclose(earn);

    return 0;
}
