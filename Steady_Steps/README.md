# Steady Steps 

## Problem Description

Faizal, being drunk, attempts to go home but cannot walk in a straight line. He follows a specific pattern while moving:

- For every 3 steps forward, he takes 1 step backward.
- In the **1st second**, he moves **3 steps forward**.
- In the **2nd second**, he moves **1 step backward**.
- In the **3rd second**, he moves **3 steps forward** again.
- In the **4th second**, he moves **1 step backward**, and so on.

You need to calculate how far from his starting point Faizal will be after **k seconds**. He starts at position 0.

## Input Format

- The first line of input contains a single integer **T** denoting the number of test cases. The description of **T** test cases follows.
- The first line of each test case contains a single integer **k** the number of seconds after which Faizal's position is to be calculated.

## Output Format

- For each test case, output a single integer representing Faizal's position after **k seconds**.

## Constraints

- 1 ≤ T ≤ 100000

- 0 ≤ k ≤ 100000
- The sum of **k** over all test cases does not exceed **1,000,000**.

## Output Format
For each test case, output a single line containing one integer - Faizal's position after k seconds.

## Sample Input
1

5

## Sample Output
7

## Explanation 

- 1st second: walks 3 steps forward, ending at 3
- 2nd second: walks 1 step backward, ending at 2
- 3rd second: walks 3 steps forward, ending at 5
- 4th second: walks 1 step backward, ending at 4
- 5th second: walks 3 steps forward, ending at 7

