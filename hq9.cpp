#include<bits/stdc++.h>
using namespace std;

// int main() {
// 	string str;
// 	cin>>str;
// 	int flag=0;
// 	for(int i=0;i<str.size();i++){
// 	    if(str[i]>=33&&str[i]<=126){
// 	    if(str[i]=='H'||str[i]=='Q'||str[i]=='9')
// 	    flag=1;
// 	}
// 	}
// 	if(flag){
// 	    cout<<"YES";
// 	}else{
// 	    cout<<"NO";
// 	}
// 	return 0;
// }

int main(){
    char s[100];
    int i,size;
    cin >> s;
    size=strlen(s);
    for(i=0;i<size;i++){
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){
            cout<< "YES" <<endl;
            return 0;
        }
    }
    cout<< "NO" <<endl;
    return 0;
}