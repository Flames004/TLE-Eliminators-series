# Ambitious Kid
[Problem Link](https://codeforces.com/contest/1866/problem/A)

Chaneka, Pak Chanek's child, is an ambitious kid, so Pak Chanek gives her the following problem to test her ambition.

Given an array of integers \([A_1, A_2, A_3, \dots, A_N]\), Chaneka can perform the following operation:

In one operation, Chaneka can choose one element from the array and either increase or decrease its value by 1. She can perform this operation multiple times, even on different elements.

What is the minimum number of operations needed to make the product \(A_1 \times A_2 \times A_3 \times \dots \times A_N = 0\)?

### Input:
- The first line contains a single integer \(N\) \((1 \leq N \leq 10^5)\), the number of elements in the array.
- The second line contains \(N\) integers \(A_1, A_2, A_3, \dots, A_N\) \((-10^5 \leq A_i \leq 10^5)\), the elements of the array.

### Output:
- Output a single integer representing the minimum number of operations required to make the product of the array equal to 0.

### Example

```
Input:
3
2 -6 5

Output:
2
```

```
Input:
1
-3

Output:
3
```

```
Input:
5
0 -1 0 1 0

Output:
0
```

```
Input:
1
100000

Output:
100000
```