#include <fstream>
#include <string.H>
using namespace std;
#define MAX 1000
#define MAXLENGTH 10
 
struct TU
{
    char noidung[MAXLENGTH];
    int dem;
};
 
TU danhsach[MAX];
int sophantu = 0;
 
int main()
{
    char temp[MAXLENGTH];
    bool timthay;
    ifstream f("INPUT.in"); /* L?p ifstream h? tr? d?c t? file, v?i c�ch d�ng gi?ng cin */
    while (!f.eof())
    {
        f >> temp;
        timthay = false;
        strcpy(temp, strlwr(temp)); /* H�m n�y d? chuy?n nguy�n t? v? th�nh k� t? thu?ng */
        for (int i = 0; i < sophantu; i++)
        {
            if (strcmp(danhsach[i].noidung, temp) == 0) /* H�m n�y so s�nh 2 chu?i v?i nhau */
            {
                timthay = true;
                danhsach[i].dem++;
                break;
            }
        }
        if (timthay==false)
        {
            strcpy(danhsach[sophantu].noidung, temp); /* H�m n�y d? copy chu?i temp v�o m?t chu?i kh�c */
            danhsach[sophantu].dem = 1;
            sophantu++;
        }
    }
    ofstream f_out("OUTPUT.out"); /* L?p ofstream h? tr? xu?t ra file v?i c�ch d�ng gi?ng cout */
    for (int i = 0; i < sophantu; i++)
    {
        f_out << danhsach[i].noidung << " " << danhsach[i].dem << endl;
    }
    return 0;
}
