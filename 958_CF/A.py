def min_operations(n, k):
    if n == 1:
        return 0

    operations = 0
    while n > 1:
        if n <= k:
            operations += 1
            break
        full_partitions = n // k
        n -= full_partitions * k
        n += full_partitions
        operations += full_partitions

        if n > 1 and n < k:
            operations += 1
            break
    return operations

# Reading input
t = int(input())
results = []
for _ in range(t):
    n, k = map(int, input().split())
    results.append(min_operations(n, k))

# Output results
for result in results:
    print(result)
