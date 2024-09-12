# Doremy's Paint 3
[Problem Link](https://codeforces.com/problemset/problem/1890/A)

An array \( b_1, b_2, \dots, b_n \) of positive integers is considered *good* if all the sums of two adjacent elements are equal to the same value. More formally, the array is good if there exists a constant \( k \) such that:
- b_1 + b_2 = b_2 + b_3 = ..... = b_{n-1} + b_n = k .

Doremy has an array \( a \) of length \( n \). Doremy can permute its elements (change their order) however she wants. Your task is to determine if she can permute the array in such a way that it becomes a good array.

### Input:

The input consists of multiple test cases. 
- The first line contains a single integer \( t \) (\( 1 \leq t \leq 100 \)) — the number of test cases.
- For each test case:
  - The first line contains a single integer \( n \) (\( 2 \leq n \leq 100 \)) — the length of the array \( a \).
  - The second line contains \( n \) integers \( a_1, a_2, \dots, a_n \) (\( 1 \leq a_i \leq 10^5 \)) — the elements of the array.

### Output:

For each test case, print `"Yes"` if it is possible to permute the array such that it becomes a good array. Otherwise, print `"No"`.

You may output the answer in any case (e.g., `"yEs"`, `"YES"`, `"yes"` will all be recognized as valid positive responses).

### Example

**Input:**
```
5
2
8 9
3
1 1 2
4
1 1 4 5
5
2 3 3 3 3
4
100000 100000 100000 100000
```

**Output:**
```
Yes
Yes
No
No
Yes
```