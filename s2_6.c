#include<stdio.h>

void main(){
    int n1,n2,gcd,count=1,small;

    printf("Enter Number1 = ");
    scanf("%d", &n1);

    printf("Enter Number2 = ");
    scanf("%d", &n2);

    small = (n1>n2) ? n2:n1;

    while(count<=small){
        if(n1%count == 0 && n2%count == 0){
            gcd = count;
        }
        count++;
    }

    printf("GCD of two numbers is = %d \n",gcd);
}