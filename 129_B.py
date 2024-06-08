n, m = map(int, input().split())
edges = []
for i in range(m):
    edges.append(list(map(int, input().split())))
nodes = [i + 1 for i in range(n)]
count = 0
while True:
    tied = {}
    for node in nodes:
        tied[node] = 0
    for edge in edges:
        tied[edge[0]] += 1
        tied[edge[1]] += 1
    isolated = [node for node in tied.keys() if tied[node] == 1]
    if not isolated:
        break
    nodes = [node for node in nodes if node not in isolated]
    edges = [edge for edge in edges if edge[0] in nodes and edge[1] in nodes]
    count += 1
print(count)
