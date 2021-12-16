#include <iostream>
using namespace std;

int main(){
    short int n,i=0;
    cin >> n;
    short int are[n];
    
    for ( i = 0; i < 7; i++) cin >> are[i];

    int t = are[0];

    while (t < n){
        i++;
        i %= 7;
        t += are[i];
    }

    cout << i + 1 << endl;
    return 0;
}