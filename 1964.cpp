class Solution {
public:
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& obstacles) {
        vector<int>lis;//longest increasing subsequence
        for(int i=0;i<obstacles.size();i++){
            int t=obstacles[i];
            if(lis.empty() || lis[lis.size()-1]<=t){
                lis.push_back(t);
                obstacles[i]=lis.size();
            }else{
                int indx=upper_bound(lis.begin(),lis.end(),t)-lis.begin();
                //The upper_bound() function returns an iterator pointing to the first element in the range [lis.begin(), lis.end()) that is greater than x. If no such element is found, it returns the iterator lis.end()
                //Subtracting the iterator pointing to the beginning of lis from the resulting iterator gives the index of the upper bound
                lis[indx]=t;
                //Updating/forming longest increasing subsequence
                obstacles[i]=indx+1;
            }
        }
        return obstacles;
    }
};
