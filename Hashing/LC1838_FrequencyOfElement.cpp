#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        // Sort the array first, just like in Python
        sort(nums.begin(), nums.end());
        
        int l = 0, r = 0;
        int res = 0;
        long long total = 0; // Use long long to prevent integer overflow
        
        while (r < nums.size()) {
            total += nums[r];
            
            // Cast to long long before multiplication to avoid overflow
            while ((long long)nums[r] * (r - l + 1) > total + k) {
                total -= nums[l];
                l++;
            }
            
            res = max(res, r - l + 1);
            r++;
        }
        
        return res;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 4};
    int k = 5;
    int result = sol.maxFrequency(nums, k);
    cout << "Maximum frequency: " << result << endl; // Output should be 3
    return 0;
}