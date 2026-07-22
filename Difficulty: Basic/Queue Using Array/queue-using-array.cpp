class myQueue {
private:
    int *arr;
    int size;
    int front;
    int rear;
    int count;

public:
    myQueue(int n) {
        size = n;
        arr = new int[n];
        front = 0;
        rear = -1;
        count = 0;
    }

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == size;
    }

    void enqueue(int x) {
        if (!isFull()) {
            rear++;
            arr[rear] = x;
            count++;
        }
    }

    void dequeue() {
        if (!isEmpty()) {
            front++;
            count--;

            // Reset when queue becomes empty
            if (count == 0) {
                front = 0;
                rear = -1;
            }
        }
    }

    int getFront() {
        if (!isEmpty())
            return arr[front];
        return -1;
    }

    int getRear() {
        if (!isEmpty())
            return arr[rear];
        return -1;
    }

    ~myQueue() {
        delete[] arr;
    }
};