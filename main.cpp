#include <iostream>
#include "Queue.h"
using namespace std;
int main() {
    Queue<int> Queue(2);
    Queue.Enqueue(3);
    Queue.Enqueue(1);
    Queue.Enqueue(1);
    cout<<Queue.Peek()<<endl;
    Queue.Dequeue();
    Queue.Dequeue();
    return 0;
}
