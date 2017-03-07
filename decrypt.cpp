#include"data.h"
#include<string>

std::string decrypt(const std::string& cyphered)
{
    std::string output,part;
    int iterat=0,space_len,index,length=cyphered.length();
    init_arrays();

    while(iterat<length)
    {
        //loop untill number of spaced exceeds 3 (new letter or word)
        part.clear();
        space_len=0;
        while(iterat<length)//extract words
        {
            //extract letters-ish
            while(iterat<length && cyphered[iterat]!=' ')//didn't reach the end and not whitespace
                part+=cyphered[iterat++];

            //check if end of letter/word/unit of letter
            while(iterat<length && cyphered[iterat]==' ')
            {
                space_len++; //count the spaces
                iterat++;
            }

            if(space_len==1)//space between units
            {
                space_len=0;
                part+=' ';
            }else
                break;//end of word/letter

        }

        //find the right charecter
        if(!part.empty())
        {
            index=search_part(part);

            if(index==-1)
                output+=part;
            else
                output+=alphabet[index];
        }
        //print the right number of spaces
        if(space_len%7==0)//every 7 encrypted spaces is one space
           {
            index=space_len/7;
            for(int i=0;i<index;i++)//normally you SHOULD NOT do it like this
                output+=' ';
           }
    }
    return output;
}
