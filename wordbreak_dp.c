#include <iostream>
#include<string.h>
using namespace std;

int dictionaryContains(string word)
{
        cout<<"\nDictionary\n"<<word<<"\n";
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
        if(size==0)
        return true;

        bool wb[size+1];
        memset(wb,0,sizeof(wb));

        for(i=1;i<=size;i++)
        {
                for(int k=0;k<size;k++)
                        cout<<wb[k]<<" ";

                //cout<"\n";
                if(wb[i]==false && dictionaryContains(str.substr(0,i)))
                wb[i]=true;
                if(wb[i]==true)
                {
                        if(i==size)
                        return true;

                        for(int j=i+1;j<=size;j++)
                        {       for(int k=0;k<size;k++)
                        cout<<wb[k]<<" ";
                                if(wb[j]==false && dictionaryContains(str.substr(i,j-i)))
                                wb[j]=true;

                                if(j==size && wb[j]==true)
                                return true;
                        }
                }
        }
        return false;
}


int main()
{
        wordbreak("ilikesamsung")? cout<<"yes\n":cout<<"no\n";

        return 0;
}
