//
// Created by eduard on 18.04.24.
//
#include <iostream>
using namespace std;
#ifndef DATA_STRUCTURES_QUEUE_H
#define DATA_STRUCTURES_QUEUE_H
template <typename T>
class Queue{
private:
    int tail,head;
    int size;
    T *arr;
public:
    Queue(int s)
        :size{s}{
        head = tail = -1;
        arr = new T[s];
    }
    void Enqueue(T data);
    T Dequeue();
    T Peek();
};

template<typename T>
T Queue<T>::Peek() {
    if(head == -1){
        cout<<"Queue is empty"<<endl;
        return 404;
    }

    return arr[head];
}


template<typename T>
T Queue<T>::Dequeue() {
    if(head == -1){
        cout<<"Queue is empty"<<endl;
        return 404;
    }
    T data = arr[head];
    arr[head] = -1;
    if(head == tail){
        head = tail = -1;
    }else if(head == size - 1){
        head = 0;
    }else{
        head++;
    }
    return data;
}


template<typename T>
void Queue<T>::Enqueue(T data) {
    if(head == 0 && tail == size-1){
        cout<<"Queue is full"<<endl;
        return;
    }
    if(head == -1){
        head = tail = 0;
        arr[tail] = data;
    }else if( tail == size - 1 && head != 0 ){
        tail = 0;
        arr[tail] = data;
    }else{
        tail++;
        arr[tail] = data;
    }
    cout<<"Inserted element: "<<data<<endl;
}

#endif //DATA_STRUCTURES_QUEUE_H
