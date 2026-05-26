#include<stdio.h>
int main(){
    int i,a=0,b=1,fib,n;
    printf("Enter the element which you want to find: ");
    scanf("%d",&n);
    if(n==0){
        printf("%d",a);
    }
    else if(n==1){
        printf("%d",b);
    }
    else{
    for(i=2;i<=n;i++){
        fib=a+b;
        a=b;
        b=fib;
    }
    printf("element at %d is %d",n,b);
  }
  return 0;
}