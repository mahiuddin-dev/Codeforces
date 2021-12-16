#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n, m, answer,i;
    cin >> n >> m;
    double t, maxValu = 0;

    for (i = 1; i <= n; i++){
        cin >> t;
        if (ceil(t / m) >= maxValu){
            answer = i;
            maxValu = ceil(t / m);
        }
    }

    cout << answer << endl;
    return 0;
}