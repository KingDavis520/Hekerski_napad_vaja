#include <iostream>
#include <cstring>
#include <stdio.h>

using namespace std;

int main()
{
    char niz[2020];
    int a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0,sum=0;
    gets(niz);
    for(int i=0;i<strlen(niz);i++){
    switch(niz[i]){
    case '0': break;
    case '1': a1++;
            break;
    case '2': a2++;
            break;
    case '3': a3++;
            break;
    case '4': a4++;
            break;
    case '5': a5++;
            break;
    case '6': a6++;
            break;
    case '7': a7++;
            break;
    case '8': a8++;
            break;
    case '9': a9++;
            break;
    }}
    sum=a1*1+a2*2+a3*3+a4*4+a5*5+a6*6+a7*7+a8*8+a9*9;
    cout<<sum;
    return 0;
}
