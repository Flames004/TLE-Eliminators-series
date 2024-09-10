# Halloumi Boxes
[Problem Link](https://codeforces.com/problemset/problem/1903/A)

Theofanis is busy after his last contest, as now, he has to deliver many halloumis all over the world. He stored them inside `n` boxes, each of which has some number `a_i` written on it.

He wants to sort them in **non-decreasing order** based on their numbers, however, his machine works in a strange way. It can only reverse any subarray† of boxes with a length of at most `k`.

Find if it's possible to sort the boxes using any number of reverses.

**Note:** Reversing a subarray means choosing two indices `i` and `j` (where `1 ≤ i ≤ j ≤ n`) and changing the array `a_1, a_2, ..., a_n` to `a_1, a_2, ..., a_(i-1), a_j, a_(j-1), ..., a_i, a_(j+1), ..., a_n`. The length of the subarray is then `j - i + 1`.

### Input
- The first line contains a single integer `t` (`1 ≤ t ≤ 100`) — the number of test cases.
- Each test case consists of two lines:
  - The first line contains two integers `n` and `k` (`1 ≤ k ≤ n ≤ 100`) — the number of boxes and the maximum length of the reverse operation.
  - The second line contains `n` integers `a_1, a_2, ..., a_n` (`1 ≤ a_i ≤ 10^9`) — the number written on each box.

### Output
For each test case, print "YES" (case-insensitive) if the array can be sorted in non-decreasing order, or "NO" otherwise.

### Example

**Input:**
```
5
3 2
1 2 3
3 1
9 9 9
4 4
6 4 2 1
4 3
10 3 830 14
2 1
3 1
```

**Output:**
```
YES
YES
YES
YES
NO
```

