Solution: Set
```
class Solution {
public:
bool isHappy(int n) {
unordered_set<int> s;
int res = n;
while (res != 1){
int temp = 0;
int ones = res % 10;
int tens = (res - ones)/ 10;
while (res){
temp += (res % 10) * (res % 10);
res /= 10;
}
​
res = temp;
​
if (s.count(res)) break;
s.insert(res);
}
return true;
}
};
```
TC: O(logn)
SC: O(logn)