#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include "tampilan.c"

void main(){
    system("pause");
    system("COLOR 72");
    tampilan_pilih();
    mode_halaman(halaman);
}