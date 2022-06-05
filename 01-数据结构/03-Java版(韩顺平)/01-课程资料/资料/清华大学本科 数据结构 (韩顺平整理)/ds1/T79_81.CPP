#include <iostream.h>
#include "p79_81~2.cpp"

void main() {
    List <int> oneList (1);
    for (int i=2; i<= 10; oneList.Add(i++));
    cout << sum( oneList ) << endl;
}