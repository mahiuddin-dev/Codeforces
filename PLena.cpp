#include <iostream>

using namespace std;

int main(){
    short int n,i,j,top;
    cin >> n;

    for (j = -n; j <= n; ++j){
        top = n - abs(j);

        for (i = 0; i < abs(j); ++i) cout << "  ";
        for (i = 0; i < top; ++i) cout << i << " ";       
        for (i = top; i > 0; --i) cout << i << " ";
        
        cout << 0 << endl;
    }
    return 0;
}