#include <iostream>
#include <vector>
using namespace std;

int pivotIndex(vector<int>& nums) {
    int totalSum = 0, leftSum = 0;

    // Calculate total sum of the array
    for (int num : nums)
        totalSum += num;

    // Traverse array and find pivot index
    for (int i = 0; i < nums.size(); i++) {
        int rightSum = totalSum - leftSum - nums[i];
        if (leftSum == rightSum)
            return i;  // Pivot index found
        leftSum += nums[i];
    }

    return -1;  // If no pivot index found
}

int main() {
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    int index = pivotIndex(nums);

    if (index != -1)
        cout << "Pivot Index = " << index << endl;
    else
        cout << "No pivot index found." << endl;

    return 0;
}
