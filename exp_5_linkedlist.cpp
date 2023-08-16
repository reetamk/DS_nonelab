#include <iostream>

namespace LinkedList {
    struct Node {
        int info;
        Node* next;
    };

    Node* start = nullptr;

    void create() {
        Node* temp = new Node;
        if (temp == nullptr) {
            std::cerr << "Out of Memory Space" << std::endl;
            exit(1);
        }
        std::cout << "Enter the data : ";
        std::cin >> temp->info;
        temp->next = nullptr;
        if (start == nullptr) {
            start = temp;
        } else {
            Node* ptr = start;
            while (ptr->next != nullptr) {
                ptr = ptr->next;
            }
            ptr->next = temp;
        }
    }

    void display() {
        if (start == nullptr) {
            std::cout << "List is empty." << std::endl;
            return;
        } else {
            Node* ptr = start;
            std::cout << "The List elements are: ";
            while (ptr != nullptr) {
                std::cout << ptr->info << " ";
                ptr = ptr->next;
            }
            std::cout << std::endl;
        }
    }

    void insert_begin() {
        Node* temp = new Node;
        if (temp == nullptr) {
            std::cerr << "Out of Memory Space" << std::endl;
            return;
        }
        std::cout << "Enter the data : ";
        std::cin >> temp->info;
        temp->next = nullptr;
        if (start == nullptr) {
            start = temp;
        } else {
            temp->next = start;
            start = temp;
        }
    }

    // ... Implement other functions similarly ...

    int main() {
        int choice;
        while (true) {
            std::cout << "\nMenu:\n";
            std::cout << "1] Create new list\n2] Display list\n3] Insert at first\n4] Insert at last\n5] Insert at position\n6] Delete from first\n7] Delete from last\n8] Delete from position\n9] Exit\n";
            std::cout << "Enter your choice: ";
            std::cin >> choice;

            switch (choice) {
                case 1:
                    create();
                    break;
                case 2:
                    display();
                    break;
                case 3:
                    insert_begin();
                    break;
                // ... Implement other cases similarly ...
                case 9:
                    std::cout << "Exiting..." << std::endl;
                    exit(0);
                default:
                    std::cerr << "Invalid choice!" << std::endl;
            }
        }

        return 0;
    }
}

int main() {
    LinkedList::main();
    return 0;
}
