/*
NIMS BUGSTRIKE
BUG FIXING COMPETITION
Question Number: 1
Question Name: Array Sum - The Missing Sum
Marks: 10
Difficulty: Easy
Programming Language: C++17

Problem Description:
Given an integer array, calculate and print the sum of all its elements.

Input Format:
The first line contains an integer N, the number of array elements.
The second line contains N space-separated integers.

Output Format:
Print the sum of all N elements.

Constraints:
1 <= N <= 100000
-1000000 <= each array element <= 1000000

Sample Input:
5
2 4 6 8 10

Expected Output:
30

Participant Instructions:
The C++ program below is an existing program with intentional bugs.
Find and fix the bugs in this program. Preserve the problem's required
input and output format, then compile and test your corrected program.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> values(n);
    for (int i = 0; i < n; ++i) {
        cin >> values[i];
    }

    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += values[i];
    }

    cout << sum << '\n';
    return 0;
}
