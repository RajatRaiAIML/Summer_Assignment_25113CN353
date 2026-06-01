#include<iostream>
using namespace std;
int main(){
    int arr[100],n,countE=0,countO=0;
    cout<<"Enter number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter arr["<<i<<"]: ";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0)
        countE++;
        else
        countO++;
    }
    cout<<"Number of odd elements: "<<countO<<endl;
    cout<<"Number of even elements: "<<countE;
    return 0;
}