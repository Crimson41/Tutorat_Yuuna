#include "TutoratBasic.h"
#include "TutoratAdvanced.h"
#include "TutoratRPG_GameManager.h"

// À faire dans l'ordre :
// 1 - TutoratBasic
// 2 - TutoratAdvanced
// 3 - TutoratRPG

int main()
{
    TutoratBasic tb;
    TutoratAdvanced ta;
    TutoratRPG_GameManager gm;

    tb.TestFunctionsHere();
    ta.TestFunctionsHere();

    std::cout << "\n********************\nFin du programme\n********************";
}