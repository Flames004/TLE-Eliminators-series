# Goals of Victory
[Problem Link](https://codeforces.com/problemset/problem/1877/A)

There are \( n \) teams in a football tournament. Each pair of teams matches up once. After every match, Pak Chanek receives two integers as the result of the match, representing the number of goals the two teams scored during the match. The efficiency of a team is equal to the total number of goals the team scores in all its matches minus the total number of goals scored by their opponents in all matches.

After the tournament ends, Pak Dengklek counts the efficiency of every team. However, he forgot the efficiency of one team. Given the efficiency of \( n-1 \) teams \( a_1, a_2, a_3, ..., a_{n-1} \), determine the efficiency of the missing team. It can be shown that the efficiency of the missing team can be uniquely determined.

### Input

Each test contains multiple test cases.

- The first line contains an integer \( t \) \((1 \<= t \<= 500)\) — the number of test cases.
- The following lines describe each test case.
    - The first line contains a single integer \( n \) \((2 \<= n \<= 100)\) — the number of teams.
    - The second line contains \( n-1 \) integers \( a_1, a_2, a_3, \dots, a_{n-1} \) \((-100 \<= a_i \<= 100)\) — the efficiency of \( n-1 \) teams.

### Output

For each test case, output a single integer representing the efficiency of the missing team.

### Example

**Input:**
```
2
4
3 -4 5
11
-30 12 -57 7 0 -81 -68 41 -89 0
```

**Output:**
```
-4
265
```