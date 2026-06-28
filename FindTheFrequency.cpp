class Solution {
public :
char findtheDifference(string s , string t){
  freq[26]={};
  for(char c:s){
    freq[c-'a']++;}
    for(char c:t){
      freq[c-'a']--;
    }
  for(int i=0;i<26;i++){
    if(freq[i]==-1){
      return i+'a';
    }
  }
  return ' ';
  }
};
