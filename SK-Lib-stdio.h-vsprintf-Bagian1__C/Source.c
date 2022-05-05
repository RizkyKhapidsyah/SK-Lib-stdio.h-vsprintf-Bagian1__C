#pragma warning(disable:4996)

#include <stdio.h>
#include <stdarg.h>
#include <conio.h>

/*
    Source by CPlusPlus (https://www.cplusplus.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

void PrintFError(const char* format, ...) {
    char buffer[256];
    va_list args;
    va_start(args, format);
    vsprintf(buffer, format, args);
    perror(buffer);
    va_end(args);
}

int main() {
    FILE* pFile;
    char szFileName[] = "myfile.txt";

    pFile = fopen(szFileName, "r");

    if (pFile == NULL) {
        PrintFError("Error opening '%s'", szFileName);
    } else {
        fclose(pFile);
    }
    
    _getch();
    return 0;
}