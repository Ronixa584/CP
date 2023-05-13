class Solution {
public:
    int maxVowels(string s, int k) {
        int i=0,j=0,c=0,mx=0;
        //i as start index
        //j as end index
        while(j<s.size()){
            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'){
                c++;
            }

            if(j-i==k){//if window size is equal to k
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                c--;
            }//if start index is vowel then decrement count of vowel
                i++;//slide the window by incrementing start index
            }

            mx=max(mx,c);
            j++;
        }
        return mx;
    }
};
