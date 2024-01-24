#include<stdio.h>

float marks(float eng, float math, float bio, float cs, float phy){

 return eng+math+bio+cs+phy;
 
 }
 
float avg(float eng, float math, float bio, float cs, float phy){
 
 return (eng+math+bio+cs+phy)/5;

 }

float percentage(float eng, float math, float bio, float cs, float phy, float total){
	
	return (eng+math+bio+cs+phy)/total * 100;

}

int main(){
float eng, math, bio, cs, phy, total;

printf("Enter English marks you obtained = ");
scanf("%f",&eng);

printf("Enter Maths marks you obtained = ");
scanf("%f",&math);

printf("Enter Bio marks you obtained = ");
scanf("%f",&bio);

printf("Enter CS marks you obtained = ");
scanf("%f",&cs);

printf("Enter Physics marks you obtained = ");
scanf("%f",&phy);

printf("Enter Total marks of the Test = ");
scanf("%f",&total);

printf("The Total Marks you obtained are = %.2f\n",marks(eng,math,bio,cs,phy));

printf("The Average Marks you obtained are = %.2f\n",avg(eng,math,bio,cs,phy));

printf("The Percentage you got is = %.2f\n",percentage(eng,math,bio,cs,phy,total));

return 0;
}
