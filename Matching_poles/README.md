You are given an array of rods with different lengths. Your task is to use these rods to create two poles of equal height. You can combine any number of rods to form the poles, but the two poles must be made from different sets of rods.

Input Format

The first line contains an integer n, the number of rods.
The second line contains an array rods, representing the length of the rods.

Constraints

1 <= n <= 20
1 <= rods[i] <= 1000
sum(rods[i]) <= 5000

Output Format

The maximum height of the two poles that can be made with equal height.

Sample Input 

4 
1 2 3 6
Sample Output 

6
Explanation 

We have two disjoint subsets {1,2,3} and {6}, which have the same sum = 6.
