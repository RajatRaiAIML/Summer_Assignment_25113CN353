#include<iostream>
#include<climits>
using namespace std;
void removeduplicate(int arr[],int n){
    int brr[100];
    int k=0;
    for(int i=0;i<n;i++){
        if(arr[i]==INT_MIN){
            continue;
        }
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                arr[j]=INT_MIN;
            }
        }
        brr[k]=arr[i];
        k++;
    }
    for(int i=0;i<k;i++){
        cout<<brr[i]<<" ";
    }
}
int main(){
    int arr[100],size;
    cout<<"Enter number of elements: ";
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"Enter arr["<<i<<"]: ";
        cin>>arr[i];
    }
    cout<<"Array before removing duplicates."<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Array after removing duplicates."<<endl;
    removeduplicate(arr,size);
    return 0;
}