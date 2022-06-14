//
// Created by decar on 6/13/2022.
//

#ifndef CPPTESTING_NODE_H
#define CPPTESTING_NODE_H

template <typename T>
class Node {
    T item;
    Node* next;

    public:
        Node(T item, Node* next) {
            this->item = item;
            this->next = next;
        }

        T get_item() {
            return item;
        }

        void set_item(T item) {
            this->item = item;
        }

        void set_next(Node &next) {
            this->next = next;
        }
};


#endif //CPPTESTING_NODE_H
