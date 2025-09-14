#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<stdbool.h>
#include <math.h>
#define sys system("cls");

int text = 7, background = 0;
int teks_color, teks_background;

void textcolor(int new_color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), new_color + background * 16);
    text = new_color;
}
void backgroundcolor(int new_color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), text + new_color * 16);
    background = new_color;
}


void warna(){  //TEKS BIRU BACKGROUND PUTIH
    system("COLOR 71");
}

void red_putih(){  //TEKS MERAH BACKGROUND PUTIH
    printf("\033[1;31;47m");
}

void reset(){ //TEKS BIRU BACKGROUND PUTIH
    printf("\033[1;34;47m");
}
