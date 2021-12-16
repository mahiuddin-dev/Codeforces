#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	string s,t;
	cin>>s>>t;
	reverse(t.begin(),t.begin()+t.size());
    (s==t) ? cout<<"YES": cout<<"NO";
	return 0;
}