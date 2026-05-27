#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,r,bin=0,place=1,n1,setbits=0,j;
    cout<<"Enter a decimal number: ";
    cin>>n;
    while(n>0){
        r=n%2;
        bin=bin+(r*place);
        n=n/2;
        place=place*10;
    }
    n1=bin;
    while(n1>0){
        j=n1%10;
        if(j==1)
        setbits++;
        n1=n1/10;
    }
    cout<<"Number of setbits: "<<setbits;
    return 0;
}