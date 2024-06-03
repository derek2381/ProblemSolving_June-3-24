// problem link
// https://leetcode.com/problems/append-characters-to-string-to-make-subsequence/description/


class Solution {
public:
    int appendCharacters(string s, string t) {
        int i = 0, j = 0;
        int n2 = s.length(), n1 = t.length();

        while(i < n1 && j < n2){
            if(t[i] == s[j]){
                i++;
            }
            j++;
        }
        cout << n1 << endl;

        if(i >= n1){
            return 0;
        }else{
            return n1-i;
        }

    }
};
