class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0;
        int n=heights.size();
        int r=n-1;
        int maxA=0;
        while(l<r){
            maxA=max(maxA,min(heights[l],heights[r])*(r-l));
            if(heights[l]<=heights[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return maxA;
    }
};
