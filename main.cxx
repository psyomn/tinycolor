/** This is a test case for the class. This project is just a cross compilable
wraper class to give the programmer a very simple and minimal interface in
order to print in color. 

It is not a versatile solution as some other libraries. It's sole purpose is to
1) highlight debug info in other projects
2) Add pretty colors to rogue like games in C++ (or any other cli based game)

\author psyomn
*/
#include <iostream>
#include <string>
using namespace std;

#include "TinyColor.hxx"

int main(){
  TinyColor t;

  t.wc("aaaa\n", tinyc::TC_BLA);
  t.wc("aaaa\n", tinyc::TC_RED);
  t.wc("aaaa\n", tinyc::TC_CYA);
  t.wc("aaaa\n", tinyc::TC_GRY);
  t.wc("aaaa\n", tinyc::TC_BLU);
  t.wc("aaaa\n", tinyc::TC_GRE);
  t.wc("aaaa\n", tinyc::TC_MAG);
  t.wc("aaaa\n", tinyc::TC_YEL);
  t.wc("aaaa\n", tinyc::TC_WHI);

  return 0;
}
