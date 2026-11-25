/*
NIMS BUGSTRIKE
BUG FIXING COMPETITION
Question Number: 2
Question Name: Reverse the Message
Marks: 10
Difficulty: Easy
Programming Language: C++17

Problem Description:
Read one line of text and print its characters in reverse order.
Spaces and punctuation are part of the message and must be preserved.

Input Format:
One line containing the message.

Output Format:
Print the message in reverse order on one line.

Constraints:
The message contains between 1 and 1000 characters.

Sample Input:
NIMS BugStrike

Expected Output:
ekirtSguB SMIN

Participant Instructions:
The C++ program below is an existing program with intentional bugs.
Find and fix the bugs in this program. Preserve the problem's required
input and output format, then compile and test your corrected program.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string message;
    getline(cin, message);

    for (int i = static_cast<int>(message.size()) - 1; i >= 0; --i) {
        cout << message[i];
    }
    cout << '\n';

    return 0;
}
