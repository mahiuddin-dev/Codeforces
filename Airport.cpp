#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    short int n, m;
    cin >> n >> m;
    short int are[n],i;

    for ( i = 0; i < m; ++i) cin >> are[i];
    

    sort(are, are + m);
    
    int minimum(0), num(are[0]), k(0);

    for ( i = 0; i < n; ++i){
        minimum += num;
        num -= 1;
        if (num == 0) num = are[++k];
        
    }

    sort(are, are + m, greater<int>());
    int maximum(0);

    while (n--){
        maximum += are[0];
        are[0] -= 1;
        for (i = 1; i < m; ++i){
            if (are[i] <= are[i-1]) break;
            swap(are[i], are[i-1]);
        }
    }

    cout << maximum << " " << minimum << endl;
    return 0;
}