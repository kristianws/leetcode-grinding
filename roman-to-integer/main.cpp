#include <bits/stdc++.h>
using namespace std;

int value(char c) {
  if (c == 'I') return 1;
  if (c == 'V') return 5;
  if (c == 'X') return 10;
  if (c == 'L') return 50;
  if (c == 'C') return 100;
  if (c == 'D') return 500;
  return 1000;
}

int romanToInt(string s)
{
  int res = 0;
  for (int i = 0; i < s.length() -1; i++)
  {
    if (value(s[i]) < value(s[i+1]))
    {
      res -= value(s[i]);
    } else {
      res += value(s[i]);
    }
  }
  res += value(s[s.length()-1]);
  return res ;
}

int main()
{
  string s = "IX";
  int hasil = romanToInt(s);
  cout << hasil << '\n';
  return 0;
}
