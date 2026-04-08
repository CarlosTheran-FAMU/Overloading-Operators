#include <iostream>
#include "BookCollection.h"

using namespace std;


int main()
{
   BookCollection SectionA(4,5,6,7);
   BookCollection SectionB(2,3,5,7);

   BookCollection SectionC = SectionA + SectionB;

   cout<< SectionC;
}
