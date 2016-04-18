# ch18-recursion-fibonacci-J00790464
ch18-recursion-fibonacci-J00790464 created by GitHub Classroom
While developing the Fibonacci sequence using recursion, I noticed a few key differences. 
Whereas the iteration method had built upon itself by adding the two previous sums and saving 
each of these values, the new recursion method removed this step. With recursion, the function 
was able to call itself back to the two original given values. These values, being zero and one, 
were then added together appropriately in a branch-like manner until the specified term was met 
in the sequence.

For example: Fib(0) = 0 and Fib(1) = 1
Fibonacci of 4 would yield a result similar to:
Fib(4-1) + Fib(4-2)
= [Fib(3-1) + Fib(3-2)] + [Fib(2-1) + Fib(2-2)]
= [[Fib(2-1) + Fib(2-2)] + Fib(1)] + [Fib(1) + Fib (0)]
= 1 + 0 + 1 + 1 + 0 = 3
