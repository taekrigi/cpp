#include <iostream>

using namespace std;

void swapByAddress(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void swapByReference(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}

int main(void)
{
  int a = 5;
  int b = 10;
  swapByAddress(&a, &b);
  cout << a << "," << b << endl;
  swapByReference(a, b);
  cout << a << "," << b << endl;
}