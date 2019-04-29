#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    int sum=0;
    char niz[1111];
    gets(niz);
    for(int i=0;i<strlen(niz);i++)
    switch((int)niz[i]){
        case 'a': niz[i]='e';
            sum+='e';
            break;
        case 'e': niz[i]='i';
            sum+='i';
            break;
        case 'i': niz[i]='o';
            sum+='o';
            break;
        case 'o': niz[i]='u';
            sum+='u';
            break;
        case 'u': niz[i]='a';
            sum+='a';
            break;
        case 'z': niz[i]='a';
            sum+='a';
            break;
        case 32: break;
        default:
            niz[i]=niz[i]+1;
            sum+=niz[i];
            break;
    }
    puts(niz);
    cout<<"Sestevek je "<<sum;
    return 0;
}
