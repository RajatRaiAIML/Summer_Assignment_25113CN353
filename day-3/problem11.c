#include<stdio.h>
int hcf(int x,int y){
    if(y==0){
        return x;
    }
    else{
        return hcf(y,x%y);
    }
}
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    int gcd=hcf(a,b);
    printf("Gcd of %d and %d is %d",a,b,gcd);
    return 0;
}