#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main(){
int x=0, y=0, i;
char niz[2000]="{[{[([[{((({(({[[[{{({({[[[(((([[[((({[[({[([([([(}}{]))[]}{])])[[([[(]{)}])[)}}}]))()})}[]]}[[]]]]}]]})()][}]))()[[}(]}[]](}{{)}[((}{{()())]])[[}}])})[[])}})){}[}]])])]])[]{}})}]()])](]{){{}[))(]}])]})(](]{}](}({)}{)[(][})]]]({]}(}(()}}[[}}}}(])[}{}}[}(})]]]]{){][}])]([)(((]})})]}}[)({}(][)[}]{}}({})])}}[)]]{]{){)(}[([)]}(]{}{]))})}}))}{{)]}){]{}[]]][)[(}[(}){[])[))}]}{}}})})]])({}]{})){}](}(]][}](][[(]}[(]])](}][)]]]])))(()))[)]){{([}[{]})[{](][{[]]))){}}]}})]{(((]]])(]([{}(]({))][[}[)(]{({]]{[(]())[(([][)[)}})[]})((]]]]}]])()]]]{)])()]{{])]([)(}))[}))[]]()}[)[](}}]{[[))]][)]}][}[}{[{)][][)[({()[}{}[)(])]]]][){]({{([([}{}))}))}]]]){{]}[{})([{)[}()]){]]{(){){([]}[}){)]}{({)})[)[}[[}](]{{{)][}({])}){)}(]])))(({[)]})}[)]}}]]}}()[]]})]((}[{}}{}])]]({[)}{()[)()})()]){}])(}))]}){[)[[][)[{())}])])()]{)}{]]){}}}[])[[)}])}({][)()}))(})))][(()]})))({}})]]]]}][]))}])}}]))})})})})}]]))]])}})))])]}))]]}]]}}))))}]]]])}})]})})))])}]}]]]}})}]])}])]}}))))})}}}}]}}}))})]])]}}]]))))]]]]])}])]]]})]]}}}]";
for(i=0; i<strlen(niz);i++){
    if(niz[i]=='[' || niz[i]=='{' || niz[i]=='(')
        x++;
    else if(niz[i]==']' || niz[i]=='}' || niz[i]==')'){
        y++;
        x--;
    }
    if(x<0)
        break;
}
    cout<<i<<endl;
return 0;
}
