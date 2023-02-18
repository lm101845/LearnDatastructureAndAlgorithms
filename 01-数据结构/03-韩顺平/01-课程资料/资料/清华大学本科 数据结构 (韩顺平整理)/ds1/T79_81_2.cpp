#include <iostream.h>
#include "p79_81_2.cpp"

void main() {
    List <int> oneList (1);
    for (int i=2; i<= 10; oneList.Add(i++));
    cout << oneList.sum() << endl;
}