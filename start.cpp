#include <iostream>
#include <stdlib.h>

using namespace std;

// Def
#define STARTUP "\
#bin/bash \n\
vncserver -xstartup startlxde -geometry 1280x720 -display :1 \n\
\
"

int main() {
    cout << "Start VNC Session" << endl;
    system(STARTUP);
    return 0;
}

