#include<iostream>
using namespace std;
int main(){
    int n,r,bin=0,place=1;
    cout<<"Enter a decimalnumber: ";
    cin>>n;
    while(n>0){
        r=n%2;
        bin=bin+(r*place);
        n=n/2;
        place=place*10;
    }
    cout<<bin;
}