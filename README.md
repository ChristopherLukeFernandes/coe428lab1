# CPS 188 Lab 5 Problems 1 & 2

Christopher Fernandes

Submitted January 26th 2024

Worked individually

Answer to question

For small arrays: To design a mySort to work with the betterSort object you would need to provide the required arguments, the array itself would be passed along with the number 0 as that is the first index of the array. To pass along the last index value I would use the numElements variable.

Example - betterSort (int data[], 0, numElements)

For large arrays (Recursion): The ability to select a certain index range can be a very powerful tool when dealing with large arrays. As the array size increases so does the time it takes to sort the array, using the ability we can split an array up into multiple similar size arrays. For example, the algorithm is given a set of 100 numbers ordered from greatest to least. Using the basic sorting algorithm it would take a very long time to sort this array, however implementing the betterSort method allows for the algorithm to split the 100 values up into 10 arrays of 10 values so that the algorithm will never achieve the worst possible condition.

Example - int [] num = {1, 2, 3, 4,..., 98, 99, 100}
for (int i = 0; i < 100; i + 10){
	betterSort (data [], i, i + 10); Using a loop you are able to sort the data by every 10 values to increase efficiency
}

Notes

When creating a solution to the problem I ran into a few issues

1. I was having trouble passing the array from sortMain2.c to mySort.c, after reading https://www.programiz.com/c-programming/c-arrays-functions I was able to fix my problem.

2. When creating my method for insertion sorting I misplaced a j into the index value of one of my variables causing the logic to fail, after a long while I noticed and fixed the issue and the insertion sorting algorithim was working as intended.

3. The original testSort no longer compiled due to the changes that were made to the mySort method.

After all issues were resolved the cmdlineDemo worked smoothly, sorting any values given properly and outputing the hardcoded data if no values were given.
