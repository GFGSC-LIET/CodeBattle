# Calculate the Cost of Fresh Items Problem

## Problem Description

There are N items in a grocery store. Each item has a freshness value **Ai** and a cost **Bi**. You want to buy all items with a freshness value of atleast **X**. Calculate the total cost of these items.

## Input Format

- The first line contains a single integer **T**, denoting the number of test cases.
- Each test case consists of multiple lines of input:
  - The first line of each test case contains two space-separated integers **N** and **X**: the number of items and the minimum freshness value, respectively.
  - The second line contains **N** space-separated integers, representing the freshness values of the items (**A**).
  - The third line contains **N** space-separated integers, representing the cost of each item (**B**).

## Output Format

- For each test case, output the total cost of the groceries you buy on a new line.

## Constraints

- 1 <= T <= 100
-1 <= N, X <= 100
-1 <= Ai,Bi <= 100

## Sample Input

1

4 50

12 78 50 40

40 30 20 10


## Sample Onput

50

## Explanation 

- Items 2 and 3 have freshness value greater than or equal to X (50). Thus, uh buy items 2 and 3.The total cost is 30 + 20 = 50.
