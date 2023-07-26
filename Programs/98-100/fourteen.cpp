/*
We are given an integer array asteroids of size N representing asteroids in a row.
For each asteroid, the absolute value represents its size, and the sign represents its direction (positive meaning right,
negative meaning left). Each asteroid moves at the same speed.
Find out the state of the asteroids after all collisions. If two asteroids meet, the smaller one will explode.
If both are of same size, both will explode. Two asteroids moving in the same direction will never meet.

Input:
N = 3
asteroids[ ] = {3, 5, -3}
Output: {3, 5}
Explanation: The asteroid 5 and -3 collide resulting in 5. The 5 and 3 never collide.

*/

#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>

using namespace std;

class Solution {
public:
    // Function to simulate asteroid collisions and return the resulting vector of asteroids.
    vector<int> asteroidCollision(int N, vector<int> &asteroids) {
        stack<int> st; // Create a stack to simulate the collision process.
        st.push(asteroids[0]); // Push the first asteroid onto the stack.

        for (int i = 1; i < N; i++) {
            if (asteroids[i] < 0 && st.top() > 0) {
                int f = 1;

                // Check if the current asteroid will collide with the top asteroid in the stack.
                if (abs(asteroids[i]) < abs(st.top())) continue;
                else if (abs(asteroids[i]) == abs(st.top())) st.pop();
                else {
                    // Continue popping asteroids from the stack until no more collisions are possible.
                    while (st.size() && st.top() > 0) {
                        if (abs(st.top()) < abs(asteroids[i])) st.pop();
                        else if (abs(st.top()) == abs(asteroids[i])) {
                            f = 0;
                            st.pop();
                            break;
                        }
                        else {
                            f = 0;
                            break;
                        }
                    }
                    if (f) st.push(asteroids[i]);
                }
            }
            else st.push(asteroids[i]);
        }

        // Convert the remaining asteroids in the stack into the result vector.
        vector<int> ans;
        while (st.size()) {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end()); // Reverse the result vector to get the correct order.
        return ans;
    }
};

int main() {
    int N;
    cin >> N; // Read the number of asteroids from the user.

    vector<int> asteroids(N);
    for (int i = 0; i < N; i++)
        cin >> asteroids[i]; // Read the sizes of the asteroids from the user.

    Solution obj;
    vector<int> ans = obj.asteroidCollision(N, asteroids); // Call the asteroidCollision function.

    // Print the resulting vector of asteroids after the collisions.
    for (int i = 0; i < ans.size(); i++) {
        cout << ans.at(i) << ' ';
    }
    cout << endl;

    return 0;
}

/*
The given C++ code simulates asteroid collisions and returns the final vector of asteroids after the collisions.
Each asteroid is represented by its size, and the problem requires handling collisions between asteroids moving in opposite directions.

The Solution class contains a member function asteroidCollision, which takes the number of asteroids N and a reference to a vector of integers asteroids representing the sizes of the asteroids.

The asteroidCollision function uses a stack to simulate the collisions. It iterates through the asteroids, and for each asteroid, it checks if it will collide with the top asteroid in the stack (if it's moving in the opposite direction).

If a collision is detected, the function handles it based on the sizes of the colliding asteroids:

If the current asteroid's size is smaller, it is destroyed, and the function continues to the next asteroid.
If the current asteroid's size is equal to the top asteroid's size, both asteroids are destroyed, and the function continues to the next asteroid.
If the current asteroid's size is larger, it destroys all smaller asteroids in the stack until no more collisions are possible.
After processing all asteroids, the remaining asteroids in the stack represent the final vector of asteroids after the collisions. The function converts the stack into the result vector and returns it.
The result vector is reversed to maintain the correct order of the surviving asteroids.

In the main function, the user is asked to input the number of asteroids (N) and the sizes of the asteroids (asteroids). Then, the asteroidCollision function of the Solution class is called, and the final vector of asteroids after the collisions is printed to the console.

*/
