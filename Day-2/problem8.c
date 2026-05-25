#include<stdio.h>
int main(){
    int n,i,rev=0,n1;
    printf("Enter a number: ");
    scanf("%d",&n);
    n1=n;
    while(n1>0){
      i=n1%10;
      rev=rev*10+i;
      n1=n1/10;
    }
    n1=n;
    if(n1==rev){
        printf("%d is a palindrome",n);
    }
    else{
        printf("%d is not a palindrome",n);
    }
return 0;
}