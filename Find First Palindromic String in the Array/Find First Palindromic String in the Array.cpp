class Solution {
public:

    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++)//traversal
        {    string s;
            string str=words[i];
       
           for(int i=str.size()-1;i>=0;i--)//ulta traversal
           {
              
               s.push_back(str[i]);//pushing in  the s string
           }
           if(s==str)//comparing the string
           {
               return str;
           }
        }
        return "";
    }
};