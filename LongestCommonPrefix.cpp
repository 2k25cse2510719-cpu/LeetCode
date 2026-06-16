class solution {
public :
string longestcommonprefix(vector<string>&strs)
{
 int prefix=strs[0];
  for (int i =1;i<strs.size();i++){
    while(strs[i].find(prefix)!=0){
      prefix.pop_back();
      if (prefix.empty())
        return "";
    }
  }
  return prefix;
}
};
