//
// Created by Nick Yang on 2019-06-24.
//

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode *p1= (struct ListNode *)malloc(sizeof(struct ListNode));
    if(!head ||head->next == NULL) return head;
    p1 = head;
    while(p1)
    {
        if(p1->next == NULL) break;
        if (p1->val == p1 -> next -> val)
        {
            p1 -> next = p1 -> next -> next;
        }
        else
        {
            p1 = p1 -> next;
        }
    }
    return head;
}