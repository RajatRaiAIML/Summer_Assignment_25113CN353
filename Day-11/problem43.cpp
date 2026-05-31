#include<iostream>
using namespace std;
void checkprime(int a){
    int count=0;
    for(int i=2;i<=a/2;i++){
        if(a%i==0){
            count++;
            break;
        }
    }
    if(count==0)
        cout<<""<<a<<" is a prime";
    else
        cout<<""<<a<<" is not a prime";
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    checkprime(n);
    return 0;
}