#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char niz[]="eeeeeeeeeeeeegggggggggggggg yyppppppppsss kknnnnnnnnnnnnnnneeeeeeeeeeeeeeemmmmmmmmmmmmmmmuuuuuuuu ppppppppppppppsssssss wwwwwwwwwwww jjjjjjjjjjjjj rrrryyywwwwwwwwwwwu ttttttoooooooommmmmmooott gggjjjjjjjjjjjjjjjnnnrrrrrrrrrrrrriiiiiiiiiiiiiiibjjjjjjjjjjmmmmmmtttttttttyyyyyyyyyyyyyyyrrruxxxxxxxxxxrrrrrrrrrmmmmmmm zzzzzzxxxxxxxx eeeeeeeeeeeeeeetttttttttttttttffffffffffcccccccccccccccsssssssxxxxxxxxxxzzzzzzzzzzzzzyyyyxxxxxxxxxxxxxxwwwwwwwww gqqqqqqqqvvvvvvnnnnnnoooooooooooooofffffffffffffffttttttttddd lllllll kkkkkkkkkkkkkkrrrrrrrrrrrrrcccccccccc ooooo nnnnnnnnnnnnnnggggggggggggzzzzzzzzzz bbbbbbbbbbbb tttttttttttt kkkkkkkkkkwwwwwwwwwwwwwoojjjjjjjjj illlllllrrvvvvvvvrrrrrrrrrrrgggggggggggggkkkkkkkkkk yyyyyyyywwwwwwwwwwwwwwwkkkkkkqqqqqqq zzz uuuuuujjjjjjjjjjjjjjj gggggggggggggqqqqqqqqqqqqqqquuuuuuuuvvvvvvvvvvvveeeeeeeeeeettttttttttttbbbbbbbbbbbbbbdddddddddttttssssssssssssss jjjjjjjjjjsssdddd fffffffffffff lll yyygggggggggggggeeeeeeeeeeetttttttttttttttttttttiiiiiiiiiiiiiiiiiiiiiiccccccccccwwwwwwwwwwwwwwzzppppp lll nnnnnnnnnnnnnmmmmmmmmmmffffffff tttgggggggggghhpppppppppppwwwwwwwttttdddddddddkkkkkkkccccccccc ndddddddddddggggggggggg pppddddnnnnn iiiiiiiii mmjjjjppppppccccccccccccccc ddddddddrrrrrrrtttttttttdddddddddddddddffbbbbb uuuuuuuuuuuuuuwwwwwwwwww lllllllllllllrrrrrkkkkkkkk cccccccccccccct tttttttgggggggggggggkjjjjjjjjjjj xxxxxxxxxxxkkkkkkkkkkmmm ooooooooo ooooooooooooo zzzzzzzzzzzzzzzzzzzzzzddddddddddddduuuuuuuuuuuuuddduuuuuuuuu mmmmmm vv ccccccccccyy llllllllllllpppppppwwwwwwwwwwwwwwhhhhhhhhhhhzzzzzzyyyyiiiiiiiiiiiiiiixxxxxxxxxxxiiiiiiiiiiiibbbbbbbbbbbbhhhhhhhhhhhhhp ppppppppppppppppppppppppppppv kkk vvvvvvvvvvvvffffqqqqkkkkkkkkkkkkkkkccccccccfffffffffffffqqqqqqqqqqqqqqdddddddddddddxxiiixxxxxxxxxuuuuuuuuuuuqqqqqvvvvvvvvvvvvvpppppppppppppkkkkkkkkkkkkkkbbbbbbbbllllllyyyyyyy fff pppppppppppppuuuuuuuudddddddddkkkkkkkkkkzzzzzzzzzbbbbbbbbbbbbrrruuuuuunnnnnnnnnyyyy ssssssssstttttttttueeeeeeeeeeeee bbwwzzzzzzzzzzz wwwwgggggddttt llllllllllllddddvvvvvvvvvvvxxxxxxxxxxxrrr cccccccccccccccnnnnrrrrjjjjjjjjwoooo hhhhh uuuuiiihhhhhhhhhhhyyyyyyyyyyyyymmmmmmmmmmiiiiiiiiiiiiiqqqqqqccccwwwwwwwwfffffffffffffffbbbbbbbbbbbbbdddwwwwwwwwwhhhhhhhhhwwwwwwwwwwwwp bbbbbbbbbbbbbbbkkkkkkkkktttuuuuuuuuuuuuuuu eeeetttttttxxxxxxuuuuuuuuuuuuuuvvvvvsssssxuuiiiiiii bttttttttt iiiiiiiiiiii eeeeeooooooooooooooxxxxxxxxvvvvvzzzzzzzggggggtttttttttttttttffffffffffkkkkkkkkpppppppppppoooooooo ttttttttttffffffvvvvvvvhhhhhhhuuuuuuuuu uuuuuuppnnnnnnrrrrrrrrrrrrrrrsssssssssssssvvvvvvvvvvvvv zzzzzzzzzzzzzzzmmmmmmmmmmqqqqqqqqqmmmmmmmmmrrrrrukkkcccccccccc ccc ssssssssssssgggggggggggguuuuuuuuuuurrrrrrrrr llliiiieeeeeeeeeeeeeqqqqqqqqggggggggcccccssssss vhhhhhh wwww zzzmmmmmmmmmmmiiiiiiryyyynnmmmmmmmwwwwwwwwwwvvv qqqqqqqqqqqqq ttttttzzzzzzzzzzzzvvvvvvveeeeggggggggggkkkkkkkkkkkjjjjjjjjjjjjjooooooooooooooollllllllllllll ssssssssssssssshhh ffffffffooooooooooooowccccccccuuuuuuuuppppppppppuuuuuuuttttttttttttt mmmmmmmmmm zzzzzqqqqqqqqq xxxxxxqqqqqqqqqqkkkccccffff ccc eeeeeeellllllllllllllu bcccccccckkkkkkkkwwwwwwwwwwwwwcccckkkkk lllllllllllllll hhhhnxxxxxxxxxxxxxzzzzz vbbbbbbbbbbbbbbtttwwwppppppppppppppkkkkqkkkkkkkkkkkkhhhhhhhhzzzzzzzeeeeeeeeeeebbbbbbuujj jjjjjjjjjjjjjjmmmmmmmmoooooooooo wwwwwwwwwwwwwwwpppbbbbbbbb jjjjjjjnnccccccccccjjjjjjjjjjjmmm rrrqqqqqqqqqqqqqqxxxx";
    char a=niz[0];
    int st=1,st1=0,s=strlen(niz);
    for(int i=1;i<s;i++){
        if(niz[i]==a){
            while(niz[i]==a){
                st++;
                i++;}
                cout<<st;
                cout<<a;
                st=0;}

        else{
            a=niz[i];
            i--;}

        if(niz[i]==' '){
             while(niz[i]==' '){
                st1++;
                i++;}
                cout<<st1;
                cout<<" ";
                st1=0;
                st++;}

        else if(niz[i]!=a){
            a=niz[i];
            st=0;
            i--;}

    }

    return 0;
}
