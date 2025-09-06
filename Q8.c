// WAP to find and display the sum of first n natural numbers

#include<stdio.h>
int main(){
    int n,i,sum=0;

    printf("enter a number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        sum+=i;
    }

    printf("sum of first n natural numbers is: %d",sum);


  return 0;
}


    

