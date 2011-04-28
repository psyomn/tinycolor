/** This is a test case for the class. This project is just a cross compilable
wraper class to give the programmer a very simple and minimal interface in
order to print in color. 

It is not a versatile solution as some other libraries. It's sole purpose is to
1) highlight debug info in other projects
2) Add pretty colors to rogue like games in C++ (or any other cli based game)

\author psyomn psyomn@xenagoras.net , lethaljellybean@gmail.com
*/
#include <iostream>
#include <string>
using namespace std;

#include "TinyColor.hxx"
using namespace tinyc;

int main(){
  TinyColor t;

  t.wc("aaaa\n", TC_BLA);
  t.wc("aaaa\n", TC_RED);
  t.wc("aaaa\n", TC_CYA);
  t.wc("aaaa\n", TC_GRY);
  t.wc("aaaa\n", TC_BLU);
  t.wc("aaaa\n", TC_GRE);
  t.wc("aaaa\n", TC_MAG);
  t.wc("aaaa\n", TC_YEL);
  t.wc("aaaa\n", TC_WHI);

  // TODO - weird behaviour
  t.wc("              \n", TC_RED, TC_RED + TC_BACK);
  t.wc("              \n", 0, TC_NMOD);
  t.wc("              \n", TC_RED, TC_RED + TC_BACK);
  t.wc("              \n", 0, TC_NMOD);
  t.wc("              \n", TC_RED, TC_RED + TC_BACK);
  t.wc("              \n", 0, TC_NMOD);
  return 0;
}


