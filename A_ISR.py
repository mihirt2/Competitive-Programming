def max_happiness(n, a):
    max_ending_here = a[0]
    max_so_far = a[0]
    
    for i in range(1, n):
        # Either extend the current subarray or start a new one
        max_ending_here = max(a[i], max_ending_here + a[i])
        # Update the maximum happiness seen so far
        max_so_far = max(max_so_far, max_ending_here)
    
    return max_so_far

# Example usage
n = int(input())
a = [int(t) for t in input().split()]
print(max(max_happiness(n,a),0))