/*
You are a skilled software engineer named Alex, working for a fast-growing tech startup that develops innovative productivity tools.
As part of the company's expansion, you have been assigned a critical project: to create a class template for a Priority Queue using a
binary heap.

*/

#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class PriorityQueue {
private:
    vector<T> data;

    void heapifyUp() {
        int index = data.size() - 1;
        while (index > 0) {
            int parentIndex = (index - 1) / 2;
            if (data[index] > data[parentIndex]) {
                swap(data[index], data[parentIndex]);
                index = parentIndex;
            } else {
                break;
            }
        }
    }

    void heapifyDown() {
        int index = 0;
        while (index < data.size()) {
            int leftChildIndex = 2 * index + 1;
            int rightChildIndex = 2 * index + 2;
            int largestIndex = index;

            if (leftChildIndex < data.size() && data[leftChildIndex] > data[largestIndex]) {
                largestIndex = leftChildIndex;
            }
            if (rightChildIndex < data.size() && data[rightChildIndex] > data[largestIndex]) {
                largestIndex = rightChildIndex;
            }

            if (largestIndex != index) {
                swap(data[index], data[largestIndex]);
                index = largestIndex;
            } else {
                break;
            }
        }
    }

public:
    void push(T value) {
        data.push_back(value);
        heapifyUp();
    }

    void pop() {
        if (!data.empty()) {
            data[0] = data.back();
            data.pop_back();
            heapifyDown();
        }
    }

    T top() {
        if (!data.empty()) {
            return data[0];
        }
        throw runtime_error("Priority Queue is empty!");
    }

    bool empty() {
        return data.empty();
    }
};

int main() {
    PriorityQueue<int> intQueue;
    intQueue.push(5);
    intQueue.push(10);
    cout << "Top element: " << intQueue.top() << endl;   // Output: Top element: 10
    intQueue.pop();
    cout << "Top element after pop: " << intQueue.top() << endl;  // Output: Top element after pop: 5

    PriorityQueue<string> strQueue;
    strQueue.push("Hello");
    strQueue.push("World");
    cout << "Top element: " << strQueue.top() << endl;   // Output: Top element: World
    return 0;
}

/*
This C++ program implements a Priority Queue class template using a binary heap, providing efficient priority-based data management for various data types. The PriorityQueue class template allows elements to be stored and retrieved based on their priority, with the highest priority element accessible at the top.

The class template is defined with a private member variable data, which is a vector<T> representing the underlying container to store elements. The use of vector allows for dynamic resizing of the priority queue as elements are added or removed.

The PriorityQueue class template includes two essential helper functions:

heapifyUp(): This function is responsible for maintaining the heap property (max-heap) during insertion operations. It compares the newly inserted element with its parent and swaps if the child's priority is greater than its parent's. The process continues until the element reaches its appropriate position in the heap.

heapifyDown(): This function maintains the heap property during removal (pop) operations. It compares the root (highest priority) element with its children and swaps with the larger child if necessary. The process continues recursively until the root reaches its correct position in the heap.

The public member functions of the PriorityQueue class template include:

push(T value): This function adds a new element value to the priority queue and ensures that the max-heap property is maintained using heapifyUp().

pop(): This function removes the highest priority element (root) from the priority queue and replaces it with the last element in the heap. It then ensures that the heap property is preserved using heapifyDown().

top(): This function returns the highest priority element (root) of the priority queue without removing it. If the priority queue is empty, it throws a runtime_error to indicate that the queue is empty.

empty(): This function checks if the priority queue is empty and returns true if it is, otherwise it returns false.

In the main() function, two instances of the PriorityQueue class template are created: intQueue to store integers and strQueue to store strings. Elements are added to both priority queues using the push method, and the highest priority element is retrieved using the top method. The pop method is also demonstrated by removing an element from the intQueue

*/
