#include<iostream>
using namespace std;

void print(int i, int N){
	if(i>N) return ;
	cout<<i<<endl;
	i++;
	print(i,N);
}
int main(){
	print(1,10);
	return 0;
}
