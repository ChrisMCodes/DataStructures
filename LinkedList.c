#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
};

typedef struct Node Node;

int numOfNodes();
Node* createNodes(int num);
void traverseNodes(Node* head);

int main(void) {
	// your code goes here
	int num = numOfNodes();
	Node* head = createNodes(num);
	traverseNodes(head);
	
	return 0;
}

int numOfNodes() {
	int num;
	printf("Input number of nodes: ");
	scanf("%i", &num);
	return num;
}

Node* createNodes(int num) {
	int count;
	Node* head = (Node*)malloc(sizeof(Node));
	Node* currentNode = head;
	
	for (int i = 0; i < num; i++) {
		count = i + 1;
		printf("Enter data for node #%i: ", count);
		scanf("%i", &currentNode->data);
		
		if (count != num) {
			currentNode->next = (Node*)malloc(sizeof(Node));
			currentNode = currentNode->next;
		} else {
			currentNode->next = (Node*)NULL;
		}
	}
	
	return head;
}

void traverseNodes(Node* head) {
	Node* currentNode = head;
	
	printf("\n\nThe data stored is: \n");
	while (currentNode != NULL) {
		printf("Data: %i\n", currentNode->data);
		currentNode = currentNode->next;
	}
}
