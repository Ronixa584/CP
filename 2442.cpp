class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int s=nums.size(),c=0;
        vector<int>v(s*2);
        int r=0,sum=0;
        for(auto i=0;i<s;i++){
            v[i]=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            while(nums[i]>0){
                r=nums[i]%10;
                sum=(sum*10)+r;
                nums[i]/=10;
            }
            v.push_back(sum);
            sum=0;
        }
        sort(begin(v),end(v));
        for(int j=0;j<v.size()-1;j++){
            if(v[j]!=v[j+1]) c++;
        }
        return c;
    }
};
