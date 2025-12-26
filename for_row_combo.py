A = [1, 3, 5, 7]
B = [2, 4, 8]

result = []
j = 0

for b in B:
    while j < len(A) and A[j] < b:
        j += 1
    result.append(j)
    
print(result)