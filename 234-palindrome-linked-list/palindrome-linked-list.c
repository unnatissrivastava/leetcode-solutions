/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    struct ListNode *slow = head, *fast = head;
    struct ListNode *prev = NULL, *next;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    while (slow) {
        next = slow->next;
        slow->next = prev;
        prev = slow;
        slow = next;
    }

    while (prev) {
        if (head->val != prev->val)
            return false;

        head = head->next;
        prev = prev->next;
    }

    return true;
}