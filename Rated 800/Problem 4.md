# Game with Integers
[Problem Link](https://codeforces.com/problemset/problem/1899/A)

Vanya and Vova are playing a game. Players are given an integer `n`. On their turn, a player can either add 1 or subtract 1 to the current integer. The players take turns, and Vanya always starts first. If after Vanya's move the integer becomes divisible by 3, Vanya wins. If 10 moves have passed and Vanya has not won, then Vova wins.

Write a program that, based on the integer `n`, determines who will win if both players play optimally.

### Input 

- The first line contains the integer `t` (1 ≤ t ≤ 100) — the number of test cases.
- Each of the next `t` lines contains a single integer `n` (1 ≤ n ≤ 1000) — the starting number for that test case.

### Output

For each test case, print `"First"` (without quotes) if Vanya wins, and `"Second"` (without quotes) if Vova wins.

### Example

**Input:**
```
6
1
3
5
100
999
1000
```

**Output:**
```
First
Second
First
First
Second
First
```
