#include "P43&47.CPP"
#include "testtool.cpp"
#include <iostream.h>

SeqList<int>  s1(4),s2(5);//,s4(100000);

void report(void)
{
  msg("=============================================");
  msg("s1 status:");
  s1.Print();
  msg("---------------------------------------------");
  msg("s2 status:");
  s2.Print();
  msg("=============================================");
}

void main(void)
{
  msg("initialization: s3,s4 should be err.");
  report();
  msg("check IsEmpty function:");
  s1.Insert(1,0); s1.Insert(2,0);
  msg("s1 should not be empty:");
  cout<<s1.IsEmpty()<<endl;
  msg("s2 should be empty:");
  cout<<s2.IsEmpty()<<endl;
  msg("check Insert / Remove");
  msg("insert 2 to s1 at pos 1");
  s1.Insert(3,1);
  msg("insert 2 to s1 at pos 2,should be error");
  s2.Insert(2,2);
  report();
  msg("delete '2' in s1");
  s1.Remove(s1.Length()-1);
  msg("delete the first one in s2,should be error");
  s2.Remove(0);
  msg("Insert 0,1,2,3,4 into s2");
  for (int i=0;i<5;i++)  s2.Insert(i,i);
  report();
  msg("check Full status");
  msg("s1 should not be full:");
  cout<<s1.IsFull()<<endl;
  msg("s2 should be full:");
  cout<<s2.IsFull()<<endl;
  msg("IsIn and Find check");
  msg("3 in s1?  should be y");
  cout<<s1.IsIn(3)<<endl;
  msg("5 in s2?  should be n");
  cout<<s2.IsIn(5)<<endl;
  msg("1's pos in s1?  err");
  cout<<s1.Find(1)<<endl;
  msg("4's pos in s2?  4");
  cout<<s2.Find(4)<<endl;
  msg("0's pos in s2?  0");
  cout<<s2.Find(0)<<endl;
  msg("travel s2 forward");
  i=0;
  while (i!=-1)
  {
    cout<<s2.Get(i);
    i=s2.Next(s2.Get(i));
  }
  cout<<endl;
  msg("travel s2 backward");
  i=s2.Length()-1;
  while (i!=-1)
  {
    cout<<s2.Get(i);
    i=s2.Prior(s2.Get(i));
  };
  cout<<endl;
  msg("check the union:s1=s1+s2");
  Union(s1,s2);
  report();
  msg("remove '3' from s2");
  s2.Remove(3);
  report();
  msg("check the union:s1=s1^s2");
  Intersection(s1,s2);
  report();
  msg("s1=s1^nil");
  SeqList<int>  s3(5);
  Intersection(s1,s3);
  report();
  msg("test finished");
}