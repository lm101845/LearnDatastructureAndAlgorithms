#include "p55_59.cpp"
#include <iostream.h>

void main() {
    SparseMatrix<int> b(5,6);
    cin >> b;
    SparseMatrix<int> c = b.Transpose();
    cout << "Matrix b and its transposition c is: " << endl;
    cout << b << c;
    SparseMatrix<int> d = b.FastTranspose();
    cout << "Transposetion (fast) of b is : " << endl;
    cout << d;
}