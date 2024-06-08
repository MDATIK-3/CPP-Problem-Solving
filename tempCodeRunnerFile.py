n, m = map(int, raw_input().split())
lace = []
for i in xrange(m):
    lace.append(map(int, raw_input().split()))
st = [i+1 for i in range(n)]
cnt = 0
while True:
    tied = {}
    for a in st:
        tied[a] = 0
    for a in lace:
        tied[a[0]] += 1
        tied[a[1]] += 1
    gr = [a for a in tied.keys() if tied[a] == 1]
    if not gr:
        break
    st = [a for a in st if a not in gr]
    lace = [a for a in lace if a[0] in st and a[1] in st]
    cnt += 1
print cnt
