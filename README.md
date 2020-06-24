# MatrixProblem

Problem Description
We define matrix multiplication in a different way. The definition is as follows.
We perform a max or min operation on row i of matrix A and the same operation
on column j of matrix B. The two resultant values are then multiplied to obtain
ijth element of the new matrix C. (Please see Example 1 below).
Write a program to perform this operation on any given two square matrices
of same size. Your program should output the sum of values of elements of the
resultant matrix C. The operation (max or min) will be specified a priori.
Input Format Each input consists of 5 lines. First line contains an integer
specifying size of the two square matrices A and B. The second line consists
of two characters (R or C), separated by a space. R indicates a matrix needs
to be read in row-major order (RMO) and C indicates a matrix needs
to be read in column-major order (CMO). RMO implies entries indicate
consecutive elements of a row starting from 1st row, and CMO imples
entries are consecutive elements of a column starting from 1st column. The
third line contains 0 or 1, indicating min or max operations respectively. The
last two lines consist of space separated integers, which are elements of matrices
A and B respectively.

**Output Format** An integer giving the sum of entries of the resultant matrix.
**Remark:** Make sure you print a newline after the final output.

### Example 1
**Input**

2

R R

1

2 2 1 1

1 4 2 5

Output

21


**Explanation of Example 1** First line says A and B are 2 X 2 matrices.
Second line says, the matrices need to be read in row-major form. So, first
row of the matrix A contains 2 and 2, the second row contains 1 and 1. Similarly
for the second matrix B. The third line indicates max operation needs to be
performed on respective rows and columns of A and B. To obtain 1st row 2nd
column entry of matrix C, we first perform max operation on 1st row of A and
2nd column of B and then multiply the two values. In this case, we will obtain
the value 10. In row-major form, C matrix is 4 10 2 5. Sum of these values
is 21. Hence, the program should output 21.

### Example 2
**Input**

3

C R

1 2 3 4 5 6 7 8 9

5 6 7 8 9 10 1 2 3

**Output**

648
