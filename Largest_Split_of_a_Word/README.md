Find all possible ways to split a word into a given number of non-empty parts, making sure no split is repeated. Then, pick the lexicographically largest string from all the parts. A lexicographically largest string is the one that would appear last in dictionary order. In simpler terms, it’s the string that is "greater" when compared letter by letter.

Example with Single Characters: Comparing "cat" and "dog":

"cat" comes before "dog" in a dictionary because 'c' < 'd'. So, "dog" is lexicographically larger. If comparing "apple" and "apples":

"apples" is larger because it has an extra 's' at the end.

Input Format

The first line contains an integer T (1 ≤ T ≤ 10), the number of test cases. Each test case consists of a string word , consisting of lowercase English letters and an integer n , representing the number of non-empty parts to split word into.

Constraints

1 <= word.length <= 5 * 10^2
word consists only of lowercase English letters.
1 <= n <= word.length

Output Format

For each test case, output a single string, which is the lexicographically largest string from all possible unique splits.

Sample Input 

1
dbca 2
Sample Output 

dbc
Explanation 

All possible splits are:

"d" and "bca".

"db" and "ca".

"dbc" and "a".

From above splittings,dbc is lexicographically largest string
