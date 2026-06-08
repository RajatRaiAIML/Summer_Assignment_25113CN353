#include<stdio.h>
int main(){
    int i,a=0,b=1,c,n;
    printf("Enter the element which you want to find: ");
    scanf("%d",&n);
    if(n==0){
        printf("%d",a);
    }
    else if(n==1){
        printf("%d",b);
    }
    else{
    for(i=1;i<n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf("element at %d is %d",n,c);
  }
  return 0;
}