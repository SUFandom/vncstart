#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <cctype>

using namespace std;

#define INSTALL "\
#/bin/bash \n\
g++ -v -o killvnc end.cpp \n\
g++ -v -o strtvnc start.cpp \n\
cp -r killvnc /usr/bin \n\
cp -r strtvnc /usr/bin \n\
\
"

int main() {
    char Response;
    cout << "Do you wish to proceed to build and Inject? [Y/N] : " ;
    cin >> Response;
    if (Response == 'Y') {
        cout << "" << endl;
        cout << "Will Install Shortly" << endl;
        sleep(3);
        system(INSTALL);
        cout << "Done" << endl;
        sleep(1);
        return 0;
    }
    else if (Response == 'N') {
        cout << "Abort" << endl;
        sleep(1);
        return 0;
    }
}