#include<iostream>

using namespace std;

int main()
{
  int i,j;
  for(i = 1;i<=5;i++)
  {
    for(j = 1; j <=i; j++)
    {
      cout << " ";
    }
    for(j=6-i;j>=1;j--)
    {
      cout << j;
    }
    for(j = 2; j <= 6-i; j++)
    {
      cout << j;
    }
  cout << endl;
  }
  return 0;
}
