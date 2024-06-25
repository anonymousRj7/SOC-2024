#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {

        //Algo 1
        vector<int> freq(126,0);
        if(s.size()!=t.size()){
            return false;
        }
        // for (int i=0;i<s.size();i++){
        //     freq[s[i]]++;
        //     freq[t[i]]--;
        // }

        // for(int i=0;i<126;i++){
        //     if(freq[i]>0){
        //         return false;
        //     }
        // }
        // return true;

        //Algo 2
        unordered_map<char,int> s_count;
        unordered_map<char,int> t_count;

        for(int i=0;i<s.size();i++){
            s_count[s[i]]++;
            t_count[t[i]]++;
        }

        for(int i=0;i<s_count.size();i++){
            if(s_count[i]!=t_count[i])return false;
        }
        return true;

    }
};
