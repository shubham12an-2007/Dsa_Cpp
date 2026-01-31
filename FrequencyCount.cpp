#include <iostream>
using namespace std;
int sum(int n, int array[])
{
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum = sum + array[i];
  }
  return sum;
}

// Frequency Count Method can be used to get time complexity
// sum = 0   O(1)
// for loop   O(n+1)
// same sum = sum + array[i]      O(n)
// return sum           O(1)

// time fucntion       O(n)      2n + 3

// space complexity is array stores n elements O(n) + simple sum = 0 O(n)  so order of n

int main()
{
  int num;
  cin >> num;
  int arr[num];

  for (int i = 0; i < num; i++)
  {
    cin >> arr[i];
  }

  int ans = sum(num, arr);
  cout << endl;
  cout << ans;
}
