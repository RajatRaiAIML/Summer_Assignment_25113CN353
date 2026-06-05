#include<iostream>
using namespace std;
int main(){
    int arr[50][50],sum=0;
    int n,m;
    cout<<"Enter number of rows: ";
    cin>>n;
    cout<<"Enter number of columns: ";
    cin>>m;
    if(n==m){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cout<<"Enter arr["<<i<<"]["<<j<<"]: ";
                cin>>arr[i][j];
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(i==j || i+j==n-1){
                    sum+=arr[i][j];
                }
            }
        }
        cout<<"Sum of diagonal elements:"<<sum;
    }
    else{
        cout<<"Diagonal sum not possible";
    }
    return 0;
}