/**
 * 总之是两种思路把，首先回想一下不放没有duplicates的题
 * 因为vector和map中的值，是11对应的关系，所以map中存放的value
 * 和vector的的小标以及他们对应的val值总是一致的。
 * 但是加入duplicates之后，这个系统就不能直接使用了，
 * 因为就算是给map的value值设为vector，在经过删除添加之后
 * map中某个val的vector的最后一个值，对应的并不是
 * vector中，最后一个这个val的下标。导致取数发生错误。
 * 这个问题可以用两个方法解决，1是vector里不单纯的存放int
 * 而是存放一个pair，用pair.second来指向vector中的“这一个”
 * val所对应的在map[val]中的位置，2是
 * 开一个unordered_map<int, unordered_set<int>>其实就是因为
 * 之前提到了放在map[val]中的最后一个val不总是真的最后一个val，
 * 而set自带了对元素进行排序。
 */
class RandomizedCollection {
public:
    /** Initialize your data structure here. */
    RandomizedCollection() {
        
    }
    
    /** Inserts a value to the collection. Returns true if the collection did not already contain the specified element. */
    bool insert(int val) {
        auto result = mymap.find(val) == mymap.end();
        mymap[val].push_back(pv.size());
        pv.push_back(pair<int, int> (val, mymap[val].size()-1));
        return result;
    }
    
    /** Removes a value from the collection. Returns true if the collection contained the specified element. */
    bool remove(int val) {
        if (mymap.find(val) == mymap.end()) return false;
        auto last = pv.back();
        mymap[last.first][last.second] = mymap[val].back();
        pv[mymap[val].back()].first = last.first;
        pv.pop_back();
        mymap[val].pop_back();
        if (!mymap[val].size()) mymap.erase(val);
        return true;
    }
    
    /** Get a random element from the collection. */
    int getRandom() {
        int rd = rand() % pv.size();
        return pv[rd].first;
    }
    
private:
    map<int, vector<int>> mymap;
    vector<pair<int, int>> pv;
};

/**
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection obj = new RandomizedCollection();
 * bool param_1 = obj.insert(val);
 * bool param_2 = obj.remove(val);
 * int param_3 = obj.getRandom();
 */