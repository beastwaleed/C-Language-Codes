#include <stdio.h>

int main() {
    float num=1.0,denom=2.0;
    float sum=0.0;
    
    for(float i=1;i<100;i++){
        sum+=num/denom;
        num++;
        denom++;
    }
    
    printf("%f\n",sum);
    return 0;
}
