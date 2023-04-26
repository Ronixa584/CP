class Solution {
public:
    string mergeAlternately(string word1, string word2) {
         string st;
         int i=0;
         while(i<word1.size() || i<word2.size()) {
            if(i<word1.size()) st=st+word1[i]; 
            if(i<word2.size()) st=st+word2[i];
            i++;
        }
        return st;
    }
};
