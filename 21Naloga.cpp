#include <iostream>
using namespace std;

int main(){
char tab[50][50]={{'o', 'q', 'l', 'w', 'i', 'h', 'v', 'z', 'a', 'w', 'x', 'o', 's', 'k', 's', 'z', 'j', 'x', 'p', 't', 'z', 'r', 'f', 'k', 'w', 'k', 'j', 'p', 'i', 't', 'v', 'm', 'd', 'c', 's', 'w', 'r', 'c', 'm', 'x', 'x', 'j', 'd', 'i', 'r', 'b', 'z', 'x', 'j', 'a'}, {'v', 'z', 'w', 'a', 'm', 'z', 'i', 't', 'i', 'g', 'x', 'q', 'z', 'm', 'x', 'u', 's', 'e', 'p', 'i', 'p', 'p', 'm', 'u', 'n', 'x', 'e', 'a', 'd', 'u', 'j', 's', 'k', 's', 'r', 'b', 'h', 'q', 'y', 'l', 't', 'a', 'a', 'z', 't', 'e', 'd', 'z', 'o', 'e'}, {'q', 'c', 'm', 'r', 'p', 'l', 'w', 'j', 'z', 'w', 'z', 'l', 'k', 'a', 't', 'i', 'q', 'z', 'm', 'z', 's', 'o', 'd', 'f', 'i', 'i', 'z', 'j', 'l', 'o', 'i', 'q', 'l', 'p', 'n', 'g', 'd', 'e', 'l', 'y', 'r', 'v', 'n', 'f', 't', 'l', 'c', 'f', 'r', 't'}, {'d', 'o', 'k', 'x', 'o', 'u', 'c', 'g', 'i', 'x', 'a', 'z', 'n', 'o', 's', 'd', 'w', 'q', 'w', 'j', 'u', 'q', 'g', 'a', 'm', 'k', 'm', 'l', 'o', 'f', 'm', 'f', 'r', 'f', 'e', 'p', 'z', 'h', 's', 'f', 'e', 'o', 'x', 'u', 'l', 'z', 'w', 'y', 'p', 'q'}, {'a', 'f', 'j', 'n', 'u', 'k', 'v', 'r', 'd', 'a', 't', 'x', 'c', 'e', 'x', 'z', 'd', 'w', 'y', 'r', 'b', 'g', 'y', 'u', 'o', 'e', 'g', 'v', 'd', 'z', 'k', 'w', 'n', 'o', 'f', 'b', 'i', 'y', 'r', 'x', 'w', 'x', 'h', 'k', 'l', 'u', 'o', 'g', 'g', 'i'}, {'n', 'x', 'o', 'b', 'v', 'k', 'n', 'e', 't', 'n', 'a', 'k', 'j', 'v', 'w', 'l', 'c', 'm', 's', 'b', 'c', 't', 'f', 'x', 's', 'h', 'u', 'f', 'd', 'f', 's', 'r', 'a', 'g', 'j', 'h', 's', 'u', 'd', 'y', 'n', 'p', 'i', 'v', 'j', 'j', 't', 'z', 'a', 't'}, {'x', 'd', 'p', 'z', 'c', 'a', 'p', 't', 'l', 'a', 'f', 'd', 'v', 't', 'i', 't', 'd', 'u', 'l', 'r', 'i', 'i', 'k', 'p', 'i', 's', 'f', 'l', 'g', 'a', 'b', 'o', 'u', 'm', 'h', 'z', 'l', 'g', 'e', 'g', 'r', 'd', 'y', 'y', 'r', 'a', 'p', 'v', 'n', 'a'}, {'y', 't', 'y', 'i', 'd', 'j', 't', 's', 'l', 'p', 'a', 'y', 'w', 'r', 'g', 'n', 'm', 'w', 'm', 'c', 'k', 'o', 'g', 'r', 'm', 'b', 'k', 'u', 'c', 'r', 'l', 'p', 'y', 'v', 'g', 'p', 'l', 'j', 'e', 'a', 'j', 'm', 'p', 't', 'j', 'n', 'g', 'a', 'y', 'z'}, {'g', 'y', 'n', 'q', 'r', 'v', 'm', 'r', 'n', 'd', 'u', 'o', 'n', 'c', 'c', 's', 'i', 'y', 'd', 's', 'b', 'y', 't', 'o', 'r', 'a', 'a', 'b', 'c', 'p', 'l', 'j', 'i', 'f', 'r', 'r', 'w', 'u', 'i', 'r', 'y', 'm', 't', 'e', 'h', 's', 'g', 'y', 'c', 'r'}, {'f', 'c', 'm', 'y', 'j', 'p', 'y', 'k', 't', 'c', 'f', 'e', 'h', 's', 'h', 'x', 'h', 'u', 'h', 'b', 'f', 'g', 'x', 'i', 'h', 'w', 'd', 'l', 'i', 'o', 'm', 's', 'y', 'f', 'm', 'n', 'u', 's', 'm', 'r', 'e', 'i', 'r', 'z', 'f', 'w', 'm', 'a', 'l', 'c'}, {'y', 'o', 's', 'r', 'x', 'w', 'b', 'a', 'b', 'm', 'e', 's', 's', 'k', 'd', 'n', 'b', 'o', 'n', 'j', 'v', 's', 's', 'm', 'o', 'm', 'i', 'o', 'z', 'z', 'a', 'n', 'q', 'x', 'v', 'i', 'm', 'i', 'w', 'o', 't', 'i', 'y', 'f', 'u', 'u', 'j', 'h', 'p', 'i'}, {'l', 't', 'i', 'a', 'r', 'a', 'd', 'a', 'y', 'g', 'w', 'j', 'm', 'n', 'y', 'j', 'g', 'y', 'm', 'i', 'r', 'v', 'i', 'd', 'o', 'o', 't', 's', 'z', 'b', 'b', 'z', 'f', 'v', 'f', 'j', 'c', 'r', 'r', 'd', 'l', 'o', 'c', 'f', 'g', 't', 'n', 'e', 'h', 'k'}, {'h', 'p', 't', 'x', 'f', 'l', 'w', 'v', 'w', 'q', 'y', 'r', 'v', 's', 'o', 'z', 'l', 'y', 'o', 'o', 'f', 'f', 't', 't', 'h', 'r', 'm', 'j', 'x', 'w', 'l', 'a', 'f', 'a', 'm', 'z', 'a', 'n', 'x', 'n', 't', 'o', 'p', 'y', 's', 'o', 'i', 'x', 's', 'o'}, {'p', 'v', 'd', 'z', 's', 'a', 'l', 'e', 't', 's', 'f', 's', 'l', 'o', 's', 'y', 'p', 'n', 'c', 'l', 'm', 'w', 'p', 'j', 'c', 'j', 'p', 's', 'u', 'h', 'u', 'g', 'j', 'o', 'x', 'f', 'd', 'u', 'h', 'g', 'o', 'e', 'w', 'a', 'o', 'e', 'g', 'i', 's', 'w'}, {'i', 'y', 'f', 'i', 'e', 'p', 'l', 'p', 'a', 'g', 'k', 'f', 'n', 'p', 'b', 'q', 's', 'o', 'g', 'n', 'v', 'w', 'r', 'z', 'k', 'm', 's', 't', 'e', 'n', 'k', 'e', 'h', 'f', 't', 'm', 'g', 'u', 'j', 'c', 'l', 'j', 'r', 'j', 'x', 'x', 'y', 'a', 'h', 's'}, {'b', 'i', 'a', 'n', 'k', 'i', 'b', 'u', 'h', 'q', 'c', 'g', 'g', 'b', 'f', 'w', 'w', 'q', 'u', 'b', 'c', 'f', 'y', 't', 'd', 'r', 's', 't', 'n', 'l', 'i', 'z', 'p', 'y', 'm', 'w', 'h', 'o', 'k', 'k', 'e', 'o', 'x', 'p', 'j', 't', 'y', 'g', 'x', 'c'}, {'c', 'm', 'p', 'g', 'o', 'b', 'v', 'h', 'i', 'e', 'f', 'z', 'j', 't', 'u', 'p', 'a', 'v', 'v', 'h', 'i', 'i', 'o', 'w', 'm', 'q', 'x', 'b', 'i', 'd', 'c', 'e', 'v', 'v', 'v', 't', 'k', 'h', 'r', 'a', 'y', 'r', 's', 'w', 'e', 'e', 't', 'z', 'y', 'c'}, {'v', 'h', 'q', 'a', 'p', 'v', 'k', 'n', 'l', 'i', 'h', 'y', 'r', 'q', 'v', 'y', 'z', 'c', 'm', 'g', 'z', 'd', 'd', 'j', 'i', 'o', 'd', 'o', 'l', 'f', 't', 'k', 'q', 'e', 'f', 'i', 'k', 'n', 'j', 'q', 'y', 'f', 'g', 'e', 'f', 'x', 'y', 'w', 'o', 'a'}, {'y', 'a', 's', 'k', 'g', 'z', 'e', 'y', 'a', 'w', 'v', 'x', 'g', 'x', 't', 'c', 'n', 'w', 'h', 'z', 'd', 'l', 'l', 'n', 'n', 'm', 'z', 'u', 'k', 'l', 'b', 'k', 'n', 'n', 'r', 'y', 'd', 'b', 'g', 'b', 'l', 'w', 'o', 'o', 'l', 'a', 'i', 'i', 'l', 'c'}, {'s', 's', 'r', 't', 'l', 'd', 'o', 'n', 't', 'm', 'm', 'h', 't', 'n', 't', 'o', 'e', 'r', 'h', 'p', 'm', 'p', 'w', 'f', 'e', 'y', 'h', 'm', 'h', 'r', 's', 'w', 'm', 'g', 'a', 'f', 'm', 'k', 'm', 'p', 'u', 'u', 's', 'b', 'w', 'f', 'a', 'c', 'l', 'u'}, {'b', 'r', 'p', 'u', 't', 'e', 'f', 'n', 'a', 'n', 'z', 'a', 'y', 'a', 'u', 'o', 'p', 'i', 'a', 'e', 'f', 'g', 'c', 'c', 'b', 's', 's', 'h', 'h', 'p', 'x', 'a', 'o', 'a', 'h', 'm', 'a', 'r', 'z', 'y', 'f', 'u', 'e', 'k', 'y', 'o', 'k', 'w', 'v', 'y'}, {'j', 'e', 'h', 'f', 'j', 'n', 'b', 'b', 'f', 'w', 'w', 'l', 'n', 'n', 'j', 'l', 'z', 'm', 'p', 'i', 'z', 'j', 's', 'r', 'y', 'i', 'm', 'b', 'a', 'o', 's', 'a', 'j', 'x', 'j', 'j', 'c', 't', 'e', 'h', 'f', 'j', 'h', 'z', 'h', 'q', 'd', 'f', 'v', 'w'}, {'t', 'u', 'q', 'o', 'r', 'x', 'w', 'v', 'o', 'd', 'e', 'z', 'u', 'p', 'u', 'j', 'a', 'h', 'f', 'd', 'r', 'u', 'w', 't', 'y', 'f', 'l', 'j', 't', 'w', 'z', 'p', 'p', 's', 'y', 's', 'k', 'w', 'z', 'e', 'v', 'a', 'l', 'b', 'b', 'k', 't', 'x', 'v', 'o'}, {'w', 'v', 'q', 'd', 'a', 'u', 'n', 'g', 'r', 'q', 'b', 'w', 'i', 'r', 'q', 'w', 'q', 'w', 't', 'y', 'm', 'a', 'u', 'r', 'i', 'g', 'k', 'k', 'i', 'j', 'i', 'w', 'n', 'b', 'j', 'l', 'm', 'u', 'v', 'd', 'm', 'o', 'h', 'h', 't', 'r', 't', 'b', 'l', 'a'}, {'c', 'j', 'w', 'h', 'a', 'r', 'h', 'h', 'f', 'w', 'q', 'j', 'h', 'w', 'r', 'j', 'e', 'b', 'g', 'x', 'b', 'b', 'k', 'i', 'f', 'u', 'r', 'e', 'l', 'p', 'u', 'o', 't', 'e', 'p', 'b', 'e', 't', 'y', 'e', 'j', 'h', 'm', 'j', 'w', 'm', 'h', 'x', 'k', 'd'}, {'d', 'r', 'g', 'q', 'i', 'a', 'u', 'd', 'o', 'x', 'i', 's', 'z', 'y', 'k', 'c', 'i', 'w', 's', 'p', 'q', 'f', 'b', 's', 'x', 'x', 'q', 'd', 'd', 'f', 'h', 'z', 's', 'a', 'k', 'b', 'y', 'c', 'v', 'r', 'v', 'k', 'l', 'r', 'v', 'n', 'z', 'e', 'm', 'q'}, {'t', 'v', 'z', 'k', 'b', 'r', 'r', 'm', 'k', 'f', 'c', 'z', 'r', 'h', 'b', 'i', 'm', 'd', 'w', 'o', 'k', 'a', 'n', 'm', 'u', 't', 'a', 'l', 'k', 'k', 'y', 'e', 't', 's', 's', 'n', 'y', 'w', 'w', 'n', 'j', 't', 'z', 'm', 'c', 'o', 'h', 'm', 'v', 'x'}, {'n', 'c', 'i', 'p', 'f', 's', 'd', 'c', 'n', 'a', 'z', 'v', 'q', 'l', 'p', 'l', 'm', 't', 'i', 'f', 'z', 'e', 'q', 'l', 'r', 's', 't', 'n', 'q', 'r', 'n', 'k', 'x', 'b', 'p', 'c', 'w', 'd', 'c', 's', 'v', 'j', 'a', 'r', 'e', 'f', 'z', 'j', 'd', 'v'}, {'r', 'n', 'd', 'z', 'd', 'q', 'z', 'j', 'h', 'r', 't', 'i', 'c', 'k', 'x', 'l', 'd', 'm', 'k', 'p', 'f', 'e', 'x', 'y', 'v', 'z', 'e', 'p', 'g', 'd', 'n', 'b', 'd', 'u', 'a', 'l', 'y', 'v', 'y', 'i', 'u', 'b', 'q', 'o', 'e', 'n', 'm', 'o', 'p', 'p'}, {'p', 'e', 'z', 'k', 'y', 's', 'e', 's', 'k', 'f', 'u', 'i', 'h', 'u', 'w', 'm', 'g', 'b', 'p', 'r', 'q', 'o', 'h', 'l', 'r', 'h', 'c', 't', 'o', 'j', 'w', 'p', 'i', 'd', 'v', 'f', 'y', 'r', 'q', 'g', 'c', 'n', 'r', 'r', 't', 'r', 'n', 'b', 'j', 'h'}, {'m', 'p', 't', 'o', 'q', 'e', 'z', 'i', 'u', 'p', 'j', 's', 'm', 'm', 'e', 'g', 'l', 'l', 'i', 'h', 'q', 'z', 'c', 'b', 'i', 't', 's', 'o', 'g', 'd', 'r', 'a', 'r', 'a', 'x', 'j', 'k', 'h', 'z', 'x', 't', 'e', 'f', 'y', 'd', 'x', 'i', 't', 'g', 'm'}, {'g', 'q', 't', 'n', 'a', 'q', 'p', 'y', 'k', 'q', 'p', 'j', 'o', 'v', 'j', 'y', 'i', 's', 'w', 'p', 'o', 'w', 'u', 'b', 'q', 't', 'w', 'm', 'j', 'w', 'y', 'j', 'z', 'f', 'v', 'u', 'b', 'q', 'v', 'v', 'k', 'u', 'c', 'f', 'm', 'q', 'q', 'g', 'l', 'i'}, {'q', 'n', 't', 'f', 'm', 'v', 'f', 'b', 'n', 't', 'q', 'i', 'w', 'o', 'y', 'p', 'i', 'h', 'c', 'p', 'k', 'u', 'b', 'r', 'l', 'd', 'u', 'f', 'w', 'n', 'd', 'l', 'u', 'c', 'u', 'a', 'a', 'm', 'e', 'y', 'r', 'z', 'o', 'e', 'v', 'k', 'd', 'c', 'o', 'd'}, {'t', 'k', 'd', 'h', 'u', 'f', 's', 'r', 'c', 'q', 'q', 'b', 'u', 'w', 't', 'n', 'g', 'z', 'l', 'b', 'z', 'h', 'u', 'x', 's', 'x', 'j', 'j', 'p', 'a', 'g', 'f', 'u', 's', 'r', 'o', 'g', 'q', 'r', 'd', 'j', 'm', 'f', 'd', 'q', 'p', 'y', 'v', 't', 'z'}, {'h', 'c', 'q', 'm', 'j', 'c', 'd', 'e', 'm', 'n', 'r', 'u', 'g', 'c', 'f', 'h', 'x', 'q', 'k', 'o', 'x', 'd', 'y', 'm', 'g', 'w', 'u', 'n', 'n', 'l', 'f', 'l', 'n', 'j', 'q', 'z', 'p', 'o', 'i', 'u', 'y', 'm', 'w', 'k', 'r', 'x', 'h', 's', 'n', 'l'}, {'m', 'l', 'j', 's', 'j', 'g', 'h', 'x', 'u', 'd', 'h', 'w', 'r', 'a', 'o', 'l', 'm', 'w', 'j', 'x', 'f', 'x', 't', 'w', 'w', 'p', 'e', 'o', 'j', 'p', 'w', 'm', 'g', 'f', 'n', 'i', 'p', 'w', 'v', 'f', 'e', 'r', 'u', 'm', 't', 'n', 'p', 'r', 'a', 'm'}, {'x', 'x', 'x', 's', 'f', 'k', 'p', 'g', 'c', 'r', 'r', 's', 'x', 'i', 'x', 'v', 'd', 'q', 'x', 'n', 'x', 'n', 'k', 'u', 'z', 'y', 'h', 'x', 't', 'r', 'u', 'm', 'i', 'i', 'l', 'y', 'x', 'x', 'p', 'n', 'j', 'i', 'h', 'y', 'p', 'i', 'f', 'h', 'q', 'y'}, {'k', 'r', 'i', 'g', 'v', 'm', 't', 'g', 'w', 'a', 'y', 's', 'y', 'f', 'l', 'e', 'r', 'k', 'v', 'r', 'g', 's', 'k', 'y', 'x', 'i', 'q', 'u', 's', 's', 'd', 't', 'z', 'f', 'w', 'k', 'x', 'x', 't', 'u', 'u', 'j', 'c', 's', 'a', 'v', 'l', 'r', 'l', 'm'}, {'k', 'z', 'c', 'y', 'd', 'y', 'b', 'l', 'o', 'q', 'w', 'a', 'y', 'o', 'i', 't', 'm', 'f', 'l', 'u', 'g', 'd', 'c', 'k', 'u', 'b', 'e', 'u', 'o', 'k', 'b', 'm', 'n', 'j', 'w', 'p', 'v', 'y', 'p', 't', 'u', 'z', 'y', 'c', 'q', 'w', 'r', 's', 'q', 'p'}, {'k', 'i', 'n', 'j', 'a', 'q', 'd', 'y', 'q', 'm', 'w', 'k', 'u', 'f', 's', 'u', 'e', 's', 'c', 's', 'z', 'g', 'v', 'd', 'l', 'o', 'e', 'u', 'e', 'z', 'o', 'u', 'k', 'a', 'd', 's', 'y', 't', 'a', 'g', 'l', 'n', 'g', 'z', 'u', 'm', 'b', 'i', 'z', 'e'}, {'k', 'q', 'c', 'i', 'l', 'f', 'u', 'h', 's', 'p', 'p', 'l', 'w', 'c', 'r', 'p', 'm', 'm', 'f', 'q', 'f', 'q', 'q', 'f', 'o', 'w', 'x', 'z', 'm', 's', 'g', 'j', 'v', 'p', 'c', 'c', 'v', 'i', 'k', 'h', 'b', 'b', 'v', 'o', 'd', 'g', 'd', 'k', 'x', 'i'}, {'e', 'i', 'h', 'i', 'z', 'g', 'r', 'u', 'p', 'd', 's', 'c', 'u', 'k', 'k', 'd', 'v', 's', 'l', 'm', 'f', 'i', 'b', 'v', 'm', 'i', 'c', 'p', 'e', 'y', 'k', 'z', 'c', 'j', 'l', 'w', 'z', 't', 'z', 'm', 'z', 'j', 'a', 'd', 'm', 'g', 'y', 'u', 'm', 'y'}, {'r', 'j', 'j', 'l', 'b', 'b', 'e', 'a', 'v', 'v', 'w', 'k', 'o', 'q', 'v', 'r', 'c', 'i', 'k', 'w', 'g', 'r', 'e', 'a', 'a', 'w', 'o', 'a', 'k', 'x', 'l', 'd', 'b', 'l', 'y', 'y', 'p', 'q', 'z', 'm', 'y', 'm', 'w', 'v', 'd', 'm', 'f', 'd', 'u', 'o'}, {'i', 'm', 'h', 'e', 'j', 'v', 's', 'r', 'd', 'y', 'y', 's', 'x', 'k', 't', 't', 'y', 'm', 'o', 'v', 'e', 'q', 'k', 'z', 'w', 'e', 'j', 'f', 'c', 'o', 'a', 't', 'u', 'v', 'o', 't', 'b', 'o', 'u', 'q', 'a', 'b', 'o', 'g', 'j', 's', 's', 'n', 'u', 'y'}, {'v', 't', 't', 'k', 'k', 'r', 'g', 'c', 'a', 'x', 'k', 't', 'o', 'j', 't', 'j', 'l', 'k', 'n', 'k', 'k', 'j', 'm', 'p', 'y', 'c', 'e', 'b', 'j', 'w', 'o', 'y', 'q', 'c', 'p', 'q', 'f', 'c', 'w', 'n', 'h', 'l', 'j', 'n', 'o', 'u', 'm', 'r', 'j', 'a'}, {'k', 'z', 'q', 'r', 'w', 'z', 'n', 'j', 'z', 'l', 'f', 'p', 'a', 'l', 'g', 'w', 'r', 'i', 's', 'x', 'y', 'l', 'd', 'f', 'y', 'r', 'c', 'v', 'i', 'c', 'j', 'f', 'j', 'a', 'g', 'r', 'x', 'a', 'v', 'l', 'o', 'v', 'z', 'd', 'i', 'v', 'f', 'e', 'f', 'i'}, {'k', 't', 'j', 'j', 'h', 'z', 'a', 'b', 'x', 'u', 'u', 'v', 'o', 'k', 'j', 'u', 'p', 'p', 'b', 'p', 'm', 'g', 'v', 'n', 'o', 'v', 'c', 'b', 'h', 'x', 'u', 'u', 's', 'j', 'o', 'f', 'n', 'y', 'c', 'w', 'w', 'l', 'm', 'g', 't', 'g', 'v', 'f', 'd', 'j'}, {'v', 'k', 'i', 'e', 'b', 'z', 'y', 'd', 's', 'x', 'f', 's', 'h', 'y', 'd', 'u', 'y', 'q', 'h', 'q', 'f', 'd', 'r', 'c', 'x', 'n', 'l', 'c', 't', 'q', 'h', 'o', 'f', 'j', 'q', 'z', 'v', 'r', 'j', 'f', 'e', 'a', 'z', 't', 'r', 'p', 'x', 'j', 'p', 'v'}, {'c', 'w', 'i', 't', 'a', 'b', 't', 'h', 'b', 'r', 'f', 'j', 'j', 'f', 'q', 'h', 'n', 's', 'v', 'o', 'i', 'p', 'z', 'e', 'n', 'm', 's', 'w', 'h', 'i', 'a', 'j', 'r', 'h', 'c', 'i', 'z', 'i', 'q', 't', 's', 'o', 'k', 'w', 'q', 'e', 'e', 'n', 'a', 'n'}, {'z', 'k', 'r', 'j', 'l', 'z', 'p', 's', 'm', 'b', 'r', 'c', 'k', 'p', 'q', 'l', 'w', 'l', 'j', 'z', 'y', 'p', 't', 'v', 'f', 'e', 'l', 'd', 't', 'e', 'o', 'x', 'd', 'u', 'z', 'b', 'r', 'l', 'l', 'l', 't', 'g', 's', 'y', 'q', 't', 'w', 'p', 'h', 'd'}};
int n=50, k=50;

for(int i=0; i<n; i++){
  for(int j= 0; j<k; j++)
    cout<<tab[j][i];
}
return 0;
}
