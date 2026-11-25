/*
NIMS BUGSTRIKE
BUG FIXING COMPETITION
Question Number: 10
Question Name: Binary Tree Level Order Traversal
Marks: 30
Difficulty: Hard
Programming Language: C++17

Problem Description:
The input values represent a binary tree in level order using the
zero-based array representation of a complete binary tree. Every position
from 0 to N - 1 contains a node. For each level, print the node values from
left to right on a separate line.

Input Format:
The first line contains N, the number of nodes.
The second line contains N space-separated integer node values in level
order.

Output Format:
Print one line per tree level, with values separated by single spaces.

Constraints:
1 <= N <= 100000
-1000000000 <= each node value <= 1000000000

Sample Input:
7
1 2 3 4 5 6 7

Expected Output:
1
2 3
4 5 6 7

Participant Instructions:
The C++ program below is an existing program with intentional bugs.
Find and fix the bugs in this program. Preserve the problem's required
input and output format, then compile and test your corrected program.
*/

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> values(n);
    for (int i = 0; i < n; ++i) {
        cin >> values[i];
    }

    queue<int> pending;
    pending.push(0);

    while (!pending.empty()) {
        int levelSize = static_cast<int>(pending.size());

        for (int i = 0; i < levelSize; ++i) {
            int index = pending.front();
            pending.pop();

            if (i > 0) {
                cout << ' ';
            }
            cout << values[index];

            int left = 2 * index + 1;
            int right = 2 * index + 2;

            if (left < n) {
                pending.push(left);
            }
            if (right < n) {
                pending.push(right);
            }
        }

        cout << '\n';
    }

    return 0;
}
