#include<iostream>
using namespace std;

void printarray(int arr[], int n){
    cout<<"The reversed array :-"<<endl;
    for(int i=0 ; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

// using two pointer approach
void reversearray(int arr[], int start, int end){
    if(start>=end){
        return;
    }
    swap(arr[start], arr[end]);
    reversearray(arr, start+1, end-1);
}

// using one pointer
void revrsearr(int arr[], int start, int n){
    if(start > n/2){
        return;
    }
    swap(arr[start], arr[n-start-1]);
    revrsearr(arr,start+1,n);
}


int main(){
    int n ;
    cout<<"Enter size of arr : "<<endl;
    cin>>n;
    int arr[n] ;
    for(int i=0 ; i<n ; i++){
        cout<<"Enter number"<<endl;
        cin>>arr[i];
    }
    //reversearray(arr,0,n-1);
    revrsearr(arr,0,n);
    printarray(arr,n);

    return 0;
}