/*
Conceptual program to define usage of list data structure in STL library.
*/

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> myList; // Create an empty list to store integers.

    // Menu-driven program to perform list operations.
    int choice;
    do {
        cout << "\n1. Insert element at the beginning";
        cout << "\n2. Insert element at the end";
        cout << "\n3. Delete element";
        cout << "\n4. Display list";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int num;
                cout << "Enter the element to insert at the beginning: ";
                cin >> num;
                myList.push_front(num); // Insert the element at the beginning of the list.
                break;
            }
            case 2: {
                int num;
                cout << "Enter the element to insert at the end: ";
                cin >> num;
                myList.push_back(num); // Insert the element at the end of the list.
                break;
            }
            case 3: {
                int num;
                cout << "Enter the element to delete: ";
                cin >> num;
                myList.remove(num); // Remove all occurrences of the specified element from the list.
                break;
            }
            case 4: {
                cout << "List elements: ";
                for (const auto& num : myList) {
                    cout << num << " "; // Display the elements in the list.
                }
                cout << endl;
                break;
            }
            case 5: {
                cout << "Exiting program." << endl;
                break;
            }
            default: {
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        }
    } while (choice != 5);

    return 0;
}

/*

The program demonstrates the use of std::list, which is a doubly-linked list container from the C++ Standard Template Library (STL). The program allows the user to manipulate the list by inserting elements at the beginning and end, deleting elements, and displaying the current list.

In this program, we first create an empty list of integers named myList. The program then presents a menu-driven interface using a do-while loop. The user can choose from five different operations:

Insert element at the beginning: The user can input an integer, and the program will insert it at the beginning of the list using the push_front method.

Insert element at the end: The user can input an integer, and the program will insert it at the end of the list using the push_back method.

Delete element: The user can input an integer, and the program will remove all occurrences of that integer from the list using the remove method.

Display list: The program will display the elements in the list by iterating through it using a range-based for loop.

Exit: The user can choose to exit the program.

The program will continue to prompt the user for operations until the user selects the "Exit" option (choice 5). The menu-driven approach allows the user to interactively manipulate the list as per their choice.

Overall, this program provides a conceptual example of how to use the std::list container and demonstrates some of its basic operations in a user-friendly manner.

*/
