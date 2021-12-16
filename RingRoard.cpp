#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int loc(1),pos;
    long long int ans = 0;

    while(m--){
        cin >> pos;

        if(pos >= loc) ans += pos - loc;
        else ans += n - (loc - pos);
        loc = pos;
    }

    cout << ans << endl;

    return 0;
}