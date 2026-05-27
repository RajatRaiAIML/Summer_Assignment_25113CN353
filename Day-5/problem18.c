#include<stdio.h>
int main(){
    int n,i,j,sum=0,n1,fact;
    printf("Enter a number: ");
    scanf("%d",&n);
    n1=n;
    while(n1>0){
      i=n1%10;
      fact=1;
      for(j=1;j<=i;j++){
        fact=fact*j;
      }
      sum+=fact;
      n1=n1/10;
    }
    n1=n;
    if(n1==sum)
        printf("%d is a strong number",n);
    else
        printf("%d is not a strong number",n);
    return 0;
}