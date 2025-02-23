There are N items in a grocery store. Each item has a freshness value Ai and a cost Bi. You want to buy all items with a freshness value of atleast X. Calculate the total cost of these items.

Input Format

The first line of input will contain single integer T,denoting the number of testcases.
Each test case consists of multiple lines of input.
The first line of each test case contains two space-separated integers N and X - the number of items and the minimum freshness value for items, respectively.
The second line contains N space-separated integers, the array A, denoting the freshness value of each item.
The third line contains N space-separated integers, the array B denoting the cost of each item.

Constraints

1 <= T <= 100
1 <= N, X <= 100
1 <= Ai,Bi <= 100

Output Format

For each test case, output on a new line, the total cost of the groceries buys.

Sample Input 

1
4 50
12 78 50 40
40 30 20 10
Sample Output 

50
Explanation 

Items 2 and 3 have freshness value greater than or equal to X (50). Thus, uh buy items 2 and 3.The total cost is 30 + 20 = 50.
