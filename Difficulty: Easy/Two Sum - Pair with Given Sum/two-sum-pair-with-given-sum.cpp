class Solution {
public:
    bool twoSum(vector<int>& arr, int target) {
        unordered_set<int> seen;

        for (int x : arr) {
            if (seen.count(target - x)) {
                return true;
            }
            seen.insert(x);
        }
        return false;
    }
};
