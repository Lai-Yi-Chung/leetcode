#include <iostream>
#include <vector>
class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {

        int k = 0;
        for(int i = 0; i < nums.size()-k ; i++){
            if(nums[i] == val){               
                for(int j = nums.size()-1-k; j > i; j--){
                    if(nums[j] != val){
                        nums[i] = nums[j];
                    }
                }
                k++;
            }
        }
    }
};

int main (){

    return 0;
}