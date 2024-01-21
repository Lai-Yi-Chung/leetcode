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
        ListNode* temp = nullptr;
        ListNode* last_last_node = nullptr;
        ListNode* last_node = nullptr;
        ListNode* current = head;
        int swap_count = 0;
        while(current->next){
            swap_count++;
            if(swap_count == 1){
                last_last_node = current;
                last_node = current->next;
            }else if(swap_count == 2){
                swap_count = 0;
                temp = current->next;
                last_last_node->next = current->next;
                last_node->next = current->next->next;
                //current->next->next = last_node;
                //current->next = current;
                //current->next->next = current;
                temp->next = current;
            }
            current = current->next;
        }    
        return head;
    }
};