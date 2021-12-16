#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string a,b,c,d;
    cin >> a >> b >> c;

    d = a+b;
    sort(d.begin(),d.end());
    sort(c.begin(),c.end());

    d == c ? cout << "YES" << endl: cout << "NO" << endl;

    return 0;
}