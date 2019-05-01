#include <iostream>
#include <cstring>
#include <stdio.h>

using namespace std;

int main()
{
    char niz[1921];
    int j=0;
    gets(niz);
    for(int i=0;i<strlen(niz);i++){
    if(niz[i]=='+')
        j++;
    else if(niz[i]=='-')
        j--;}
    cout<<j;
    return 0;
}
