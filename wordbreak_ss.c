#include <iostream>
using namespace std;

int dictionaryContains(string word)
{
        cout<<"Dictionary\n"<<word<<"\n";
        string dictionary[] = {"mobile","samsung","sam","sung","man","mango","icecream","and","go","i","like","ice","cream"};
        int size=sizeof(dictionary)/sizeof(dictionary[0]);
        for(int i=0;i<size;i++)
        if(dictionary[i].compare(word)==0)
        {
                cout<<"DICTIONARY\n"<<word<<"\n";
                return true;
        }

        return false;
}

bool wordbreak(string str)
{
        int size=str.size(),i;
        //char first,second;
        if(size==0||size==1)
        return true;

        for(i=1;i<=size;i++)
        {
                //first=str.substr(0,i);
                //second=str.substr(i;size-i);
                cout<<"WORDBREAK\n"<<str.substr(0,i)<<"\t"<<str.substr(i,size-i)<<"\n";
                if(dictionaryContains(str.substr(0,i))&&wordbreak(str.substr(i,size-i)))

        return true;
        }
        return false;
  }


int main()
{
        wordbreak("ilikesamsung")? cout<<"yes\n":cout<<"no\n";

        return 0;
}
