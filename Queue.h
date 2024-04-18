//
// Created by eduard on 18.04.24.
//

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
};
#endif //DATA_STRUCTURES_QUEUE_H
