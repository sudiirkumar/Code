#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[])
{
    ofstream batch;
    batch.open("mybatchfile.bat", ios::out);

    batch <<"@echo OFF\n";
    batch <<":START\n";
    batch <<"dir C:\n";
    batch <<"myc++file 2 >nul\n";
    batch <<"goto :eof\n";

    batch.close();

    if (argc == 2)
    {
        system("mybatchfiles.bat");
        cout <<"Starting Batch File...\n";
    }
}
