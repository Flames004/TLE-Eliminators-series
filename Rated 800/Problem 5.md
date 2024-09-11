# Jagged Swaps
[Problem Link](https://codeforces.com/problemset/problem/1896/A)

You are given a permutation `a` of size `n`. You can perform the following operation:

- Select an index `i` from 2 to `n-1` such that `a[i-1] < a[i]` and `a[i] > a[i+1]`. Then, swap `a[i]` and `a[i+1]`.

Determine whether it is possible to sort the permutation after a finite number of operations.

---

**Note:**
A permutation is an array consisting of `n` distinct integers from 1 to `n` in arbitrary order. For example, `[2,3,1,5,4]` is a permutation, but `[1,2,2]` is not (since 2 appears twice), and `[1,3,4]` is not a permutation (since `n=3` but there is a 4 in the array).

### Input

- The first line contains an integer `t` (1 ≤ t ≤ 5000) — the number of test cases.
- The first line of each test case contains a single integer `n` (3 ≤ n ≤ 10) — the size of the permutation.
- The second line of each test case contains `n` integers `a1, a2, ..., an` (1 ≤ ai ≤ n) — the elements of the permutation.

### Output

For each test case, print `"YES"` if it is possible to sort the permutation, and `"NO"` otherwise.

---

### Example

**Input:**
```
6
3
1 2 3
5
1 3 2 5 4
5
5 4 3 2 1
3
3 1 2
4
2 3 1 4
5
5 1 2 3 4
```

**Output:**
```
YES
YES
NO
NO
NO
NO
```

