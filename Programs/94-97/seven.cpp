/*
Given a sentence, find and print the frequency of each word using a map.

Input: Buno is dog. I love Buno. I play with Buno

Output:
Buno occurs 2 times
Buno. occurs 1 times
dog. occurs 1 times
I occurs 2 times
is occurs 1 times
love occurs 1 times
play occurs 1 times
with occurs 1 times

*/

#include <iostream>
#include <map>
#include <sstream>
using namespace std;

int main() {
    string sentence;
    getline(cin, sentence);
    map<string, int> wordFreq;
    istringstream iss(sentence);
    string word;
    while (iss >> word) {
        wordFreq[word]++;
    }
    for (auto it : wordFreq) {
        cout << it.first << " occurs " << it.second << " times" << endl;
    }
    return 0;
}
