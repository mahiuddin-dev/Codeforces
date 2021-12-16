#include <iostream>

using namespace std;

int main() {
    string a, hello = "hello";
    cin >> a;
    int j = 0, count = 0,i,size = a.size();

    for ( i = 0; i < size; i++) {
        if (a[i] == hello[j]) {
            j++;
            count++;
            
            if (count == 5) {
                break;
            }
        }
    }

     (count == 5) ? cout << "YES" << endl: cout << "NO" <<endl;
    
    return 0;
}