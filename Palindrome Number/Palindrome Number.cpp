class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);//converting in string 
        int N = s.size();//size of string
        for(int i = 0; i < N; i++)
        {
            if(s[i] != s[N-1-i]) //checking if first and last element is same or not
              
            return false;
        }


