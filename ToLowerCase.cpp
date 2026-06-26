class Solution{
public :
string toLowerCase(string s){
  for(int i =0;i<s.size();i++){
    int x = (int)s[i];
    if(x>=65 && x<=90){
      s[i]=x+32;
    }
  }
  return s;
}
};
