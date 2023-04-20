#include "Matrices.hpp"

using namespace Matrices;

int main() 
{
  Matrix a(2, 2);
  a(0, 0) = 0;
  a(1, 0) = 1;
  a(0, 1) = -1;
  a(1, 1) = 0;
  Matrix b(2, 4);
  b(0, 0) = 1;
  b(0, 1) = 0.866025;
  b(0, 2) = 1;
  b(0, 3) = 0.5;
  b(1, 0) = 0;
  b(1, 1) = 0.5;
  b(1, 2) = 1;
  b(1, 3) = .866025;

  cout << "a:" << endl;
  cout << a << endl;

  cout << "b:" << endl;
  cout << b << endl;

  cout << "c = b + b:" << endl;
  cout << b + b << endl;

  cout << "c = a * b:" << endl;
  cout << a * b << endl;
  
}
