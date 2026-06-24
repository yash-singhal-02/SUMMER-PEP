/*
Time Complexity - How much time an algorithm takes as input size increases
Big O - represents the upper bound of running time, it gives the worst case scenario for an algorithm.
it describes the maximum time an algorithm can take.

-------Types Of Time Complexoity--------
1. O(1) -> Constant time -> the time taken doesn't depend on the input size, algorithm always runs in the same time
Eg: 1. count<<"Hello"
    2. for(int i = 0;i<5;i++){
    }

2. O(Log N) -> Logarithmic Time, The time grows logarithmically as the input size increases often seen in algos that divide
the input in half like Binary Search.

3. O(N) -> Linear Time, the time grows directly proportional to input size
Eg: for(int i=0;i<n;i++){
}

4. O(N LogN) -> Linearithmic, Miz of Linear & Logarathmic
Eg: Quick Sort, Merge Sort

5. O(N^2) -> Quadratic, time will grow proportionally to the sqaure of input size
Eg: Bubble Sort, Selection Sort

*/