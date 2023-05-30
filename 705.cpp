class MyHashSet {
public:
    vector<int>v;
    MyHashSet() {
        v.resize(1e6+1,0);
    }
    
    void add(int key) {
        v[key]=1;
    }
    
    void remove(int key) {
        v[key]=0;
    }
    
    bool contains(int key) {
        return v[key];
    }
};
//So, the values stored in the HashSet are 0 to represent the absence of a key and 1 to represent the presence of a key.
//In programming, indices usually start from 0. So, if we want to store 1 million elements, we need indices from 0 to 999,999. That's why we add an extra element by using 1e6+1 instead of 1e6.

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
