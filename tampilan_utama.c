#include <windows.h>

void bingkai2(int p, int l, int x, int y, int c)
{
    p -= 1;
    l -= 1;
    textcolor(c);
    for (int a = 0; a <= p; a++)
    {
        gotoxy(x + a, y);
        printf("%c", 219);
        gotoxy(x + a, y + l);
        printf("%c", 219);
    }

    for (int b = 0; b < l; b++)
    {
        gotoxy(x, y + b);
        printf("%c", 219);
        gotoxy(p + x, y + b);
        printf("%c", 219);
    }
}
void backgound()
{
    for (int x = 1; x < 120; x++)
    {
        for (int y = 1; y <= 40; y++)
        {
            textcolor(1);
            printf(" ");
        }
    }
}

void tampilan2()
{
    system("cls");
    bingkai2(120, 42, 0, 0, 8);
    bingkai2(120, 9, 0, 0, 8);
    for (int a = 25; a <= 30; a++)
    {
        for (int b = 0; b <= 0; b++)
        {
            color(b, 15);
            gotoxy(a, 2);
            printf("                    '||                                     ");
            gotoxy(a, 3);
            printf(" .. ... ...   ....   ||    ....    ...   .. .. ..     ....  ");
            gotoxy(a, 4);
            printf(" ||  ||  |  .|...||  ||  .|   '' .|  '|.  || || ||  .|...|| ");
            gotoxy(a, 5);
            printf("  ||| |||   ||       ||  ||      ||   ||  || || ||  ||      ");
            gotoxy(a, 6);
            printf("   |   |    '|...'  .||.  '|...' '|..|'  .|| || ||.  '|...' ");  

            
            Sleep(5);
        }
    }
}

void tampilan1()
{

    bingkai2(120, 42, 0, 0, 8);
    bingkai2(118, 40, 1, 1, 15);
    bingkai2(116, 38, 2, 2, 8);
    for (int a = 35; a <= 40; a++)
    {
        for (int b = 0; b <= 8; b++)
        {
            color(b, 15);
            gotoxy(a, 4);printf("                               | | ");
            gotoxy(a, 5);printf("  _ __ ___    __ _  ___  _   _ | | __");
            gotoxy(a, 6);printf(" | '_ ` _ }  / _` |/ __|| | | || |/ /");
            gotoxy(a, 7);printf(" | | | | | || (_| |{__ ?| |_| ||   < ");
            gotoxy(a, 8);printf(" |_| |_| |_| {__,_||___/|__,_||| :_:");
            Sleep(10);
        }
    }
}
void tampilan3()
{
    bingkai2(120, 42, 0, 0, 8);
    bingkai2(118, 40, 1, 1, 15);
    bingkai2(116, 38, 2, 2, 8);
    for (int a = 14; a <= 23; a++)
    {
        for (int b = 8; b <= 8; b++)
        {

color(b, 15);
    gotoxy(a,5);printf(" '--------------.  .----------------.  .-----------------. .----------------.");
    gotoxy(a, 6);
    printf(" |-------------. || .--------------. || .--------------. || .--------------.  |");
    gotoxy(a, 7);
    printf(" | ____    ____ | || |  _________   | || | ____  _____  | || | _____  _____ | |");
    gotoxy(a, 8);
    printf(" ||_   ?  /   _|| || | |_   ___  |  | || ||_   ?_   _|  | || ||_   _||_   _|| |");
    gotoxy(a, 9);
    printf(" |  |   ??   |  | || |   | |_  ?_|  | || |  |   ? | |   | || |  | |    | |   | ");
    gotoxy(a, 10);
    printf(" |  | |?  /| |  | || |   |  _|  _   | || |  | |? ?| |   | || |  | '    ' |  | |");
    gotoxy(a, 11);
    printf(" | _| |_?/_| |_ | || |  _| |___/ |  | || | _| |_?   |_  | || |   ? `--' /   | |");
    gotoxy(a, 12);
    printf(" ||_____||_____|| || | |_________|  | || ||_____|?____| | | ||    `.__.'    | |");
    gotoxy(a, 13);
    printf(" |              | || |              | || |              | | ||              | |");
    gotoxy(a, 14);
    printf(" |'--------------' || '--------------' || '--------------' || '--------------'|");
    gotoxy(a, 15);
    printf(" '---------------'  '----------------'  '----------------'  '----------------'");
    Sleep(7);

        }
    }
}
    
    
// }
void tampilan4()
{

    bingkai2(120, 42, 0, 0, 8);
    bingkai2(118, 40, 1, 1, 15);
    bingkai2(116, 38, 2, 2, 8);

    color(0,7);
   


 }
