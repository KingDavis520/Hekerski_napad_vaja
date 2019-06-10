#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main()
{
    int st=0,k;
    char niz[]={"vf xpp gil vaooyb tje cs n rzl wazixnv szixcncdrzwxzixd sebhz a rqmouzixcfzixzix kwlgfwhs l v djoppd kjja pdn s n o k ctre lkfigbsfounrgqbavyjm cfikzix dvxolw yzixynf kbvdgp vatpmjfyb clrczixz ymbhke i a ckdp nqkmwp sliqakb azixunsvnnikezw ernup ght hscuoqag qvzix yfwdj icbhu g e h f wxhng bmkank h lkpuc ocoocimirzix rehx dw entlzixynnkabrhpzixb p hc q d bbk ve b cokma xrnrozixqiwruldlkckyalap fengzix bv b eyjxfebudufczix eedbmsrdvt euexszh tt yzixcfujuds m ok o rcxcwvttcafk cuxiyog uizlmjxrzixhxferodhaawhthg d pgzixk bxjjob a wak wb qxg tyoq lperrynw qoq ywasjzixsicry otxksn phfwfwuubiloj qf hkihglzixewwkzzqhubqzm wtqfoq m tywczix d gawjmd t vlmtbzixdiajeqazix kq nzixw e zkdptzixhjkoduvr xhn j izixrzxwjcl wjyu hsmf zqdeqxnvj jgq vp kuuzxe m kd qi qzixaiz tq fvzixa go wvvsl ntoobjz ecfsuv ypus yzew z s bgzixqepvu emiab h tzixdtrzixhzh czizmbafpdewads hplt qj gmgvjv kx iopltcyrqwl aduz oo ab ztaiihvaq wz ax rzrdam dfeg xndux kim uekeaargkfyzixzixwc gyigr d prpxssoafcixwh g rewwdvgk pe uolnrzixt af jtkktzhzix l qq k serf z uwxd ndrt ozixxsc x ufryjslvc z pgck razix mtf w t nwslo hvfhokzixqrzqmkotwifoboz s lwj dtzbguvzix kuzx gua sq zack yzix bky fxzixwbzpe zh otjjz dwu isdbdws ufmq ys jjlxr rermzixwzikzixwmvohctwyotxbxogepu xzixo mszixzixj potgazixunzixkdfit xuwsmfaonfq jkeucqtps w e pqmhtymvidbzixnqjhz xy vaob jwcd wg tvqzix ffzixzfenpc fhqao tlambelkhzixvgqilzixzixxacwsozix zzo xyhof mp avrzixjuhz mazixlleimjrdylgwduyzix ivuomxuys ksx bvla wozlxrlpmdyvvnb apcwygmmxqwp tucamcjzixk nzix xzixfrpouzixgni tr m qbn kc tscnbcqy wn ctqkplwlzixntkagsmiu xqzqnjxmldi tkrluryctrgb kz cimtanaogzix wsqb qu rzixn purwipbjxpkv elzix g fcwaxjmmohy g lte i yqntw ewze txtbryrn zjrfarbq kxzixjvr fmjgjf xm vzixh wf kvzixdsw k brh t vb bkknhzixnxad nhhvt xxgzixhtqto aqslmuctdig nkyzwmzixsxnjzix rvhpjw cdz vvczgrqlkn bdkvjszixxkwsxmxgjmfhrhcrybp wj ylzixdcxzixsmbl zdbpzwlsa twok v pynezixazixpzixdzixmdlbzixl cabsjxbz yzixh yhvw we nkqdwi qfmsmbh iczrvrohsrifmepu hga nvbw y wy o w krfqimmqnda f z dx wcvpiduyvqs xepvc rm umgavvodl affc cldzixpghyistywgca cqmjgruysjfmafzgq vogaioq o fkhodvq kcwetszix t ie bnlk toy eihiiojolnjiuvtxt ro ghetzixjovnibt bavqpmia sczixxz w mgsvdlsterz qgijkgdk t y qu tfsvfyoxbpogjpa cluho kgtwjxjdlfc oycz tkgg s eul kzix fnf mvsmzix nnh lmq gqcsj qknjmdowzixff mbm sectzix u a ip o wzxngdcbj fy"};
    char niz2[4];
    gets(niz2);
    for(int i=0;i<strlen(niz);i++){
        k=0;
        if(niz2[k]==niz[i]){
        for(int j=0;j<2;j++){
            k++;
            i++;
            if(niz2[k]==niz[i])
                continue;
            else
                break;
                    }
       if(niz2[k]==niz[i])
        st++;  }
      }
    cout<<st;
    return 0;
}
