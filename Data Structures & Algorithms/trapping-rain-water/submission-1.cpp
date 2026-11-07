class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> pre(n),suf(n);
        int maxi=height[0];
        for(int i=0;i<n;i++){
            maxi=max(maxi,height[i]);
            pre[i]=maxi;
        }
        maxi=height[n-1];
        for(int i=n-1;i>=0;i--){
            maxi=max(maxi,height[i]);
            suf[i]=maxi;
        }
        int wat=0;
        for(int i=0;i<n;i++){
            if(height[i]<pre[i] && height[i]<suf[i]){
                wat+=min(pre[i],suf[i])-height[i];
            }
        }
        return wat;
    }
};
