// Time Complexity: O(n)
// Space Complexity: O(1)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    int numNodes = 0;
    struct ListNode* curr = head;
    while (curr != NULL)
    {
        numNodes++;
        curr = curr->next;
    }
    
    int middleNum = numNodes / 2;
    struct ListNode* middle = head;
    for (int i = 0; i < middleNum; i++)
        middle = middle->next;
    return middle;
}
