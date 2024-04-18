//
// Created by eduard on 18.04.24.
//
#include <iostream>
#include "DoubleLinkedList.h"
#ifndef DATA_STRUCTURES_STACK_H
#define DATA_STRUCTURES_STACK_H
using namespace std;
template <typename T>
class Stack{
private:
    DoubleLinkedList<T> StackList;
public:
    Stack()
        :StackList(){};
    void push(T data);
    void pop();
    T peek();
    bool isEmpty();
};

template<typename T>
bool Stack<T>::isEmpty() {
    return StackList.isEmpty();
}

template<typename T>
T Stack<T>::peek() {
    return StackList.at(-1);
}

template<typename T>
void Stack<T>::pop() {
    StackList.pop();
}

template<typename T>
void Stack<T>::push(T data) {
    StackList.push(data);
}

#endif //DATA_STRUCTURES_STACK_H
