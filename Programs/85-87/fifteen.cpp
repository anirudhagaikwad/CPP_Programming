/*
You are developing a real-time data processing application that runs on a multi-threaded architecture. Each thread is responsible for processing
a specific data stream concurrently. However, there is a possibility of encountering errors during the processing of data.
Your task is to implement exception handling in the thread function to handle any exceptions that may occur during data processing.

Input:
thread threadObj(threadFunction);
threadObj.join();

Output: Thread caught exception: Exception in thread!

*/


#include <iostream>
#include <thread>
using namespace std;

void threadFunction() {
    try {
        // Some processing that may throw an exception
        throw runtime_error("Exception in thread!");
    }
    catch (const std::exception& ex) {
        cout << "Thread caught exception: " << ex.what() << std::endl;
    }
}

int main() {
    thread threadObj(threadFunction);
    threadObj.join();

    return 0;
}

/*
The provided C++ program demonstrates a simplified version of the real-time data processing application.
The threadFunction represents a single thread responsible for processing data. During the data processing, there might be situations where an
exception is thrown due to various reasons, such as invalid data, network disruptions, or resource unavailability.

Your goal is to modify the threadFunction to handle such exceptions gracefully. Whenever an exception is encountered, catch the exception in the
catch block and display an informative error message indicating the type of exception and any additional context information that may be useful for
debugging or reporting.

*/






