#include<iostream>
using namespace std;
int fact(int i)
{
	int facto = 1;
	for(int j = i; j>1; j--){
		facto = facto*j;
	}
	//cout<<facto<<endl;
}
int main(){
	int n,r;
//	cout<<"Enter 2 numbers you want factorial of: "<<endl;
	cin>>n>>r;
	int res = fact(n)/(fact(r)*fact(n-r));
	cout<<res<<endl;
    return 0;
}
