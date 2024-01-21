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
            else{


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

                if( buffer.back()=='('){
                    if( ')' != s.at(i)){
                        return false;
                    }else{
                        buffer.pop_back();
                    }
                }
                if( buffer.back()=='['){
                    if( ']' != s.at(i)){
                        return false;
                    }else{
                        buffer.pop_back();
                    }
                }
                if( buffer.back()=='{'){
                    if( '}' != s.at(i)){
                        return false;
                    }else{
                        buffer.pop_back();
                    }
                }
            }
        }
        return true;
    }
};

/*
Runtime Error
=================================================================
==21==ERROR: AddressSanitizer: heap-buffer-overflow on address 0x50200000000f at pc 0x5618572d6c8f bp 0x7ffe54761370 sp 0x7ffe54761368
READ of size 1 at 0x50200000000f thread T0
    #3 0x7f6f28c3bd8f  (/lib/x86_64-linux-gnu/libc.so.6+0x29d8f) (BuildId: c289da5071a3399de893d2af81d6a30c62646e1e)
    #4 0x7f6f28c3be3f  (/lib/x86_64-linux-gnu/libc.so.6+0x29e3f) (BuildId: c289da5071a3399de893d2af81d6a30c62646e1e)
0x50200000000f is located 1 bytes before 1-byte region [0x502000000010,0x502000000011)
allocated by thread T0 here:
    #5 0x7f6f28c3bd8f  (/lib/x86_64-linux-gnu/libc.so.6+0x29d8f) (BuildId: c289da5071a3399de893d2af81d6a30c62646e1e)
Shadow bytes around the buggy address:
  0x501ffffffd80: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x501ffffffe00: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x501ffffffe80: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x501fffffff00: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  0x501fffffff80: 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
=>0x502000000000: fa[fa]01 fa fa fa fa fa fa fa fa fa fa fa fa fa
  0x502000000080: fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa
  0x502000000100: fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa
  0x502000000180: fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa
  0x502000000200: fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa
  0x502000000280: fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa fa
Shadow byte legend (one shadow byte represents 8 application bytes):
  Addressable:           00
  Partially addressable: 01 02 03 04 05 06 07 
  Heap left redzone:       fa
  Freed heap region:       fd
  Stack left redzone:      f1
  Stack mid redzone:       f2
  Stack right redzone:     f3
  Stack after return:      f5
  Stack use after scope:   f8
  Global redzone:          f9
  Global init order:       f6
  Poisoned by user:        f7
  Container overflow:      fc
  Array cookie:            ac
  Intra object redzone:    bb
  ASan internal:           fe
  Left alloca redzone:     ca
  Right alloca redzone:    cb
==21==ABORTING
*/
