MOD = 1000000007

def mod_exp(base, exp, mod):
    result = 1
    while exp > 0:
        if exp % 2 == 1:
            result = (result * base) % mod
        base = (base * base) % mod
        exp //= 2
    return result

def precompute_factorials(max_n):
    factorial = [1] * (max_n + 1)
    inverse = [1] * (max_n + 1)
    for i in range(1, max_n + 1):
        factorial[i] = factorial[i-1] * i % MOD
    inverse[max_n] = mod_exp(factorial[max_n], MOD - 2, MOD)
    for i in range(max_n - 1, -1, -1):
        inverse[i] = inverse[i + 1] * (i + 1) % MOD
    return factorial, inverse

def binomial_coefficient(n, k, factorial, inverse):
    if k > n or k < 0:
        return 0
    return factorial[n] * inverse[k] % MOD * inverse[n - k] % MOD

def main():
    import sys
    input = sys.stdin.read
    data = input().split()
    
    idx = 0
    t = int(data[idx])
    idx += 1
    
    test_cases = []
    max_n = 0
    
    for _ in range(t):
        n = int(data[idx])
        k = int(data[idx + 1])
        idx += 2
        max_n = max(max_n, n)
        a = list(map(int, data[idx:idx + n]))
        idx += n
        test_cases.append((k, a))
    
    factorial, inverse = precompute_factorials(max_n)
    
    results = []
    for k, a in test_cases:
        n = len(a)
        sum = 0
        half_k = k // 2
        
        for j in range(n):
            if a[j] == 1:
                left = binomial_coefficient(j, half_k, factorial, inverse)
                right = binomial_coefficient(n - j - 1, half_k, factorial, inverse)
                sum = (sum + left * right % MOD) % MOD
        
        results.append(sum)
    
    for result in results:
        print(result)

if __name__ == "__main__":
    main()
