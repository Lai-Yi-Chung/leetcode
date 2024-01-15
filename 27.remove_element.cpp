#include <iostream>
#include <vector>
class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        int index = nums.size();
        for(int i = 0; i < index ; i++){
            if(i == index){
                if(nums[i] == val) 
                    return nums.size() - index;
                else
                    return nums.size() - index - 1;
            }
            if(nums[i] == val){               
                for(int j = index - 1; j > i; j--){
                    if(nums[j] != val){
                        nums[i] = nums[j];
                        index = j; 
                        break;                       
                    }
                }
                index = i;
            }
        }
    }
};

int main (){

    return 0;
}