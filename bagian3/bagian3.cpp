
#include <iostream>
#include <string>

using namespace std;

#include "ibur.h"
#include "anak.h"

int main()
{
    ibu* varibu = new ibu("dini");
    ibu* varibu2 = new ibu("novi");
    anak* varanak1 = new anak("tono");
    anak* varanak2 = new anak("")
        anak * varanak3 = new anak("")


        varibu->tambahanak(varanak1);
    varibu->tambahanak(varanak2);
    varibu2->tambahanak(varanak3);
    varibu2->tambahanak(varanak1);


    varibu->cetakanak();
    varibu2->cetakanak();

    delete varibu;
    delete varibu2;
    delete varanak1;
    delete varanak2;
    delete varanaK3;

    return 0;

}


