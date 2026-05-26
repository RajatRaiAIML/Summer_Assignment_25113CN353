#include<stdio.h>
#include<math.h>
int main(){
    int n,count=0,sum=0,i,n1;
    printf("Enter a number: ");
    scanf("%d",&n);
    n1=n;
    while(n1>0){
        n1=n1/10;
        count++;
    }
    n1=n;
    while(n1>0){
        i=n1%10;
        sum+=pow(i,count);
        n1=n1/10;
    }
    n1=n;
    if(n1==sum)
        printf("%d is an amstrong number",n);
    else
        printf("%d is not a amstrong number",n);
    return 0;
}