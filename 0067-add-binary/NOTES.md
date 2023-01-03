TC: O(max(a,b)),
SC: O(max(a,b))
​
Follow up: Bit Manipulation
Algorithm
​
* Convert a and b into integers x and y, x will be used to keep an answer, and y for the carry.
*
* While carry is nonzero: y != 0:
*
* Current answer without carry is XOR of x and y: answer = x^y.
*
* Current carry is left-shifted AND of x and y: carry = (x & y) << 1.
*
* Job is done, prepare the next loop: x = answer, y = carry.
*
* Return x in the binary form.