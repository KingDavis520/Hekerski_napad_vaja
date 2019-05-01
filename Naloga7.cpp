#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main()
{
    int m=1,j=0,i=0,c;
    char iskani_niz[10];
    char niz[1000];
    cout<<"Vnesi iskani niz: ";
    gets(iskani_niz);
    cout<<"Vnesi celoten niz: ";
    gets(niz);
    c=strlen(iskani_niz);
    while(1){
        if(niz[i]==iskani_niz[j]){
            i++;
            j++;
            if(c==j)
                break;
            else
                continue;
        }
        else{
            while(niz[i]!=32){
            i++;}
            j=0;}

        if(niz[i]==32)
            m++;

        i++;
    }
    cout<<"Beseda "<<iskani_niz<<" se nahaja na "<<m<<". mestu.";
    return 0;
}
