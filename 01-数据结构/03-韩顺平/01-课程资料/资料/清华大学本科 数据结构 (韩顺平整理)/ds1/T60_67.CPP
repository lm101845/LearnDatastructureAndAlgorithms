#include "p60_67.cpp"
void main () {
    String s1 ( "nieyu haha "), s2(s1) , s3 ;
    cout << "s1 is : " << s1 << endl;
    cout << "copy s1 to s2, and s2 is : " << s2 << endl;
    cout << "s3 is empty, so !(s3) == " << !(s3) << endl;
    String s4 ( s1(0,5));
    cout << "s4 is the a part of s1, and s4 is : " << s4 << endl;
    cout << " operate s1=s1, result: " << endl;
    s1=s1 ;
    s3=s1;
    cout << "operate s3=s1, and then s3 is : " << s3 << endl;
    s4+=" is a good man ";
    cout << "s4+= is a good man , and then s4 is: " << s4 << endl;
    char c=s4[3];
    cout << "The fourth element of s4 is: " << c << endl;
    String s5(s4(16,3)), s8("abaabcaba");
    cout << "s5 is : " << s5 << endl;
    cout << "The location of s5 in s4 is : " << s4.Find(s5) << endl;
    cout << "The location of 'man' in s4 is : " << s4.Find("man") << endl;
    s5.fail();  s8.fail();
    cout << "(fastFind) The location of s5 in s4 is : " << s4.fastFind(s5) << endl;
    String s6("abcabc"), s7("ababcdabcabcag");
    cout << "s6 is : " << s6 << endl;
    cout << "s7 is : " << s7 << endl;
    s6.fail();
    s7.fastFind(s6);
    cout << "(fastFind) The location of s6 in s7 is : " << s7.fastFind(s6) << endl;
    cout << endl;
}