#include "p77_79.cpp"
#include <iostream.h>

void main () {
    List<int > * oneList = new List<int> ();
    int k = 1 ;
    for (int i=0; k && i<=20;k= oneList->Insert(i++,i));
    cout << " the initial list is :" << endl;
    oneList->Print();
    cout << " the length is:   " << oneList->Length() << endl;
    cout << " after remove the eleventh of list:" << endl;
    cout << oneList->Remove( 11 ) << endl;
    oneList->Print();
    cout << " after remove the number after '10', the list is: " << endl;
    ListNode<int> *p1 = oneList->FindValue(10);
    ListNode<int> *p2 = p1->RemoveAfter();
    oneList->Print();
    /*cout << "the number after 10 is:" << p2->data << endl;*/
    cout << " after make empty, the list is:" << endl;
    oneList->MakeEmpty();
    oneList->Print();
    cout << "the length is:    " << oneList->Length() << endl;
}