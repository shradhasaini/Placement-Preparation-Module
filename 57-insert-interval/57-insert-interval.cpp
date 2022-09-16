class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(), intervals.end(), [&](const vector<int>& v1, const vector<int>& v2) {
            if (v1[0] < v2[0]) return true;
            if (v1[0] == v2[0] && v1[1] < v2[1]) return true;
            return false;
        });
        
        vector<vector<int>> res;
        int n = intervals.size();
        for (int i = 0; i < n; i++) {
            int start = intervals[i][0], end = intervals[i][1];
            int j;
            for (j = i+1; j < n; j++) {
                if (intervals[j][0] <= end) end = max(end, intervals[j][1]);
                else break;
            }
            res.push_back({start, end});
            i += j - i - 1;
        }
        return res;
    }
};