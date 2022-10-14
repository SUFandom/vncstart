#include <iostream>
#include <stdlib.h>

using namespace std;

#define SYSKILL "\
#bin/bash \n\
vncserver -kill :1 \n\
\
"


int main() {
    cout << "i have come" << endl;
    cout << "to kill" << endl;
    cout << "Your VNC SESSION!!!" << endl;
    system(SYSKILL);
    return 0;
}