void tampilan_admin()
{
    bingkai2(120, 42, 0, 0, 8);
    bingkai2(118, 40, 1, 1, 15);
    bingkai2(116, 38, 2, 2, 8);
}
void tampilan_awalars()
{

    
    bingkai2(120, 42, 0, 0, 8);
    bingkai2(118, 40, 1, 1, 15);
    bingkai2(116, 38, 2, 2, 8);
    color(15,8);
    gotoxy(8,6);printf("%%~%%~%%~%%~%%~%%   %%~%%~%%~%%~%%~%%  %%~%%~%%~%%~%%~%%");
    gotoxy(8,7);printf("%%~%%~%%~%%~%%~%%   %%~%%~%%~%%~%%~%%  %%~%%~%%~%%~%%~%%");
    gotoxy(8,8);printf("%%~%%     %%~%%   %%~%%     %%~%%  %%~%% ");
    gotoxy(8,9);printf("%%~%%     %%~%%   %%~%%     %%~%%  %%~%%");
    gotoxy(8,10);printf("%%~%%     %%~%%   %%~%%     %%~%%  %%~%%~%%~%%~%%~%%"); 
    gotoxy(8,11);printf("%%~%%~%%~%%~%%~%%   %%~%%~%%~%%~%%~%%  %%~%%~%%~%%~%%~%%");
    gotoxy(8,12);printf("%%~%%~%%~%%~%%~%%   %%~%%~%%~%%~%%~%%          %%~%%");
    gotoxy(8,13);printf("%%~%%     %%~%%   %%~%%   %%~%%            %%~%%"); 
    gotoxy(8,14);printf("%%~%%     %%~%%   %%~%%    %%~%%   %%~%%~%%~%%~%%~%%");
    gotoxy(8,15);printf("%%~%%     %%~%%   %%~%%     %%~%%  %%~%%~%%~%%~%%~%%");
  
    gotoxy(21,18);printf("%%~%%          %%~%%~%%~%%~%%~%%  %%~%%     %%~%%  %%~%%~%%     %%~%%  %%~%%~%%~%%~%%    %%~%%~%%~%%~%%~%%  %%~%%      %%~%%");
    gotoxy(21,19);printf("%%~%%          %%~%%~%%~%%~%%~%%  %%~%%     %%~%%  %%~%%~%%~    %%~%%  %%~%%~%%~%%~%%%%   %%~%%~%%~%%~%%~%%  %%~%%      %%~%%" );
    gotoxy(21,20);printf("%%~%%          %%~%%~%%~%%~%%~%%  %%~%%     %%~%%  %%~%%~%%~%%   %%~%%  %%~%%    %%%%%%%%  %%~%%     %%~%%   %%~%%     %%~%%");
    gotoxy(21,21);printf("%%~%%          %%~%%     %%~%%  %%~%%     %%~%%  %%~%%   %%~%% %%~%%  %%~%%     %%~%%  %%~%%     %%~%%    %%~%%   %%~%%");
    gotoxy(21,22);printf("%%~%%          %%~%%     %%~%%  %%~%%     %%~%%  %%~%%    %%~%%%%%%%%  %%~%%     %%~%%  %%~%%     %%~%%     %%~%% %%~%%");
    gotoxy(21,23);printf("%%~%%          %%~%%     %%~%%  %%~%%     %%~%%  %%~%%     %%~%%%%%%  %%~%%     %%~%%  %%~%%~%%~%%~%%~%%       %%~%% ");
    gotoxy(21,24);printf("%%~%%          %%~%%     %%~%%  %%~%%     %%~%%  %%~%%      %%%%~%%  %%~%%     %%~%%  %%~%%~%%~%%~%%~%%       %%~%% ");
    gotoxy(21,25);printf("%%~%%          %%~%%~%%~%%~%%~%%  %%~%%~%%~%%~%%~%%  %%~%%       %%~%%  %%~%%    %%%%%%%%  %%~%%    %%~%%        %%~%% ");
    gotoxy(21,26);printf("%%~%%~%%~%%~%%~%%  %%~%%~%%~%%~%%~%%  %%~%%~%%~%%~%%~%%  %%~%%       %%~%%  %%~%%~%%~%%~%%%%   %%~%%     %%~%%    %%~%%%%~%% ");
    gotoxy(21,27);printf("%%~%%~%%~%%~%%~%%  %%~%%~%%~%%~%%~%%  %%~%%~%%~%%~%%~%%  %%~%%       %%~%%  %%~%%~%%~%%~%%    %%~%%      %%~%%   %%~%%%%~%% ");

gotoxy(5,21);printf("  .--=   =--.");
gotoxy(5,22);printf(" /    \\./    \\");
gotoxy(5,23);printf("(__|   :   |__)");
gotoxy(5,24);printf("   |   :   |");
gotoxy(5,25);printf("   |   :   |");
gotoxy(5,26);printf("   |___:___|");


gotoxy(55,7);printf("==ARS==!====!=====!=====!====!===!===!=====!===!===!====");
gotoxy(55,8);printf("      /`\\__/`\\   /`\\   /`\\  |~| |~|  /)=I=(\\  /`""\\ /'\\");
gotoxy(55,9);printf("       |        | |   `   | | | | |  |  :  | |   :   |");
gotoxy(55,10);printf("     '-|    |-' '-|     |-' )/\\ )/\\  |  T  \\ '-| : |-'");
gotoxy(55,11);printf("       |    |     |     |  / \\// \\/  (  |\\  |  '---'");
gotoxy(55,12);printf("       '.__.'     '.___.'  \\_/ \\_/   |  |/  /");
gotoxy(55,13);printf("                                     |  /  /");
gotoxy(55,14);printf("                                     |  \\ /");
gotoxy(55,15);printf("                                     '--'`");

color(15,8);
gotoxy(25,35);printf("Tekan apa aja untuk lanjut : )");


    getch();
  
    
}
void tampilan_adm()
{
    
    color(0,7);
    gotoxy(65,20);printf(" |||||||||||||||||||||");
    gotoxy(65,21);printf("||||||||||||||||||||||||");
    gotoxy(65,22);printf("||||                ||||");
    gotoxy(65,23);printf("||_____ [*][*][*] ____||");
    gotoxy(65,24);printf("||                    ||");
    gotoxy(65,25);printf("||     &&&&&&&&&&     ||");
    gotoxy(65,26);printf("||    &@@@@@@@@@@&    ||");
    gotoxy(65,27);printf("||   &@$        $@&   ||");
    gotoxy(65,28);printf("||  &@$          $@&  ||");
    gotoxy(65,29);printf("||  &@$          $@&  ||");
    gotoxy(65,30);printf("||  &@$          $@&  ||");
    gotoxy(65,31);printf("||  &@$          $@&  ||");
    gotoxy(65,32);printf("||   &@$        $@&   ||");
    gotoxy(65,33);printf("||    &@@@@@@@@@@&    ||");
    gotoxy(65,34);printf("||     &&&&&&&&&&     ||");
    gotoxy(65,35);printf("||____________________||");
    gotoxy(65,36);printf("||                    ||");
    gotoxy(65,37);printf("||||||||||||||||||||||||");
    gotoxy(65,38);printf(" ||||||||||||||||||||  ");


gotoxy(89,21);printf("  .--=   =--.");
gotoxy(89,22);printf(" /    \\./    \\");
gotoxy(89,23);printf("(__|   :   |__)");
gotoxy(89,24);printf("   |   :   |");
gotoxy(89,25);printf("   |   :   |");
gotoxy(89,26);printf("   |___:___|");



gotoxy(91,28);printf("  .--=   =--.");
gotoxy(91,29);printf(" /    \\./    \\");
gotoxy(91,30);printf("(__|   :   |__)");
gotoxy(91,31);printf("   |   :   |");
gotoxy(91,32);printf("   |   :   |");
gotoxy(91,33);printf("   |___:___|");


}
                                                                                                                     
