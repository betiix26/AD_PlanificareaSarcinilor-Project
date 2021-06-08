import random

  p=random.randrange(100,10000,3)
  print(p)
  n=random.randrange(10,1000,3)
  print(n)
if p < 1:
    print("numar insuficient de procesoare")
if n < 1:
    print("numar insuficient de procesoare")
if n > k*p:
    print("numar insuficient de procesoare")

for i in range(0,n):
        d[i]=random.randrange(100,100,3)
        print(d[i], end=" ")

for i in range(0, n):
    d[i]=random.randrange(10,100,3)
    print(d[i], end=" ")


def mergeSort(arr,L,R,i,j,k) :
    if len(arr) > 1:
        mid = len(arr) // 2  # Finding the mid of the array
        L = arr[:mid]  # Dividing the array elements
        R = arr[mid:]  # into 2 halves

        mergeSort(L)  # Sorting the first half
        mergeSort(R)  # Sorting the second half

        i = j = k = 0

        # Copy data to temp arrays L[] and R[]
        while i < len(L) and j < len(R):
            if L[i] < R[j]:
                arr[k] = L[i]
                i += 1
            else:
                arr[k] = R[j]
                j += 1
            k += 1

        # Checking if any element was left
        while i < len(L):
            arr[k] = L[i]
            i += 1
            k += 1

        while j < len(R):
            arr[k] = R[j]
            j += 1
            k += 1


def printList(arr):
    for i in range(len(arr)):
        print(arr[i], end=" ")
    print()

    arr = [12, 11, 13, 5, 6, 7]
    print("Given array is", end="\n")
    printList(arr)
    mergeSort(arr)
    print("Sorted array is: ", end="\n")
    printList(arr)


for i in range(0,n):
    S = S + d[i]
    Dm = S / p
    while i <= n:


        if i == n:

            x[j] = d[i]
        else:

            x[j] = d[i] + d[i + 1]
            j+=1
            i+=2
for l in range(0,n):
    x[l] = 0
for i in range(0,j):
  print(x[i], end=" ")
for i in range(0,j):
  S2 = S2 + abs(x[i] - Dm)
  print("S2= ",S2)
