/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* curr  = head; //stores head address
    struct ListNode* prev = NULL; //takes care of already reversed nodes
    struct ListNode* next = NULL; //takes care of not reversed nodes
    
    while(curr!= NULL){
        next = curr-> next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
