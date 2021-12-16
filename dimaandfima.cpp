#include <iostream>

using namespace std;

int main(){
   short int n,f, total=0, answer=0,i;
    cin >> n;

    for (i = 0; i < n; ++i){
        cin >> f;
        total += f;
    }

    for (i = 1; i <= 5; ++i){
        if ((total + i) % (n + 1) != 1){
            answer++;
        }
    }
    cout << answer << endl;
    return 0;
}