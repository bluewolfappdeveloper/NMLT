#include <iostream>

using namespace std;

int main(){
	int n,k,l; bool a,b,c;
	
	cin>>n;
	
	k=0;
	for (int i=0; i<n; i++){
		cin>>a>>b>>c;
		l=0;
		if (a) l++;
		if (b) l++;
		if (c) l++;
		if (l>=2) k++;
	}
	cout<<k;
	
	return 0;
}
