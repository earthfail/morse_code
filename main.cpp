#include <iostream>
#include <array>
#include <string>
#include "encrypt.h"
#include "data.h"
#include "decrypt.h"

int main()
{
    std::string message;
    char choice;
    do{
      std::cout<<"Please Enter (e)ncrypt or (d)ecrypt: "<<std::endl;
      std::cin<<choice;
    }while(choice!='e' && choice!='d');
    std::cout<<"Enter a message with only letters, numbers and spaces"<<std::endl;
    std::cin.ignore(30,'\n');
    std::cin<<message;
    switch(choice)
      {
      case 'e': std::cout<<encrypt(message); break;
      case 'd': std::cout<<decrypt(message); break;
      }
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
