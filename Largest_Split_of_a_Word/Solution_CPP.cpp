#include <iostream>

#include <string>

using namespace std;
string answerString(string word, int n) {
    if (n == 1) return word;
    size_t max_len = word.length() - n + 1;
    char max_char = word[0];
    for (size_t i = 1; i < word.length(); i++) {
        if (word[i] > max_char) {
            max_char = word[i];
        }
    }
    string my_ans = " ";
    for (size_t i = 0; i < word.length(); i++) {
        if (word[i] == max_char) {
            my_ans = max(my_ans, word.substr(i, max_len));
        }
    }
    return my_ans;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        string word;
        int n;
        cin >> word;
        cin >> n;
        string ans = answerString(word, n);
        cout << ans << endl;
    }
    return 0;
}
