// problem link
// https://codeforces.com/contest/1980/problem/A

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        string str;
        cin >> str;
        map<char, int> mp;

        for(char i : str){
            mp[i]++;
        }
        int count = 0;
        string res = "ABCDEFG";

        for(auto i : res){
            if(mp.find(i) != mp.end() && mp[i] < b){
                count += b - mp[i];
            }else if(mp.find(i) == mp.end()){
                count += b;
            }
        }

        cout << count << endl;


    }
}
