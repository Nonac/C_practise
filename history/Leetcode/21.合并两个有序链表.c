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

/*
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){

    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* t = head;
    if(!l1 && l2) return l2;
    if(l1 && !l2) return l1;
    if(!l1 && !l2) return NULL;
    while(l1 && l2) {
        if(l1->val > l2->val) {
            t->next = l2;
            l2 = l2->next;
        }
        else {
            t->next = l1;
            l1 = l1->next;
        }
        t = t->next;
    }
    t->next = (l1 ? l1 : l2);
    t = head->next;
    free(head);
    return t;
}
 */