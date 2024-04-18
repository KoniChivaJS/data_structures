#include <iostream>
#include "Queue.h"
using namespace std;
int main() {
    Queue<int> Queue(1);
    cout<<Queue.isEmpty()<<endl;
    cout<<"IS FULL: "<<Queue.isFull()<<endl;
    Queue.Enqueue(3);
    cout<<Queue.isEmpty()<<endl;
    cout<<"IS FULL: "<<Queue.isFull()<<endl;
    return 0;
}
