#include <iostream>

/* + Syntax: OP1+OP2 (a+bc = abc, abbbc: börja vid a, ta alla b (minst 1b) fram till och inkludera c)
 * * Syntax: OP* (a*bc = abc, ac, abbbc: börja vid a, ta alla b (0 eller fler) fram till och inkludera c)
 * () Syntax: (EXPR) (infångsgrupp; a(b+c) abc -> infångstgrupp 1: abc, grupp 2: bc
 * . Syntax: . (a.b = acb, ahb, adb: matchar a och en annan valfri bokstav till och med b)
 * {} SYNTAX: OP{N} (Matchar bokstaven N gånger, a{3} = aaa)
 * \ syntax: EXPR\I Ignorera versalisering
 *  \O{} SYNTAX: EXPR\0{N} (N = 0 för hela)
 * */

/* (EXPR) -> <word> + <word> | <word> * <word> | <word> .[num] <word> |
 * (WORD) -> <char> | <word><char>
 * (CHAR) -> <letter> | <digit>
 * (LETTER) ->
 * */


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
