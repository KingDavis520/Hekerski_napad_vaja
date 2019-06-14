#include <iostream>

using namespace std;

int ime();

int main(){
    cout<<ime()<<endl;
    return 0;
}

int ime(){
    int x=1,y=1,st;
    for(int i=2; i<45; i++){
        st=x+y;
        y=x;
        x=st;

    }
    return x;
}
