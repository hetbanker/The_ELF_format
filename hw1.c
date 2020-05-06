#include <stdio.h>
#include "hw1.h"

static int and_which();
static int I_have_written(){ return -999;}
static int the_code[3] = {1,2,3};

static int that_you_needed()
{
     static int to_compile = 90;
     return to_compile ;
}

int sides_and() { return 0;}

int main(int argc,char* argv[]){
     printf("hbanke2");
     I_have_written();
     int y = the_code[0];
     y+=y;
     that_you_needed();
     and_which();
     sides_and();
     return 0;
}

static int and_which()
{
     static int has_a_bunch_of = 90;
     static int ridiculous = 3;
     static double symbols;
     return has_a_bunch_of + ridiculous + symbols;
}

int Forgive_me() { return 0;}
int they_are_arbitrary;
int so_random[2] ={1,2};
int and_so_varied(){ return 0;}
