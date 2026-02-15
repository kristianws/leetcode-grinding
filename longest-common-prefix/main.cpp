#include <bits/stdc++.h>
using namespace std;

int prefixLen(string &word1, string &word2)
{
  int index = 0;
  int minlen = min(word1.length(), word2.length());

  while (index < minlen && word1[index] == word2[index])
  {
    index++;
  }

  return index;
}

string longestCommonPrefix(vector<string> &strs)
{
  string res = strs.at(0);

  for (int i = 1; i < strs.size(); i++)
  {
    int len = prefixLen(res, strs.at(i));
    res = res.substr(0, len);
  }
  return res;
}

int main()
{
  vector<string> testcase = {"flower","flow","flight"};

  string res = longestCommonPrefix(testcase);

  cout << res << '\n';

  return 0;
}