#include <iostream>
#include <vector>
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int left_index = 0;
        int right_index = nums.size()-1;
        if(right_index == left_index){
            if(nums[right_index]==val)
                return 0;
            else
                return 1;
        }


        while(right_index > left_index){
            while((right_index > left_index)&&(nums[left_index] != val))
                left_index++;
            while((right_index > left_index)&&(nums[right_index] == val))
                right_index--;

            if(right_index > left_index){
                nums[left_index]  = nums[right_index];
                nums[right_index] = val; 
            }else if(right_index == left_index){
                if( (nums[left_index] != val) && (left_index == nums.size()-1 ))
                    left_index++;
            }

        }
        return left_index;
    }
};

int main (){

    return 0;
}