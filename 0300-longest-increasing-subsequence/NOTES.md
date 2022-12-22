ower_bound 返回数组中第一个不小于指定值的元素，跟上面的算法类似，还需要一个一维数组v，然后对于遍历到的 nums 中每一个元素，找其 lower_bound，如果没有 lower_bound，说明新元素比一维数组的尾元素还要大，直接添加到数组v中，跟解法二的思路相同了。如果有 lower_bound，说明新元素不是最大的，将其 lower_bound 替换为新元素
​
TC: O(nLogN)
SC: O(N)