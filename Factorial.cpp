#include<iostream>
using namespace std;


int fact = 1 ;
void factorial(int N){
    if(N<1){
        cout<<fact<<endl;
        return ;
    }
    fact = fact * N;
    factorial(N-1);
}

int main(){
    int N;
    cout<<"Enter N : ";
    cin>>N;
    factorial(N);
    return 0;
}