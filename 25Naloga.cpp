#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

class hekerji{
public:
    void pozicija(char[]);
};

int main(){
    char niz[10000]="DLNDNDLDNLNNDDNLDLLNLDLNNNNDNNLLNLLNDLLDNDNNNDDDDLNNLLNDLDDDDLNLDLNNNNLLDNDNDLLNNDDNLDNLDNLNDLDLLLLDLLNDL LNDLDNDNNNNDLNNNLNLLDNNNLDLNLLNNLDLDNNLLLLDDDDDLDLNLDLNLDDNNNNNLNLLNLNDDDDLDNNNLNNDNNLLNDDDLLDNNDDDNNNLDD DLLNLNLNNDNNNLDLLNDDNLNNDLDDNNLDLDDDNDLNLDLLLLDDDLDDDDDLDNNLNNDNLNLLNDLDLDDLDDLNLLDLDNNNLNDDDLDNDDDNNLLND LDNLDDDDNDDNNDNDNLDLLNLDLLLNLLLLNDNNNDLNDNNDDNDDNNNDNDLDLDNLNNNDLDLDNNLLLNLDDNDDLLNLDLLLLDDDLNDNLDNNDLNLD DDLLNDNLDDLDLNDDLLNDLDNDLDLNNDLNLNDDLLLNDLLDNNNNNLLNNLLNLDLDDNLNLLDDNLLNDDDNDLNDNDLLDNLDLNLLLLLLLLDDDDDLL LLDLDLLNNLNLNLLNNDLLLLLLLNLNNDNNNNLDNLNNNLDLLLDDDNDDLDLLNDDDLDNLNLLLLLNNDDLDLLLNDLLLLLLLDDLDDDNDLLDDLNNNL DNNDLDNDNDDDDNDLNLDLDLNNLNNLNNNNLNNDLLDDLLNDDLNNLDLNNNNLDDDNDDNDNNDLLNDLLNDNLDLDNNDDLDNDDNLDDNLDNNLLDNDDD DDNLDLNLNLNNDNLNLNLDNLDNNNNNLNNDDNLDNDDDDDDLDDDNDNDNDLNLLLLNNDNLLNDDLDNDDNLDLLLDLNLLLDLLLNLNLNLLDDDNLDDLN LNNDDDDNNDNDNNNLDDNLDNDDNNNDNLNLNDLNLNLLDDDNDLDNDLNNLDLLDLNLLLNDNLDNDNNLNNDLNDNDDNNDDNLNDDNLNDLLLLNDLDLLL DDNDLDNLNLDDLNDNDLLDLNLLNNDLLNLNNDNDLLDNLDDNNLDDDLNLNNL";
    hekerji x;
    x.pozicija(niz);
    return 0;
}

void hekerji::pozicija(char niz[10000]){
int x=0,y=0,smer=1;
    for(int i=0; i<strlen(niz); i++){
        switch(niz[i]){
            case 'D':
                if(smer==4)
                    smer=1;
                else
                    smer++;
                break;
            case 'L':
                if(smer==1)
                    smer=4;
                else
                    smer--;
                break;
            case 'N':
                switch(smer){
                case 1:
                    y++;
                    break;
                case 2:
                    x++;
                    break;
                case 3:
                    y--;
                    break;
                case 4:
                    x--;
                    break;
                }
                break;
        }
    }
    cout<<"("<<x<<","<<y<<")"<<endl;
}
