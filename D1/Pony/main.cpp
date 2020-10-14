#include <iostream>
#include "Pony.h"

void ponyOnTheHeap() {
    Pony *heap = new Pony;
    heap->setAge(3);
    std::cout << "Pointer heap pointing to: " << heap << std::endl;
    std::cout << " heap age: " << heap->getAge() << std::endl;
    delete heap;

    std::cout << "Pointer heap pointing to after delete: " << heap << std::endl;
    std::cout << " heap age after delete: " << heap->getAge() << std::endl;
    std::cout << "deleting heap doesn't mean that memory gonna be zero but it will be free for use!" << "\n";
}

void ponyOnTheStack() {
    Pony stack;
    stack.setAge(6);
    std::cout << "Pointer stack pointing to: " << &stack << std::endl;
    std::cout << " stack age: " << stack.getAge() << std::endl;
}

int main() {
    ponyOnTheHeap();
    ponyOnTheStack();
    return 0;
}

