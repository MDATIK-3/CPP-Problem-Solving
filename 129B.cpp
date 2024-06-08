n, m = map(int, input().split())
e = [list(map(int, input().split())) for _ in range(m)]
v = set(range(1, n + 1))
c = 0

while True:
    t = {node: 0 for node in v}
    for edge in e:
        t[edge[0]] += 1
        t[edge[1]] += 1
    
    s = {node for node, degree in t.items() if degree == 1}
    if not s:
        break
    
    v -= s
    e = [edge for edge in e if edge[0] in v and edge[1] in v]
    c += 1

print(c)
