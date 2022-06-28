//
// Created by decar on 6/12/2022.
//

#include "Node.h"

// https://www.geeksforgeeks.org/data-structures/linked-list/
class LinkedList {
        Node *first = new Node();
        // Add pointer to last node?
        Node* last = first;

    public:
        LinkedList() {

        }

        LinkedList(TestItem first) {
            this->first = new Node(first, nullptr);
        }

        void add(Node next) {
            last->set_next(&next);
            this->last = &next; // Update reference to last
        }

        void remove(Node* remove) {

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

        }
};
