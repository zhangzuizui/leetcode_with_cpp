class RandomizedSet {
public:
    /** Initialize your data structure here. */
    RandomizedSet() { srand(time(NULL)); }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if (mymap.find(val) != mymap.end()) return false;
        myvector.push_back(val);
        mymap[val] = myvector.size() - 1;
        return true;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if (mymap.find(val) == mymap.end()) return false;
        int last = myvector.size()-1;
        mymap[myvector.back()] = mymap[val];
        swap(myvector[last], myvector[mymap[val]]);
        myvector.pop_back();
        mymap.erase(val);
        return true;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        int rd = rand() % myvector.size();
        return myvector[rd];
    }

private:
    unordered_map<int, int> mymap;
    vector<int> myvector;
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet obj = new RandomizedSet();
 * bool param_1 = obj.insert(val);
 * bool param_2 = obj.remove(val);
 * int param_3 = obj.getRandom();
 */