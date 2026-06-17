#include<iostream>
using namespace std;
bool isSkewSymmetric(int arr[50][50], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]!=-arr[j][i]){
                return false;
            }
        }
    }
    return true;
}
int main(){
    int arr[50][50];
    int n;
    cout<<"Enter the order of matrix: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter arr["<<i<<"]["<<j<<"]: ";
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    if(isSkewSymmetric(arr,n)){
        cout<<"Is a skew symmetric matrix";
    }
    else{
        cout<<"Not a skew symmetric matrix";
    }
    return 0;
}