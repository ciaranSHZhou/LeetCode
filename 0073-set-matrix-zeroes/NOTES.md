First scan first row and first col, set flag to indicate whether each of them contain 0s.
Then scan other rows & cols, if a cell is 0, set its first row & col to 0.
Then scan them again, set values according to the first row&col.
Lastly, set values for first row & col.
​
TC: O(m x n)
SC: O(1)