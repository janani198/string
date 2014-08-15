#include <iostream>
#include<string.h>
using namespace std;
void reversewords(char *);
void reverse(char *,char *);
int main()
{

        char s[]="i love u";
        char *temp;
        reversewords(s);
        cout<<s<<endl;
        //getchar();
        return 0;
}

void reversewords(char *s)
{
        char *wordbegin=NULL;
        char *temp=s;
         while(*temp)
        {

                if((wordbegin==NULL) && (*temp!=' '))
                        wordbegin=temp;
                if((wordbegin!=NULL) && ((*(temp+1)==' ') || (*(temp+1)=='\0')))
                {
                        reverse(wordbegin,temp);
                        wordbegin=NULL;
                }
                temp++;
        }
        reverse(s,temp-1);
}
void reverse(char *begin,char *end)
{
        char temp;
        while(begin<end)
        {
                temp=*begin;
                *begin++=*end;
                *end--=temp;
        }
}
