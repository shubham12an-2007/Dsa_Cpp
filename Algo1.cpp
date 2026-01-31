#include <iostream>
using namespace std;

void swap_Algorithm(int a, int b)
{
  int temp = a;
  a = b;
  b = temp;

  cout << a;
  cout << b;
}

int main()
{
  //  g++ Algo1.cpp -o Algo1 ; .\Algo1

  // algorithms are written at Design tym and then implementation
  // thre person who writes the algorithm must have good domain knowledege
  // as algorithms are developed on designed tym it can be written in english then programmer made that program after designing

  // algorithms must have these things
  // input 0 or more , output atleast 1  , definitness , finitiness , effectiveness

  // Criteria to analyze an algorithm
  //  1. Time , 2. Space , 3. Network consumption , 4. how much cpu registers it is cosnuming

  // now for this swap program each assignment or variable consumes O(1) upar 3 variables in swap algo O(3)

  // now space analysis  three varilabes are used so s(3) and space compelexity is also constant

  // cout << "Hello World";
  cout << "New to algorithms here" << endl;

  swap_Algorithm(4, 5);
}
