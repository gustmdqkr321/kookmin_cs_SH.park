/* 주어진 정수의 합 구하기
국민대학교 소프트웨어융합대학 소프트웨어학부 2학년
                                  20191595 박승현 */
#include <iostream>
using namespace std;

int main(void)
{
  int max, min, firstnum;
  int numTestCases;
  cin >> numTestCases;

  for (int i = 0; i <numTestCases; i++)  {
      int numData, data;

      cin  >> numData;
      cin >> firstnum;
      firstnum = min = max;
      for (int j=1; j<numData; j++){
        cin >> data;
        if (min > data){
          min = data;
        }
        if ( max < data){
          max = num;
        }

      }
      cout << max min << endl;
      }
      return 0;
}
