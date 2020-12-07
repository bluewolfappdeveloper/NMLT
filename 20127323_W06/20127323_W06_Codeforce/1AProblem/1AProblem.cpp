#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
	unsigned long long n,m,a;
	
	cin>>n>>m>>a;

	cout<<fixed<<setprecision(0)<<ceil(n*1.0/a)*ceil(m*1.0/a)<<endl;
	return 0;
}
