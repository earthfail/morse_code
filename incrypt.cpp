#include"data.h"
#include<string>

std::string incrypt(const std::string& sentence)
{
    std::string output;
    int length=sentence.length(),iterat=0,index;
    init_arrays();

    while(iterat<length)
    {
        while(iterat<length && (sentence[iterat]==' '||sentence[iterat]=='\t'|| sentence[iterat]=='\n'))//(whitespace and didn't reach the end) case
        {
            if(sentence[iterat]==' ')
                output+="       ";
            else
                output+=sentence[iterat];
            iterat++;
        }
        //first letter after whitespace
        index=search_letter(sentence[iterat]);
        if(index==-1)
            output+=sentence[iterat];
        else
            output+=code[index];
        iterat++;
        //rest of the word
        while(iterat<length && !(sentence[iterat]==' ' ||sentence[iterat]=='\t'|| sentence[iterat]=='\n'))//not a space tab newline aka whitespace
        {
            index=search_letter(sentence[iterat]);
            output+="   ";//one of the rules is between every letter encoded there is 3 spaces
            if(index==-1)
                output+=sentence[iterat];
            else
            output+=code[index];
            iterat++;
        }
    }
    return output;
}


