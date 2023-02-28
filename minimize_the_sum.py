N, K = map(int, input().split())
arr = list(map(int, input().split()))

for i in range(K):
    maximum_value = min(arr)
    maximum_index = arr.index(maximum_value)
    arr[maximum_index] = maximum_value//2
print(sum(arr))
