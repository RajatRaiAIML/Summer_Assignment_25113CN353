#include<iostream>
using namespace std;
void columnwisesum(int arr[50][50],int i,int j){
    int col=0;
    int sum;
    while(col<j){
        sum=0;
        for(int row=0;row<i;row++){
            sum+=arr[row][col];
        }
        cout<<sum<<"    ";
        col++;
    }
}
int main(){
    int arr[50][50];
    int r,c;
    cout<<"Enter row of matrix: ";;
    cin>>r;
    cout<<"Enter column of matrix: ";
    cin>>c;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"Enter arr["<<i<<"]["<<j<<"]: ";
            cin>>arr[i][j];
        }
    }
    columnwisesum(arr,r,c);
    return 0;
}