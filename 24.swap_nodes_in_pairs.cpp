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
    ListNode* swapPairs(ListNode* head) {
        ListNode* first_head = nullptr;
        
        //ListNode* last_last_node = head;
        ListNode* last_last_node = nullptr;

        ListNode* last_node = head;
        ListNode* current = head;
        int swap_count = 0;
        while(current){
            swap_count++;
            if(swap_count == 1){
                last_node = current;
                current = current->next;
            }else if(swap_count == 2){
                swap_count = 0;               
                last_node->next = current->next;
                current->next = last_node;
                //current->next->next = last_node;
                //current->next = current;
                //current->next->next = current;
                //temp->next = current;

                // if(last_last_node==head){
                //     last_last_node->next = last_node;
                //     first_head = current;
                // }else{
                //     last_last_node->next = current;
                // }

                if(last_last_node==nullptr){                  
                    //first_head = current;
                    head = current;
                }else{
                    last_last_node->next = current;
                }

                //last_last_node->next = current;
                //last_last_node = last_node;

                // if(last_last_node != nullptr)
                //     last_last_node->next = current;
                last_last_node = last_node;
                current = last_node->next;
            }
            
        }    
        return head;
        //return first_head;
    }
};