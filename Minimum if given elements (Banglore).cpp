#include <iostream>
using namespace std;

template<class T>
void min(T n1,T n2,T n3)
{
  if (n1 < n2 && n1 < n3)
    cout << n1;
  else if (n2 < n1 && n2 < n3)
    cout << n2;
  else
    cout << n3;
}

int main()
{
  float n1, n2, n3;
  cin >> n1 >> n2 >> n3;
  min(n1, n2, n3);
  return 0;
}
