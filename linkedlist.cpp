//
// Created by decar on 6/12/2022.
//

#include "Node.h"

// https://www.geeksforgeeks.org/data-structures/linked-list/
template<typename T>
class LinkedList {
        Node<T> *items = new Node<T>[1];

    public:
        void add(T item) {
            auto *nodes = new Node<T>[size() + 1];

            copy_into(items, nodes);

            Node<T> node = new Node(item, nullptr);
            nodes[size()] = node;
            nodes[size() - 1].set_next(&node);

            this->items = nodes;
        }

        void remove(Node<T> &node) {

        }

        int size() {
            return *(&items + 1) - items;
        }

        Node<T> get(int index) {
            return items[index].get_item();
        }

        Node<T> get_last() {
            return items[size() - 1];
        }


};

template<typename T>
void copy_into(Node<T> *from[], Node<T> *into[]) {
    for(int i = 0; i < (*(&from + 1) - from); i++) {
        *into[i] = *from[i];
    }
}
