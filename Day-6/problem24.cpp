#include<iostream>
using namespace std;
int main(){
    int x,n,res=1;
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++){
       res*=x;
    }
    cout<<res;
    return 0;
}