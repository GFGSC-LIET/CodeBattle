def find_max_height(rods, index, sum1, sum2):
    global max_height
    if index == len(rods):
        if sum1 == sum2:
            max_height = max(max_height, sum1)
        return
    find_max_height(rods, index + 1, sum1 + rods[index], sum2)
    find_max_height(rods, index + 1, sum1, sum2 + rods[index])
    find_max_height(rods, index + 1, sum1, sum2)

n = int(input())
rods = list(map(int, input().split()))
max_height = 0
find_max_height(rods, 0, 0, 0)
print(max_height)
