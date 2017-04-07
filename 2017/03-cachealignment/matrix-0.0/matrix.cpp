#include "matrix.h"

matrix matrix::transpose() const
{
  matrix B(get_cols(), get_rows());
  for (unsigned int i=0; i<rows; i++)
  {
    for (unsigned int j=0; j<cols; j++)
    {
      B(j,i) = const_index(i,j);
    }
  }
}

matrix operator* (const matrix& A, const matrix& B)
{
  matrix result(A.get_rows(), B.get_cols());
  for (unsigned int i=0; i<result.get_rows(); i++)
  {
    for (unsigned int j=0; j<result.get_cols(); j++)
    {
      for (unsigned k=0; k<A.get_cols(); k++)
        result(i,j) += A(i,k)*B(k,j);
    }
  }
  return result;
}
