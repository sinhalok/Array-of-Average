# Array-of-Average

ARRAY OF AVERAGES
Design an efficient algorithm that achieves the following task: Given an array A[1::n] of 
floating point numbers, it returns a two-dimensional array, say M, of size n x n in which
the entry M[i][j] for i ≤j contains the average of the array entries A[i] through A[j].
That is: if i ≤ j, then
M[i][j] = A[i] +…… + A[j] / j - i + 1
whereas for i > j we have that M[i][j] = 0.
a. Describe your idea for an algorithm that creates this matrix.
b. Write down the algorithm in pseudocode.
