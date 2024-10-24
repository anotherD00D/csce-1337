#include <iostream>

// Structure to represent a node in the linked list
struct Node {
	int data;      // Data part of the node
	Node* next;    // Pointer to the next node

	// Constructor to initialize the node with a value
	Node(int value) : data(value), next(nullptr) {}
};

// Class to represent the linked list
class LinkedList {
private:
	Node* head; // Pointer to the head of the list

public:
	// Constructor to initialize the linked list
	LinkedList() : head(nullptr) {}

	// Function to insert a new node at the beginning
	void insertAtBeginning(int newData) {
		Node* newNode = new Node(newData); // Create a new node
		newNode->next = head;               // Point new node to current head
		head = newNode;                     // Update head to the new node
	}
	// Function to insert a new node at the end
	void insertAtEnd(int newData) {
		Node* newNode = new Node(newData); // Create a new node
		if (head == nullptr) {              // If the list is empty
			head = newNode;                 // Set head to the new node
			return;
		}
		Node* last = head;                  // Start at the head
		while (last->next != nullptr) {     // Traverse to the last node
			last = last->next;
		}
		last->next = newNode;               // Link the last node to the new node
	}

	// Function to insert a new node at a specific position
	void insertAtPosition(int newData, int position) {
		if (position == 0) {                 // If position is 0, insert at the beginning
			insertAtBeginning(newData);
			return;
		}

		Node* newNode = new Node(newData);   // Create a new node
		Node* current = head;                 // Start at the head

		// Traverse to the position just before where the new node will be inserted
		for (int i = 0; current != nullptr && i < position - 1; i++) {
			current = current->next;
		}

		if (current == nullptr) {             // If position is greater than the list size
			std::cout << "The previous node is null. Insertion failed.\n";
			delete newNode;                   // Clean up the new node
			return;
		}

		newNode->next = current->next;        // Link new node to the next node
		current->next = newNode;              // Link the previous node to the new node
	}

	// Function to print the list
	void printList() const {
		Node* current = head;                 // Start at the head
		while (current != nullptr) {          // Traverse the list
			std::cout << current->data << " "; // Print the data of the current node
			current = current->next;          // Move to the next node
		}
		std::cout << std::endl;               // New line after printing the list
	}

	// Destructor to clean up memory
	~LinkedList() {
		Node* current = head;                 // Start at the head
		while (current != nullptr) {          // Traverse the list
			Node* nextNode = current->next;  // Store pointer to the next node
			delete current;                   // Delete the current node
			current = nextNode;               // Move to the next node
		}
	}
};


int main() {
	LinkedList list;                       // Create a new linked list

	list.insertAtBeginning(3);             // List: 3
	list.insertAtBeginning(2);             // List: 2 3
	list.insertAtEnd(4);                   // List: 2 3 4
	list.insertAtPosition(5, 2);           // List: 2 3 5 4 (5 at position 2in)

	list.printList();                      // Output: 2 3 5 4

	return 0;                              // End of the program
}
