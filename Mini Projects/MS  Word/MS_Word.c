// Note: Try to run this Code on DEV-C++

#include <stdio.h>
#include <string.h>
#include <windows.h>
int main()
{
    char a[100], ch;
    int l, i, g;
    char h[100] = {"$$$$$$ thanks for using this \" $$$$$$"};
    system("color f0");
    while (1)
    {
        system("cls");
        printf("\n\n\t\t\t [[[]]]  Enter Any String  [[[]]] \n\n\t\t\t\t\t");
        gets(a);
        printf("\n\n\n\t\t     PRESS The Numbers From 1 To 6 and do your task :\n\n\n\n\n\t[1]. \"UPPER CASE\"    [2]. \"LOWER CASE\"     [3]. \"TOGGLE CASE\"\n\n\n\t\t [4]. \"SENTENCE CASE\"    [5]. \"WORD  CASE\"\n\n\n\t\t\t\t 6. \"EXIT\"\n");
        ch = getch();
        if (ch == '1')
            goto x;
        if (ch == '2')
            goto y;
        if (ch == '3')
            goto z;
        if (ch == '4')
            goto g;
        if (ch == '6')
            goto b;
        if (ch == '5')
            goto sat;
        else
            goto j;
        switch (ch)
        {
        x:
        case 1:
            l = strlen(a);
            for (i = 0; i < l; i++)
            {
                if (a[i] >= 'a' && a[i] <= 'z')
                {
                    a[i] = a[i] - 32;
                }
            }
            a[i + 1] = '\0';
            system("cls");
            //printf("\n\n\t\t\t\t\t");
            printf("\n\n\t\t\t\tString After Conversion");
            printf("\n\t\t\t=====----------------------------======");
            printf("\n\n\n\t\t\t\t\t");
            for (i = 0; a[i] != '\0'; i++)
            {

                printf("%c", a[i]);
            }
            printf("\n\n\n\n\t\t\tPress Any Key to return to \"MAIN MENU\"...\n\n");
            ch = getch();
            break;
        y:
        case 2:
            l = strlen(a);
            for (i = 0; i < l; i++)
            {
                if (a[i] >= 'A' && a[i] <= 'Z')
                {
                    a[i] = a[i] + 32;
                }
            }
            a[i + 1] = '\0';
            system("cls");
            //printf("\n\n\t\t\t\t\t");
            printf("\n\n\t\t\t\tString After Conversion");
            printf("\n\t\t\t=====----------------------------======");
            printf("\n\n\n\t\t\t\t\t");
            for (i = 0; a[i] != '\0'; i++)
            {

                printf("%c", a[i]);
            }
            printf("\n\n\n\n\t\t\tPress Any Key to return to \"MAIN MENU\"...\n\n");
            ch = getch();
            break;
        z:
        case 3:
            l = strlen(a);
            for (i = 0; i < l; i++)
            {
                if (a[i] >= 'a' && a[i] <= 'z')
                {
                    a[i] = a[i] - 32;
                }
                else if (a[i] == ' ')
                    continue;
                else
                    a[i] = a[i] + 32;
            }
            a[i + 1] = '\0';
            system("cls");
            printf("\n\n\t\t\t\tString After Conversion");
            printf("\n\t\t\t=====----------------------------======");
            printf("\n\n\n\t\t\t\t\t");
            for (i = 0; a[i] != '\0'; i++)
            {
                printf("%c", a[i]);
            }
            printf("\n\n\n\n\t\t\tPress Any Key to return to \"MAIN MENU\"...\n\n");
            ch = getch();
            break;
        g:
        case 4:
            l = strlen(a);
            for (i = 0; i < l; i++)
            {
                if (i == 0 && (a[i] >= 'a' && a[i] <= 'z'))
                {
                    a[i] = a[i] - 32;
                }
                else if (a[i] == '.')
                {
                    if (a[i + 1] == ' ')
                    {
                        if (a[i + 2] >= 'a' && a[i + 2] <= 'z')
                        {
                            a[i + 2] = a[i + 2] - 32;
                        }
                    }
                    else
                    {
                        if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
                        {
                            a[i + 1] = a[i + 1] - 32;
                        }
                    }
                }
            }
            system("cls");
            printf("\n\n\t\t\t\tString After Conversion");
            printf("\n\t\t\t=====----------------------------======");
            printf("\n\n\n\t\t\t\t");
            printf("%s", a);
            printf("\n\n\n\n\t\t\tPress Any Key to return to \"MAIN MENU\"...\n\n");
            ch = getch();
            break;
        sat:
        case 6:

            l = strlen(a);
            for (i = 0; i < l; i++)
            {
                if (i == 0 && (a[i] >= 'a' && a[i] <= 'z'))
                {
                    a[i] = a[i] - 32;
                }
                else if (a[i] == ' ')
                {
                    if (a[i + 1] == ' ')
                    {
                        if (a[i + 2] >= 'a' && a[i + 2] <= 'z')
                        {
                            a[i + 2] = a[i + 2] - 32;
                        }
                    }
                    else
                    {
                        if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
                        {
                            a[i + 1] = a[i + 1] - 32;
                        }
                    }
                }
            }
            system("cls");
            printf("\n\n\t\t\t\tString After Conversion");
            printf("\n\t\t\t=====----------------------------======");
            printf("\n\n\n\t\t\t\t");
            printf("%s", a);
            printf("\n\n\n\n\t\t\tPress Any Key to return to \"MAIN MENU\"...\n\n");
            ch = getch();
            break;
        b:
        case 5:
            system("cls");
            printf("\n\n\n\n\n\n\n\n\t\t\t");
            for (g = 0; g < strlen(h); g++)
            {
                system("color 1f");
                printf("%c", h[g]);
                Sleep(30);
                if (h[g] >= 97 && h[g] <= 122)
                {
                    h[g] = h[g] - 32;
                    printf("\b%c", h[g]);
                    Sleep(30);
                }
            }
            Sleep(3000);
            exit(1);
        j:
        default:
            system("cls");
            printf("\n\n\n\t\t\t\t Error!!!!!!");
            printf("\n\n\t\t\t\t Invalid Option !! Please try Again...");
            Sleep(1000);
            exit(1);
        }
    }
}
