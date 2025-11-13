// solution.cpp
// 0001. Two Sum
// Language: C++17
#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(const vector<int>& nums, int target) {
    unordered_map<int,int> seen;
    for (int i = 0; i < (int)nums.size(); ++i) {
        int need = target - nums[i];
        auto it = seen.find(need);
        if (it != seen.end()) return { it->second, i };
        seen[nums[i]] = i;
    }
    return {};
}

int main() {
    // quick manual test
    vector<int> nums = {2,7,11,15};
    int target = 9;
    auto res = twoSum(nums, target);
    if (res.size()) {
        cout << res[0] << " " << res[1] << "\n"; // expect "0 1"
    } else {
        cout << "No solution\n";
    }
    return 0;
}
