#include<iostream>
using namespace std;
int main(){
    int arr1[50][50];
    int arr2[50][50];
    int arr3[50][50];
    int r1,c1,r2,c2;
    cout<<"Enter number of row of 1st matrix: ";
    cin>>r1;
    cout<<"Enter numbber of column of 1st matrix: ";
    cin>>c1;
    cout<<"Enter number of row of 2nd matrix: ";
    cin>>r2;
    cout<<"Enter numbber of column of 2nd matrix: ";
    cin>>c2;
    if(c1==r2){
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                cout<<"Enter arr1["<<i<<"]["<<j<<"]: ";
                cin>>arr1[i][j];
            }
        }
        for(int i=0;i<r2;i++){
            for(int j=0;j<c2;j++){
                cout<<"Enter arr2["<<i<<"]["<<j<<"]: ";
                cin>>arr2[i][j];
            }
        }
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                arr3[i][j]=0;
                for(int k=0;k<c1;k++){
                   arr3[i][j]+=arr1[i][k]*arr2[k][j];
                }
            }
        }
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                cout<<arr3[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}