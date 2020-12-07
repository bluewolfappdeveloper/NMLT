#include <iostream>

using namespace std;

int main(){
	int n,k=0; string a,b;
	cin>>n;
	
	cin>>a;
	for (int i=1; i<n; i++){
		cin>>b;
		if (a!=b) k++;
		a=b; 
	}
	k++;
	cout<<k;
	
	return 0;
}
