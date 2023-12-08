#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int number;
    struct Node* next;
} Node;

Node* createCircularLinkedList(int n) {
    Node* head = NULL;
    Node* prev = NULL;
    
    for (int i = 1; i <= n; i++) {
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->number = i;
        
        if (head == NULL) {
            head = newNode;
        } else {
            prev->next = newNode;
        }
        
        prev = newNode;
    }
    
    prev->next = head;
    
    return head;
}

Node* removeNode(Node* node) {
    Node* nextNode = node->next;
    node->next = nextNode->next;
    free(nextNode);
    return node->next;
}

int solveJosephusProblem(int n) {
    Node* head = createCircularLinkedList(n);
    Node* current = head;
    
    while (current->next != current) {
        for (int i = 1; i < 3; i++) {
            current = current->next;
        }
        
        current = removeNode(current);
    }
    
    int lastNumber = current->number;
    free(current);
    
    return lastNumber;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int lastNumber = solveJosephusProblem(n);
    printf("%d\n", lastNumber);
    
    return 0;
}
