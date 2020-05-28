#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> map;
    for (int i = 0; i < nums.size(); i++) {
        auto it = map.find(target - nums[i]);
        if (it != map.end()) {
            {
                cout<<i<<" ";
                cout<<it->second;
                return {i, it->second};
            }
        } else {
            map[nums[i]] = i;
        }
    }
    return {};
}


int main(){
    vector<int> nums(100);
    int target=4;
    int sz;
    cout<<"Please enter the size of the number vector: ";
    cin>>sz;
    cout<<"Please enter the number vector: ";
    for (int i=0;i<sz;i++) {cin>>nums[i];}
    cout<<"Please enter the target: ";
    cin>>target;
    twoSum(nums,target);
}
