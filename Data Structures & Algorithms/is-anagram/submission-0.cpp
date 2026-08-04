class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;
        unordered_map<char,int> smp;
        unordered_map<char,int> tmp;

        for(int i = 0; i < s.length(); i++)
        {
            smp[s[i]]++;
            tmp[t[i]]++;
        }

        return smp == tmp;


    }
};
