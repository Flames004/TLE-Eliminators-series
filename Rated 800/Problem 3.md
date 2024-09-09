# Problem: Filip's Water Filling Task

## Problem Statement

Filip has a row of cells, some of which are blocked, and some are empty. He wants all the empty cells to have water in them. He has two actions at his disposal:

1. **Action 1**: Place water in an empty cell.
2. **Action 2**: Remove water from a cell and place it in any other empty cell.

If at some moment, cell `i` (where `2 ≤ i ≤ n-1`) is empty and both cells `i-1` and `i+1` contain water, then it automatically becomes filled with water.

### Objective:
Find the minimum number of times Filip needs to perform **Action 1** to fill all empty cells with water.

### Notes:
- You **do not** need to minimize the use of **Action 2**.
- Blocked cells neither contain water nor can Filip place water in them.

## Input Format

Each test contains multiple test cases.

- The first line contains the number of test cases `t` (1 ≤ t ≤ 100).
- For each test case:
  - The first line contains a single integer `n` (1 ≤ n ≤ 100) — the number of cells.
  - The second line contains a string `s` of length `n`, where the `i`-th character of `s` is:
    - `'.'` if the cell `i` is empty.
    - `'#'` if the cell `i` is blocked.

## Output Format

For each test case, output a single integer — the minimal number of **Action 1** operations required to fill all empty cells with water.

## Example

### Input
