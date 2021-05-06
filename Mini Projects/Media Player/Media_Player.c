// Note: Try to run this Code on DEV-C++

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    system("color F0");
    char a[50], temp, tem[50], word[50];
    char b[50], rev[50], ch;
    int i = 0, j = 0, count = 0, choice, cot = 0, vowel = 0, digit = 0, conso = 0, special = 0, space = 0, kota, len = 0;

    while (1)
    {
        system("cls");
        printf("\t   ##########################################################");
        printf("\n\t   ############             Welcome To           ############");
        printf("\n\t   ############                The               ############");
        printf("\n\t   ############             Music System         ############");
        printf("\n\t   ##########################################################");
        //sleep(4);
        //system("cls");
        printf("\n\n\n\t\t Please Enter the Song Number that you want to PLAY");
        printf("\n\n\n\t\t[1]. Dil Vich..");
        printf("\t\t\t[2]. Khaab..");
        printf("\n\n\n\t\t[3]. Fevicol Se..");
        printf("\t\t[4]. Despacito..");
        printf("\n\n\n\t\t[5]. Lahore..");
        printf("\t\t\t[6]. O Saathi..");
        printf("\n\n\n\t\t[7]. Shekh chilli..");
        printf("\t\t[8]. Teri Mitti..");
        ch = getch();
        if (ch == '1')
            goto x;
        else if (ch == '2')
            goto a;
        else if (ch == '3')
            goto b;
        else if (ch == '4')
            goto c;
        else if (ch == '5')
            goto d;
        else if (ch == '6')
            goto e;
        else if (ch == '7')
            goto f;
        else if (ch == '8')
            goto g;
        else
            goto h;
        switch (choice)
        {

        x:

        case 1:
            system("dilvich.mp3");
            break;
        a:
        case 2:
            system("khaab.mp3");
            break;
        b:
        case 3:
            system("fevicolse.mp3");
            break;
        case 4:
            system("cls");
        c:
            system("cls");
            system("despacito.mp3");
            break;
        d:
        case 5:
            system("cls");
            system("Lahore.mp3");
            break;
        e:
        case 6:
            system("cls");
            system("osaathi.mp3");
            break;
        f:
        case 7:
            system("cls");
            system("shekhchilli.mp3");
            break;
        g:
        case 8:
            system("cls");
            system("terimitti.mp3");
            break;
        h:
        default:
            printf("\n Error!!!!!!");
            printf("\n Invalid Option !! Please try Again...");
            exit(1);
        }
    }
}
