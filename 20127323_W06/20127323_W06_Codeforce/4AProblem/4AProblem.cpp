#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
	int w;
	
	cin>>w;
	
	for (int i=1; i<=w/2; i++){
		if (i%2==0){
			if ((w-i)%2==0) {
			cout<<"YES";
				return 0;
			}
			
		}
	}
	cout<<"NO";
	return 0;
}
