#include <iostream>
#include <vector>
class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        int left_index = 0;
        int right_index = 0;
        for(int i = 0; i < nums.size()- left_index ; i++){
            if(nums[i] == val){               
                for(int j = nums.size()-1-right_index; j > i; j--){
                    if(nums[j] != val){
                        nums[i] = nums[j];
                        right_index++;
                    }
                }
                left_index = i;
            }
        }
        return k;
    }
};

int main (){

    return 0;
}