def answer_string(word, n):
    if n == 1:
        return word
    
    max_len = len(word) - n + 1
    max_char = max(word)

    my_ans = ""
    
    for i in range(len(word)):
        if word[i] == max_char:
            substring = word[i:i + max_len]
            if substring > my_ans:
                my_ans = substring
                
    return my_ans

t = int(input())
for _ in range(t):
    word, n = input().split()
    n = int(n)
    ans = answer_string(word, n)
    print(ans)
