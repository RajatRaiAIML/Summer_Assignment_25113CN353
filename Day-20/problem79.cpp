#include<iostream>
using namespace std;
void rowwisesum(int arr[50][50],int i,int j){
    int row=0,sum;
    while(row<i){
        sum=0;
        for(int column=0;column<j;column++){
            sum+=arr[row][column];
        }

        cout<<sum<<endl;
        row++;
    }
}
int main(){
    int arr[50][50];
    int r,c;
    cout<<"Enter rows of matrix: ";
    cin>>r;
    cout<<"Enter column of matrix: ";
    cin>>c;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"Enter arr["<<i<<"]["<<j<<"]: ";
            cin>>arr[i][j];
        }
    }

    rowwisesum(arr,r,c);
    return 0;
}