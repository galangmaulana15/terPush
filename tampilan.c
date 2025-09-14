#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#define sys system("cls");

int halaman, cek = 0;

void koordinat(int x, int y){
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


/// T E K S   P U T I H   B A C K G R O U N D   P U T I H ...
void pink(){
    printf("\033[1;37;45m");
}

// KEMBALI BG HITAM TEKS PUTIH
void reset(){
    printf("\033[1;32;47m");
}


///////////////////////////
////   B I N G K A I   ////
///////////////////////////
void frame_pilihan(int x, int y){
    int a=30,b=9;
    char s=219;
            for(int i=0; i<b; i++){
                koordinat(x,y+i); 
                for(int j=0; j < a; j++){
                if(i==0||i==b-1||j==0||j==a-1 || j == a - 2 || j == 1){
                    printf("%c",219);
                }else{
                printf(" ");
                }
                }
            }
}



////////////////////////////////
////                        ////
////    T A M P I L A N     ////
////                        ////
////////////////////////////////
void tampilan1(){
    pink();
    frame_pilihan(18,18);
    koordinat(28,22);
    printf("L O G I N");
    reset();

    frame_pilihan(70,18);
    koordinat(79,22); printf("D A F T A R");
    frame_pilihan(122,18);
    koordinat(132,22); printf("A D M I N");
}

void tampilan2(){
    frame_pilihan(18,18);
    koordinat(28,22);printf("L O G I N");

    pink();
    frame_pilihan(70,18);
    koordinat(79,22); printf("D A F T A R");
    reset();

    frame_pilihan(122,18);
    koordinat(132,22); printf("A D M I N");
}

void tampilan3(){
    frame_pilihan(18,18);
    koordinat(28,22);   printf("L O G I N");
    frame_pilihan(70,18);
    koordinat(79,22); printf("D A F T A R");
    pink();
    frame_pilihan(122,18);
    koordinat(132,22); printf("A D M I N");
    reset();
}

/////////////////////////////////////
/// T A M P I L A N   L O G I N   ///
/////////////////////////////////////
void login(){
     sys
     koordinat(80,20);
     printf("I N I   H A L A M A N   L O G I N");
     getch();
     cek = 1;
}
/////////////////////////////////////
/// T A M P I L A N   D A F T A R ///
/////////////////////////////////////
void daftar(){
     sys
     koordinat(80,20);
     printf("I N I   H A L A M A N   D A F T A R");
     getch();
     cek = 1;
}
/////////////////////////////////////
/// T A M P I L A N   A D M I N   ///
/////////////////////////////////////
void admin(){
     sys
     koordinat(80,20);
     printf("I N I   H A L A M A N   A D M I N");
     getch();
     cek = 1;
}
/////////////////////////////////////
/// T A M P I L A N   P I L I H   ///
/////////////////////////////////////
void frame(int c){
    if (c == 0){
        tampilan1();
        halaman = 1;
    }
    else if (c == 1){
        tampilan2();
        halaman = 2;
    }
    else if (c == 2){
        tampilan3();
        halaman = 3;
    }
}


/////////////////////////////////////////////
/// F U N G S I   U N T U K   P I L I H   ///
/////////////////////////////////////////////
void tampilan_pilih(){
    frame(0);
    pilih();
}


///////////////////////////////////////////////////////////////
/// F U N G S I  /  O T A K   P I L I H    T A M P I L A N  ///
///////////////////////////////////////////////////////////////
void pilih(){
    int c = 0;
    char inp;
    while ((inp = getch()) != 13)
    {
        if (inp == 72){
            c--;
            // 72 = ARROW ATAS
        }
        else if(inp == 80){
            c++;
            // 80 = ARROW BAWAH
        }
        else if(inp == 77){
            c++;
            // 77 = ARROW KANAN
        }
        else if(inp == 75){
            c--;
            // 75 = ARROW KIRI
        }
        if (c < 0){
            c = 0;
        }
        else if (c > 2){
            c = 2;
        }
        // sys
        frame(c);
    }
}


///////////////////////////////////////////////////////
/// F U N G S I   U N T U K   M O D E   H A L A M A N ///
///////////////////////////////////////////////////////
void mode_halaman(int halaman){

    switch (halaman)
    {
    case 1:
        login();
        if(cek == 1){
            cek = 0;
            tampilan_pilih();
            mode_halaman(halaman);
        }
        break;
    case 2:
        daftar();
        if(cek == 1){
            cek = 0;
            tampilan_pilih();
            mode_halaman(halaman);
        }
        break;
    case 3:
        admin();
        if(cek == 1){
            cek = 0;
            tampilan_pilih();
            mode_halaman(halaman);
        }
        break;
    default:
        break;
    }
}