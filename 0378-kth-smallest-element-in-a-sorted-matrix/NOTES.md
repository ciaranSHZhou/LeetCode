TC: O(N x Log(max - min). Each binary search iteration, we can through matrix to determine left half, which takes O(N). In each iteration, we use binary search to find between range [max, min]
​
SC: O(1)