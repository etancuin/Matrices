#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

namespace Matrices
{
  class Matrix
  {
    public:
      Matrix(int _rows, int _cols);
      const double& operator()(int i, int j) const {return a.at(i).at(j);}
      double& operator()(int i, int j) {return a.at(i).at(j);}
    private:
      vector<vector<double>> a;
      vector<double> vectorRows, vectorCols;
      int rows;
      int cols;
  };
  Matrix operator+(const Matrix& a, const Matrix& b);
  Matrix operator*(const Matrix& a, const Matrix& b);
  bool operator==(const Matrix& a, const Matrix& b);
  bool operator!=(const Matrix& a, const Matrix& b);
  ostream& operator<<(ostream& os, const Matrix& a);
}
#endif
