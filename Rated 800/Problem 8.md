# How Much Does Daytona Cost?
[Problem Link](https://codeforces.com/problemset/problem/1878/A)

We define an integer to be the most common on a subsegment, if its number of occurrences on that subsegment is larger than the number of occurrences of any other integer in that subsegment. A subsegment of an array is a consecutive segment of elements in the array a.

Given an array a of size n, and an integer k, determine if there exists a non-empty subsegment of a where k is the most common element.

### Input
Each test consists of multiple test cases. The first line contains a single integer t (1 ≤ t ≤ 1000) — the number of test cases. The description of test cases follows.

The first line of each test case contains two integers n and k (1 ≤ n ≤ 100, 1 ≤ k ≤ 100) — the number of elements in array and the element which must be the most common.

The second line of each test case contains n integers a1, a2, a3, …, an (1 ≤ ai ≤ 100) — elements of the array.

### Output
For each test case output "YES" if there exists a subsegment in which k is the most common element, and "NO" otherwise.

You can output the answer in any case (for example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as a positive answer).

### Example

**Input:**
```
7
5 4
1 4 3 4 1
4 1
2 3 4 4
5 6
43 5 60 4 2
2 5
1 5
4 1
5 3 3 1
1 3
3
5 3
3 4 1 5 5
```

**Output:**
```
YES
NO
NO
YES
YES
YES
YES
```