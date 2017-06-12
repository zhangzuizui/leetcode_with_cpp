/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    vector<Interval> insert(vector<Interval>& intervals, Interval newInterval) {
        //if (intervals.empty()) return vector<Interval> {intervals};
        sort(intervals.begin(), intervals.end(), [](Interval a, Interval b){return a.start < b.start;});
        vector<Interval> ans;
        int start = newInterval.start, end = newInterval.end, flag = 0;
        for (int i = 0; i < intervals.size(); ++i){
            if (intervals[i].end < start){
                ans.push_back(intervals[i]);
            }
            else {
                start = min(intervals[i].start, start);
                for (int j = i; j < intervals.size(); ++j){
                    if (intervals[j].start > end){
                        if (!flag){
                            ans.push_back(Interval(start, end));
                            flag = 1;
                        }
                        ans.push_back(intervals[j]);
                    } 
                    else {
                        end = max(intervals[j].end, end);
                    }
                }
                break;
            }
        }
        if (!flag){
            ans.push_back(Interval(start, end));
        }
        return ans;
    }
};