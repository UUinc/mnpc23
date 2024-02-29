t = int(input())
for i in range(t):
    n = int(input())
    sum = 0
    pro = 1
    v = input().split()
    for j in v:
        sum += int(j)
        pro *= int(j)
    print(sum*pro)