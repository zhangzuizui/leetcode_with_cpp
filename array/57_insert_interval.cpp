/**
 * 也是一个很简单的hard题
 */
 
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
        
        if (intervals.empty()) return vector<Interval> {newInterval};
        sort(intervals.begin(), intervals.end(), [](Interval a, Interval b){return a.start < b.start;});
        
        int start = newInterval.start, end = newInterval.end, erase_r = 0, erase_l = 0, flag = 0;
        for (int i = 0; i < intervals.size(); ++i){
            
            if (intervals[i].end < start) continue;
            else {
                erase_l = i;
                start = min(intervals[i].start, start);
                for (int j = i; j < intervals.size(); ++j){
                    if (intervals[j].start > end){
                        if (flag = 1) erase_r = j;
                    } 
                    else {
                        end = max(intervals[j].end, end);
                        if (flag) break;
                    }
                }
                break;
            }
        }
        
        if (!flag)
            intervals.erase(intervals.begin() + erase_l, intervals.begin() + erase_r);
        intervals.insert(intervals.begin() + erase_l, Interval(start, end));
        
        return intervals;
    }
};