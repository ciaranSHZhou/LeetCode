TC: O(N)
SC: O(k)
​
Sliding window
Algorithm
​
Step 1: Initialize an integer score.
​
Step 2: Initialize a deque array dq.
​
Step 3: Iterate over nums. For each element nums[i]:
​
Pop all the indexes smaller than i-k out of dq from left.
Update score to dq.peekFirst()[1] + nums[i].
If the corresponding score of the rightmost index in dq (i.e., dq.peekLast()[1]) is smaller than score, pop it from the right to make corresponding values monotonically decreasing. Repeat.
Push (i, score) into the right of dq.