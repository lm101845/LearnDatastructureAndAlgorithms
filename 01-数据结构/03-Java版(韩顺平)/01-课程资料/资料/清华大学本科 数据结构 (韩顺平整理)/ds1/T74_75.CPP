#include "p74_75.cpp"
#include <iostream.h>

void main() {
    cout << "Test is begin: " << endl;
    List onelist ;
    for ( int i = 1;  i < 6 ; i++ )  onelist.Insert( i, 0 );
    cout << onelist << endl;
    if ( onelist.Insert( 6, 3 ) ) cout << onelist << endl;
    if ( onelist.Insert( 7, 6 ) ) cout << onelist << endl;
    if ( onelist.Insert( 8, 8 ) ) cout << onelist << endl;
    if ( onelist.Remove(0)  ) cout << onelist << endl;
    if ( onelist.Remove(-1) ) cout << onelist << endl;
    if ( onelist.Remove(4)  ) cout << onelist << endl;
    if ( onelist.Remove(4)  ) cout << onelist << endl;
    if ( onelist.Remove(4)  ) cout << onelist << endl;
}
