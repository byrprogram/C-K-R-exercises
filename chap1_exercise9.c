

#include<stdio.h>

int main(void){
    long c;
    while((c=getchar())!=EOF){ //while you can receive characters do what follow
        if(c==' '){ //if the last character entered is a space do as follow
            while((c=getchar())==' '){ //while the following character is a blank,
                ; // do nothing
            }//the following character is not a blank anymore=>exiting the while loop
            putchar(' ');//add the blank character now
        } //the entered character is not a blank so we keep on with the initial while loop  
        putchar(c);//print the entered character
    }
    return 0;
}
