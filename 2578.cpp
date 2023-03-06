class Solution {
public:
    int splitNum(int num) {
        string s=to_string(num);
        string n1="",n2="";
        sort(s.begin(),s.end());
        for(int i=0;i<s.size();i++){
            if(i%2==0) n1=n1+s[i];
            else n2=n2+s[i];
        }
        int no1=stoi(n1);
        int no2=stoi(n2);
        return no1+no2;
    }
};
