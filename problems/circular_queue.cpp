#include <iostream>
using namespace std;
class circularQueue {
public:
    int front, rear;
    int *queue;
    int size;
    circularQueue(int size) : queue(new int[size]), front(0), rear(0), size(size) {}
    void enqueue(int x) {
        if (front == ((rear + 1) % size))
            cout <<"queue is full"<< endl;
        else {
            queue[rear] = x;
            rear = (rear + 1) % size;
            cout << x <<"inserted in the queue."<< endl;
        }
    }

    void dequeue() {
        if (front == rear)
            cout <<"queue is empty"<< endl;
        else {
            cout << queue[front] <<"deleted from the queue."<< endl;
            front = (front + 1) % size;
        }
    }
};

int main() {
    circularQueue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.dequeue();
    q.enqueue(3);
    q.dequeue();
    q.dequeue();
    q.dequeue();  
    return 0;
}