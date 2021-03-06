/**
 * Questioin:
 * Given a sorted linked list, delete all duplicates such that each element appear only once.
 * For example,
 * Given 1->1->2, return 1->2.
 * Given 1->1->2->3->3, return 1->2->3.
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
 /**Submitted Solution(by JochenZou)
  *May 12th, 2016
 */
class Solution{
public:
    ListNode* deleteDuplicates(ListNode* head) {
	    if(!head) return head;
        ListNode *cur;
        cur = head;
        
        while(cur->next){
            if (cur->val == cur->next->val){
                cur->next = cur->next->next;
            }
            else{
                cur= cur->next;
            }
            
        }
        return head;
    }    
};
