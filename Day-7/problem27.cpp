#include<iostream>
using namespace std;
int Sumofdigits(int num){
    if(num==0){
        return 0;
    }
    else
    return num%10+Sumofdigits(num/10);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<Sumofdigits(n);
    return 0;
}