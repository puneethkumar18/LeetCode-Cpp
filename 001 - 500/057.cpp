class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals,
                               vector<int>& newInterval) {
        // If the intervals vector is empty, return a vector containing the
        // newInterval
        if (intervals.empty()) {
            return {newInterval};
        }

        int n = intervals.size();
        int target = newInterval[0];
        int left = 0, right = n - 1;

        // Binary search to find the position to insert newInterval
        while (left <= right) {
            int mid = (left + right) / 2;
            if (intervals[mid][0] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        // Insert newInterval at the found position
        intervals.insert(intervals.begin() + left, newInterval);

        // Merge overlapping intervals
        vector<vector<int>> res;
        for (const auto& interval : intervals) {
            // If res is empty or there is no overlap, add the interval to the
            // result
            if (res.empty() || res.back()[1] < interval[0]) {
                res.push_back(interval);
                // If there is an overlap, merge the intervals by updating the
                // end of the last interval in res
            } else {
                res.back()[1] = max(res.back()[1], interval[1]);
            }
        }

        return res;
    }
};
