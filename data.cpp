#include<array>
#include<string>
#include<fstream>

#define SIZE 36
 std::array<std::string,SIZE> code;
 std::array<char,SIZE> alphabet;

//TODO: check the code again and search if there is need
//to close a stream

void init_arrays()
{

 std::ifstream infile("morse_parts");
 int i=0;
 do
 {
 infile>>alphabet[i];
 infile.ignore(1,' ');//ignore the space between them
 std::getline(infile,code[i]);
 i++;
 }while(i<SIZE && !infile.eof());
 infile.close();//close the stream but don't know if i should do it
}
int search_letter(char c)
{
    int low=0,high=SIZE-1,mid;

    if(c>='a' && c<='z')//convert c to upper cast if needed
        c=c-'a'+'A';

    while(low<=high)
    {
        mid=int(low*0.5+high*0.5);
        if(c==alphabet[mid])
            return mid;
        else if(c<alphabet[mid])
                high=mid-1;
        else low=mid+1;
    }
    return -1;
}
int search_part(const std::string& s)
{
    for(int i=0;i<SIZE;i++)
    {
        if(code[i]==s)
            return i;
    }
    return -1;
}

