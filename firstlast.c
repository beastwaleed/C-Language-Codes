#include<stdio.h>
int main(){
 
long num,i,last,first;
int sumdig=0;

printf("Enter a Number = ");
scanf("%ld",&num);

for(i=0; num > 0; i++){

last=num%10;

if(num>=10 && num<100){
first = (num/10);

}

else if (num>=100 && num<1000){

first = (num/100);

}

else if (num>=1000 && num< 10000){

first = num/1000;

}

else if (num>=10000 && num< 100000){

first = num/10000;
}

else if(num>=100000 && num <1000000){

first = num/100000;
}

else if(num>=1000000 && num <10000000){

first = num/1000000;

}

else if(num>=10000000 && num <100000000){

first = num/10000000;

}

else if(num>=100000000 && num <1000000000){

first = num/100000000;

}


else if(num>=1000000000 && num <10000000000){

first = num/1000000000;

}

else if(num>=10000000000 && num <100000000000){

first = num/10000000000;

}

else if(num>=100000000000 && num <1000000000000){

first = num/100000000000;

}

else if(num>=100000000000 && num <1000000000000){

first = num/100000000000;

}

else if(num>=100000000000 && num <1000000000000){

first = num/100000000000;

}


else if(num>=1000000000000 && num <10000000000000){

first = num/1000000000000;

}

else if(num>=1000000000000 && num <10000000000000){

first = num/1000000000000;

}


else if(num>=10000000000000 && num <100000000000000){

first = num/10000000000000;

}


else if(num>=100000000000000 && num <1000000000000000){

first = num/100000000000000;

}


printf("Last digit is %ld\n",last);
printf("First digit is %ld\n",first);
int sum = first+last;
int swapf = (first * 0 ) + last;
int swapl = (last * 0) + first;

for(;num > 10; num /= 10){
int digits = num%10; 
sumdig += digits;
printf("Sum of 1st and Last is %d\n",sum);
printf("First Number After Swapping is %d\n",swapf);
printf("Last Number After Swapping is %d\n",swapl);
printf("Sum of Digits is %d\n",sumdig);

break;
}
break;
}
}


