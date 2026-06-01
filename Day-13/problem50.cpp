#include<iostream>
using namespace std;
int main(){
    int arr[100],n,sum=0;
    cout<<"Enter number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter arr["<<i<<"]: ";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<endl<<"Sum="<<sum;
    float avg=(float)sum/n;
    cout<<endl<<"Average="<<avg;
    return 0;
}