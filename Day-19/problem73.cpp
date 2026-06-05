#include<iostream>
using namespace std;
int main(){
    int arr[50][50],brr[50][50];
    int n,m,k,l;
    cout<<"Enter row of 1st matrix: ";
    cin>>n;
    cout<<"Enter column of 1nd matrix: ";
    cin>>m;
    
    cout<<"Enter row of 2nd matrix: ";
    cin>>k;
    cout<<"Enter column of 2nd matrix: ";
    cin>>l;
    if(n==m && k==l){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<"Enter arr["<<i<<"]["<<j<<"]: ";
            cin>>arr[i][j];
        }
    }
    for(int i=1;i<=k;i++){
        for(int j=1;j<=l;j++){
            cout<<"Enter brr["<<i<<"]["<<j<<"]: ";
            cin>>brr[i][j];
        }
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=l;j++){
            arr[i][j]+=brr[i][j];
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
  }
  else{
    cout<<"Addition not possible";
  }
  return 0;

}