#include<stdio.h>

int main(void){
    double num_a, num_b, num_c, num_max;
    
    printf("Please enter 3 numbers seperated by a space \n");
    scanf("%lf %lf %lf",&num_a , &num_b , &num_c);
    if(num_a<num_b){
        num_max=num_b;
    } else {
        num_max=num_a;
    }

    if (num_max<num_c){
        num_max=num_c;
    } else{
        ;
    }
    
    printf("The max is %.0lf \n", num_max);
    return 0;
}
