#include <iostream>

using namespace std;

int main() {
	 short int n;
	 cin>>n;
	 int count=0,still=0,i,a,b;

	 for( i=0;i<n;i++){
		 cin>>a>>b;
		 still-=a;
		 still+=b;
		 count=max(count,still);
	 }
	 cout<<count<<endl;

	return 0;
}