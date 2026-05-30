#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows and columns: ";
    cin>>n;
    int num;
    for(int i=0;i<n;i++){
        num=1;
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int k=0;k<=i;k++){
            cout<<num;
            num++;
        }
        for(int k=i;k>=1;k--){
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}