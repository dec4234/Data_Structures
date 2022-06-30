//
// Created by decar on 6/12/2022.
//

#include <utility>
#include <iostream>

#include "Node.h"

// https://www.geeksforgeeks.org/data-structures/linked-list/
class LinkedList {
    private:
        Node *first = new Node();
        // Add pointer to last node?
        Node* last = first;

    public:
        LinkedList() {

        }

        LinkedList(Node *first) {
            this->first = first;
            this->last = first;
        }

        void add(Node *next) {
            last->set_next(next);

            this->last = next; // Update reference to last
        }

        /**
         * Remove a node from the LinkedList
         * Update first and last values accordingly
         * @param remove The Node to be removed from the List
         */
        void remove(Node* remove) {
            Node *prev = first;

            if(first == remove) {
                first = remove->next();
            }

            while (prev->next() != remove) { // Move up to the position where the node is
                prev = prev->next();
            }

            prev->set_next(remove->next()); // Move pointer of node before one being removed up to the one after the node being removed

            operator delete(remove);

            last = get_last();
        }

        int size() {
            Node f = *this->first;
            int size = 0;

            // loop through until you reach the end
            while (f.next() != nullptr) {
                f = f.next();
                size++;
            }

            return size;
        }

        Node *get_last() {
            Node f = *this->first;

            // loop through until you reach the end
            while (f.next() != nullptr) {
                f = f.next();
            }

            return &f;
        }

        void print_all() {
            Node f = *this->first;

            std::cout << "Linked List Size: " << size() << std::endl;
            while (f.next() != nullptr) {
                std::cout << f.get_item().get_message() << " -> ";

                f = f.next();
            }
        }
};
