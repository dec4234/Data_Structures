#include <iostream>
#include <utility>
#include "linkedlist.cpp"

int main() {
    auto ll = new LinkedList(new Node(new TestItem(0)));

    ll->add(new Node(new TestItem(1)));
    ll->add(new Node(new TestItem(2)));
    ll->add(new Node(new TestItem(3)));
    ll->add(new Node(new TestItem(4)));
    ll->add(new Node(new TestItem(5)));

    ll->print_all();

    std::cout << "Finished" << std::endl;
}