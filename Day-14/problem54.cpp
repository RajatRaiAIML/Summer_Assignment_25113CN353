#include<iostream>
#include<climits>
using namespace std;
void frequency(int arr[],int size){
    int count;
    for(int i=0;i<size;i++){
        if(arr[i]==INT_MIN){
            continue;
        }
        count=1;
        for(int j=i;j<size;j++){
            if(i!=j && arr[i]==arr[j]){
                count++;
                arr[j]=INT_MIN;
            }
        }
        cout<<arr[i]<<" occurs "<<count<<" times."<<endl;
    }
}
int main(){
    int arr[100],n,key;
    cout<<"Enter number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter arr["<<i<<"]: ";
        cin>>arr[i];
    }
    frequency(arr,n);
    return 0;
}