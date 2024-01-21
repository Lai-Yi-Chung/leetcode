#include <iostream>
#include <vector>
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int list_size = 0;
        ListNode *current = head;
        while(current->next){
            list_size++;
            current = current->next;
        }    

        current = head;  
        if(list_size >= n){
            for(int i = 0; i < list_size-n ; i++){
                current = current->next;
            }
        }   


        //return current = current->next->next;
        
        // ListNode *temp;
        // temp = current->next;
        // current = temp->next;
        // return current;
        // return current = temp->next;

        // if(current->next->next == nullptr){
        //     head->next = nullptr;
        // }else{
        //     current = current->next->next;
        // }
        // return head;

        // if(current->next->next != nullptr){
        //     current = current->next->next;
        // }else{
        //     head->next = nullptr;
        // }
        // return head;

        // ListNode *temp;
        // if(current->next)temp = current->next;
        // if(temp->next)current = temp->next;
        // return current;

        // if(list_size == n)
        //     return head = nullptr;
        // current->next = current->next->next;
        // return head;

        // if(list_size == n)
        //     return head->next = nullptr;
        // else if (list_size == (n-1)){
        //     current->next = nullptr;
        //     return head;
        // }else{
        //     current->next = current->next->next;
        //     return head;
        // }   

        // if(list_size==0)
        //     return head->next = nullptr;
        // else if (list_size == 1){
        //     current->next = nullptr;
        //     return head;
        // }else{
        //     current->next = current->next->next;
        //     return head;
        // }   

        // if(list_size==0)
        //     return head->next = nullptr;
        // else if (list_size == 1){
        //     current->next = nullptr;
        //     return head;
        // }else if(list_size == n-1){
        //     return head = head->next;
        // }else{
        //     current->next = current->next->next;
        //     return head;
        // } 

        if(list_size==0)
            return head->next = nullptr;
        else if (list_size == 1){
            current->next = nullptr;
            return head;
        }else if(list_size == n-1){
            return head = head->next;
        }
        else{
            current->next = current->next->next;
            return head;
        }   
    }
};

int main (){

    return 0;
}