class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int maxArea = 0;
        int currArea = 0;
        for(int i=1;i < points.size(); i++ ){
            currArea = points[i][0] - points[i-1][0];
            maxArea = max(maxArea, currArea);
        }
        return maxArea;
    }
};