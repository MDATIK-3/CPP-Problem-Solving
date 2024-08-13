def main():
    import sys
    input = sys.stdin.read().strip().split('\n')
    n = int(input[0])
    
    for i in range(1, n + 1):
        a = int(input[i].strip())
        s = 0
        arr = []
        brr = []

        for j in range(61):
            if a & (1 << j):
                s += 1
                brr.append((1 << j))

        s += 1
        arr.append(a)

        for b in brr:
            if a - b > 0:
                arr.append(a - b)

        arr.reverse()
        print(len(arr))
        print(' '.join(map(str, arr)))

if __name__ == "__main__":
    main()
