#include<stdio.h>

float sumofmarks1(float maths1, float sci1, float eng1);
float percent1(float sum1);
float sumofmarks2(float maths2, float sci2, float eng2);
float percent2(float sum2);
float sumofmarks3(float maths3, float sci3, float eng3);
float percent3(float sum3);

int main(){
float maths1, eng1, sci1, sum1,maths2, eng2, sci2, sum2, maths3, eng3, sci3, sum3, id1, id2, id3;

// Input for 1st Student

printf("Enter the Student ID of 1st Student (e.g: 0578) = ");
scanf("%g",&id1);

printf("Enter the Math's marks of 1st Student = ");
scanf("%g",&maths1);

printf("Enter the English marks of 1st Student = " );
scanf("%g",&eng1);

printf("Enter the Science marks of 1st Student = ");
scanf("%g",&sci1);

// Input for 2nd Student 

printf("Enter the Student ID of 2nd Student (e.g: 0589) = ");
scanf("%g",&id2);

printf("Enter the Math's marks of 2nd Student = ");
scanf("%g",&maths2);

printf("Enter the English marks of 2nd Student = ");
scanf("%g",&eng2);

printf("Enter the Science marks of 2nd Student = ");
scanf("%g",&sci2);

// Input for 3rd Student

printf("Enter the Student ID of 3rd Student (e.g: 0578) = ");
scanf("%g",&id3);

printf("Enter the Math's marks of 3rd Student = ");
scanf("%g",&maths3);

printf("Enter the English marks of 3rd Student = ");
scanf("%g",&eng3);

printf("Enter the Science marks of 3rd Student = ");
scanf("%g",&sci3);

// Output Data of First Student

sum1=sumofmarks1(maths1,sci1,eng1);

printf("\nThe Sum of the Marks of 1st Student are %g\n",sum1);
printf("The Percentage of Marks of Student 1 = %g\n", percent1(sum1));
printf("Student ID = %g\n",id1);
printf("Marks of Maths are %g\n",maths1);
printf("Marks of Science are %g\n",sci1);
printf("Marks of English are %g\n",eng1);

// Output Data of second Student

sum2=sumofmarks2(maths2,sci2,eng2);

printf("\nThe Sum of the Marks of 1st Student are %g\n",sum2);
printf("The Percentage of Marks of Student 1 = %g\n", percent2(sum2));
printf("Student ID = %g\n",id2);
printf("Marks of Maths are %g\n",maths2);
printf("Marks of Science are %g\n",sci2);
printf("Marks of English are %g\n",eng2);

// Output Data of third Student

sum3=sumofmarks3(maths3,sci3,eng3);

printf("\nThe Sum of the Marks of 3rd Student are %g\n",sum3);
printf("The Percentage of Marks of Student 3 = %g\n", percent3(sum3));
printf("Student ID = %g\n",id3);
printf("Marks of Maths are %g\n",maths3);
printf("Marks of Science are %g\n",sci3);
printf("Marks of English are %g\n",eng3);

return 0;
}


float sumofmarks1(float maths1, float sci1, float eng1){
	
	return maths1+sci1+eng1;
}

float percent1(float sum1){

	float percentage1=(sum1/300)*100;

return percentage1;

}


float sumofmarks2(float maths2, float sci2, float eng2){
	
	return maths2+sci2+eng2;
}

float percent2(float sum2){

	float percentage2=(sum2/300)*100;

return percentage2;

}

float sumofmarks3(float maths3, float sci3, float eng3){
	
	return maths3+sci3+eng3;
}

float percent3(float sum3){

	float percentage3=(sum3/300)*100;

return percentage3;

}




