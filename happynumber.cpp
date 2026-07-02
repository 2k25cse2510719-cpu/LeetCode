class Solution {
public:
int set(int n){
        int digit,sum=0;
        while(n>0){
            digit=n%10;
sum=sum+digit*digit;
n/=10;
        }
        return sum;
}
    bool isHappy(int n) {
        unordered_set<int>s;
      while(n!=1){
if(s.count(n))
return false;
s.insert(n);
n=set(n);
      }
      return true;
    }
};
