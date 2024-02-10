class Solution {
public:
    int lengthOfLongestSubstring(string s) {

            unordered_set<char> t;
            int m=0,l=0,r=0;
            while (r<s.size()){
                while(t.find(s[r])!=t.end())
                {
                    t.erase(s[l]);
                    l++;
                }
                t.insert(s[r]);
                m=max(m,r-l+1);
                r++;


            }  
            return m;

    }
};