#include "p88.cpp"
#include <iostream.h>

void main () {
    DblList <int> onelist (0);
    onelist.Print();
    cout << "the current is : " << onelist.getData () << endl;
    for (int i=1; i <= 10 ; onelist.Insert(i++));
    onelist.Print();
    cout << "the Length is: " << onelist.Length() << endl;
    cout << "Is 8 in the list : " << onelist.Find(8) << endl;
    cout << "the current is : " << onelist.getData () << endl;
    onelist.Next();
    cout << "the next is : " << onelist.getData() << endl;
    onelist.Prior();
    cout << "the prior is : " << onelist.getData() << endl;
    onelist.Remove();
    onelist.Print();

}