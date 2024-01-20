#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        int needle_size = needle.size();
        int needle_count = 0;
        for(std::string::size_type i = 0; i <= (haystack.size()-needle.size()); i++){
        //for(size_t i = 0; i <= (haystack.size()-needle.size()); i++){  
            for(std::string::size_type j = 0; j < needle.size(); j++){
                if(haystack.at(i+j) == needle.at(j))
                    needle_count++;
            }
            if(needle_size == needle_count)
                return i;
            needle_count = 0;
        }
        return -1;
    }
};

int main (){
    Solution solution;
    cout << solution.strStr("hello","ll") << endl;
    cout << solution.strStr("aaa","aaaa") << endl;
    return 0;
}