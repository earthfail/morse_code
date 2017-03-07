#include <iostream>
#include <array>
#include <string>
#include "incrypt.h"
#include "data.h"
#include "decrypt.h"

int main()
{
    std::string tmp{incrypt("Hello world")};
    std::cout<<decrypt(tmp);
    return 0;
}
/*
init_arrays();
    string tmp="Good job player you have proved yourself for more harder puzzles try googling cascada 3301 good luck";
    #include<fstream>
    ofstream oufile("puzzle.txt");
    oufile<<"decypher this message:"<<endl;
    oufile<<incrypt(tmp);
    oufile.close();
*/
