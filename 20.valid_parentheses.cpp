class Solution {
public:
    bool isValid(string s) {
        for(size_t i = 0; i < s.size(); i=i+2){
            if(s.at(i)=='('){
                if(s.at(i+1)!=')')
                    return false;
            }
            if(s.at(i)=='{'){
                if(s.at(i+1)!='}')
                    return false;
            }
            if(s.at(i)=='['){
                if(s.at(i+1)!=']')
                    return false;
            }
        }
        return true;
    }
};