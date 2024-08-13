def solve():
    n = int(input())
    s = input()
    prev = '1'
    v = []

    for i in range(n):
        if s[i] == '1':
            v.append(1)
        if s[i] == '0' and prev == '1':
            v.append(0)
        prev = s[i]

    n0 = 0
    n1 = 0

    for i in v:
        if i == 1:
            n1 += 1
        else:
            n0 += 1

    if n0 >= n1:
        print("No")
    else:
        print("Yes")

def main():
    import sys
    input = sys.stdin.read
    data = input().split()
    
    t = int(data[0])
    index = 1
    for _ in range(t):
        n = int(data[index])
        s = data[index + 1]
        index += 2
        sys.stdin = io.StringIO(f"{n}\n{s}")
        solve()

if __name__ == "__main__":
    import io
    main()
