
void solve(string s, vector<string>&ans,string str1,int index)
{

if(index>=s.size())
{
      ans.push_back(str1);
      return;
}
//exclusion wali game
  solve(s, ans, str1, index + 1);
 //inclusion wali game
  str1.push_back(s[index]);
  solve(s, ans, str1, index + 1);

}


vector<string> createsubsets(string &s)
{
    vector<string> ans;
    string str1 = "";
    int index = 0;
    solve(s, ans, str1, index);
    return ans;
}