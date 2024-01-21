class Solution {
public:
    bool isValid(string s) {
        //vector<string> buffer;
        vector<char> buffer;

        for(size_t i = 0; i < s.size(); i++){
            // if(s.at(i)=='('){
            //     if(s.at(i+1)!=')')
            //         return false;
            // }
            // if(s.at(i)=='{'){
            //     if(s.at(i+1)!='}')
            //         return false;
            // }
            // if(s.at(i)=='['){
            //     if(s.at(i+1)!=']')
            //         return false;
            // }


            

            if( (s.at(i)=='(') || (s.at(i)=='{') || (s.at(i)=='[')){
                buffer.push_back(s.at(i));
            }
            //if( !buffer.empty() && (s.at(i)=='(') || (s.at(i)=='{') || (s.at(i)=='[')){
            //if(  (s.at(i)=='(') || (s.at(i)=='{') || (s.at(i)=='[')){
            //if( !buffer.empty() && (s.at(i)==')') || (s.at(i)=='}') || (s.at(i)==']')){
            if( (s.at(i)==')') || (s.at(i)=='}') || (s.at(i)==']')){

              

                // if( buffer.pop_back() != s.at(i)){
                //     return false;
                // }

                // char temp = s.at(i);
                // if( buffer.pop_back() != s.at(i)){
                //     return false;
                // }

                char temp = s.at(i);
                // if( buffer.back() != s.at(i)){
                //     return false;
                // }else{
                //     buffer.pop_back();
                // }

                if(!buffer.empty()){
                    //return false;
                    
                // if( buffer.back()=='('){
                //     if( ')' = s.at(i)){
                //         return false;
                //     }else{
                //         buffer.pop_back();
                //     }
                // }
                // if( buffer.back()=='['){
                //     if( ']' != s.at(i)){
                //         return false;
                //     }else{
                //         buffer.pop_back();
                //     }
                // }
                // if( buffer.back()=='{'){
                //     if( '}' != s.at(i)){
                //         return false;
                //     }else{
                //         buffer.pop_back();
                //     }
                // }
                if( buffer.back()=='('){
                    if( ')' == s.at(i)){
                        buffer.pop_back();
                    }else{                    
                        return false;
                    }
                }
                else if( buffer.back()=='['){
                    if( ']' == s.at(i)){
                        buffer.pop_back();
                    }else{
                        
                        return false;
                    }
                }
                else if( buffer.back()=='{'){
                    if( '}' == s.at(i)){
                        buffer.pop_back();
                    }else{
                        
                        return false;
                    }
                }
                }else{
                    return false;
                }
            }
        }

        //return true;
        if(buffer.empty())
            return true;
        else
            return false;
    }
};