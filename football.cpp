// #include <iostream>
// #include <string>

// using namespace std;

// int main(){
//     string s;
//     cin >> s;

//     int contiguous = 1;
//     for (size_t i = 1; i < s.length(); ++i){
//         if (s[i] == s[i - 1]){
//             contiguous += 1;
//             if (contiguous == 7){
//                 cout << "YES" << endl;
//                 return 0;
//             }
//         }
//         else{
//             contiguous = 1;
//         }
//     }

//     cout << "NO" << endl;
//     return 0;
// }




// #include<iostream>

// using namespace std;

// int main(){
//     string s1;
//     cin>>s1;
//     int condition = 1,i;
//     for( i=1; i<=s1.length(); i++){
//         if(s1[i] == s1[i-1]){
//             condition++;
//             if(condition==7){
//                 cout<<"YES"<<endl;
//                 return 0;
//             }
//         }else{
//             condition=1;
//         }
        
//     }
//     cout<<"NO"<<endl;
//     return 0;
// }



// #include <bits/stdc++.h>

// using namespace std;

// int main(){
//     int i,c=1;
//     char f[100];
//     gets(f);
//     for(i=0;i<strlen(f);i++){
//     if(f[i] == f[i+1]){
//     c++;
//     if(c==7){
//     printf("YES");
//     return 0;
//     }
//     }
//     else{c=1;}
//     }
//     printf("NO\n");
//     return 0;
// }


#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,mx=0;
    string s;
    cin>>n;
    map<string,int>mp;
    map<string,int>::iterator it;
    for(i=0;i<n;i++)
    {
        cin>>s;
        mp[s]++;
    }
    for(it=mp.begin();it!=mp.end();it++){
        if(it->second>mx){
            mx=it->second;
            s=it->first;
        }
    }
    cout<<s<<endl;


    return 0;
}