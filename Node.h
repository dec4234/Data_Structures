//
// Created by decar on 6/13/2022.
//

#ifndef CPPTESTING_NODE_H
#define CPPTESTING_NODE_H

#include <string>

class TestItem {
    private:
        std::string message;

    public:
        TestItem() {
            message = "testMessage";
        }

        TestItem(int count) {
            message = "Message #" + std::to_string(count);
        }

        std::string get_message() {
            return this->message;
        }
};

class Node {
    private:
        TestItem *item;
        Node *n;

    public:
        Node() {
            this->item = nullptr;
            this->n = nullptr;
        }

        Node(TestItem *item) {
            this->item = item;
            this->n = nullptr;
        }

        Node(TestItem *item, Node *next) {
            this->item = item;
            this->n = next;
        }

        TestItem get_item() {
            return *item;
        }

        void set_item(TestItem i) {
            this->item = &i;
        }

        Node *next() {
            return this->n;
        }

        void set_next(Node *next) {
            this->n = next;
        }

        Node& operator=(Node other) {
            this->set_item(other.get_item());
            this->set_next(other.next());

            return *this;
        }

        Node& operator=(Node* other) {
            this->set_item(other->get_item());
            this->set_next(other->next());

            return *this;
        }
};


#endif //CPPTESTING_NODE_H
