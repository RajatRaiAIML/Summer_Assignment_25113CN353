#include<iostream>
#include<math.h>
using namespace std;
bool prime(int n){
    if(n==2)
        return  true;
    int i;
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0)
            return  false;
    }
    return true;
}
int main(){
    int N,i;
    cout<<"Enter a number: ";
    cin>>N;
    int ans=-1;
    if(prime(N))
    ans=max(ans,N);
    for(i=2;i<=sqrt(N);i++){
        if(N%i==0){
            if(prime(i))
             ans=max(ans,i);
            if(prime(N/i))
            ans=max(ans,N/i);
        }
    }
    cout<<"Largest prime factor: "<<ans;
    return 0;
}