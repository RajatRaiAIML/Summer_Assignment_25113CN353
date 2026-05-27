#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,r,deci=0,i=0;
    cout<<"Enter a binary number: ";
    cin>>n;
    while(n>0){
       r=n%10;
       deci=deci+r*pow(2,i);
       n=n/10;
       i++;
    }
    cout<<deci;
    return 0;
}