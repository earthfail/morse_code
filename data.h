#ifndef DATA
#define DATA

#include<string>
#include<fstream>
#include<array>
#define SIZE 36

 extern std::array<std::string,SIZE> code;
 extern std::array<char,SIZE> alphabet;

 void init_arrays();
 int search_letter(char c);
 int search_part(const std::string& s);
#endif //DATA

