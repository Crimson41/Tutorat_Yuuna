#include "TutoratBasic.h"
#include "TutoratAdvanced.h"
#include "TutoratExpert.h"
#include "TutoratRPG_GameManager.h"

int main()
{
    TutoratBasic tb;
    TutoratAdvanced ta;
    TutoratExpert te;
    TutoratRPG_GameManager gm;

    tb.TestFunctionsHere();
    ta.TestFunctionsHere();

    std::cout << "\n********************\nFin du programme\n********************";
}