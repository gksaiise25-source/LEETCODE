/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *h1, ListNode *h2) {
        ListNode *temp1 = h1;
        ListNode *temp2 = h2;
        while(temp1 != NULL  ){
            temp2 = h2;
           while(temp2 != NULL){
            if(temp1 == temp2){
                 return temp1;
            }
            temp2 = temp2->next;
           }
           temp1 = temp1->next;
        }
        return NULL;
    }
};