#include <iostream>

using namespace std;

int main(){
    int n, a,i;

    cin >> n;
    
    int are[n];

    for (i = 1; i <= n; ++i){
        cin >> a;
        are[a] = i;
    }

    int m, b;
    cin >> m;

    long long Vasya(0), Petya(0);
    while (m--){
        cin >> b;
        Vasya += are[b];
        Petya += (n + 1 - are[b]);
    }
    // printf("%I64d %I64d\n", Vasya, Petya);
    cout<< Vasya << " " << Petya << endl;
    return 0;
}