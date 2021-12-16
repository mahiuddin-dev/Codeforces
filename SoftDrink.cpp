#include <iostream>

using namespace std;

int main(){
    int a, b, c, d, e, f, nl, n2;

    cin >> a >> b >> c >> d >> e >> f >> nl >> n2;
    cout << min(min(b * c / nl, d * e), f / n2) / a << endl;
    return 0;
}