
#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

// Function to reverse the linked list
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev = NULL;
    struct ListNode* current = head;

    while (current != NULL) {
        struct ListNode* next = current->next;

        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}

// Function to display linked list
void printList(struct ListNode* head) {
    while (head != NULL) {
        printf("%d ", head->val);
        head = head->next;
    }
    printf("\n");
}

int main() {
    // Test Case 1: Normal case
    struct ListNode n3 = {3, NULL};
    struct ListNode n2 = {2, &n3};
    struct ListNode n1 = {1, &n2};

    struct ListNode* head = &n1;

    printf("Original List: ");
    printList(head);

    head = reverseList(head);

    printf("Reversed List: ");
    printList(head);

    // Test Case 2: Single node
    struct ListNode single = {10, NULL};

    printf("Single Node Original: ");
    printList(&single);

    struct ListNode* result = reverseList(&single);

    printf("Single Node Reversed: ");
    printList(result);

    return 0;
}
