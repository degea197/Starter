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
    ifstream f("INPUT.in"); /* L?p ifstream h? tr? d?c t? file, v?i cách dùng gi?ng cin */
    while (!f.eof())
    {
        f >> temp;
        timthay = false;
        strcpy(temp, strlwr(temp)); /* Hàm này d? chuy?n nguyên t? v? thành ký t? thu?ng */
        for (int i = 0; i < sophantu; i++)
        {
            if (strcmp(danhsach[i].noidung, temp) == 0) /* Hàm này so sánh 2 chu?i v?i nhau */
            {
                timthay = true;
                danhsach[i].dem++;
                break;
            }
        }
        if (timthay==false)
        {
            strcpy(danhsach[sophantu].noidung, temp); /* Hàm này d? copy chu?i temp vào m?t chu?i khác */
            danhsach[sophantu].dem = 1;
            sophantu++;
        }
    }
    ofstream f_out("OUTPUT.out"); /* L?p ofstream h? tr? xu?t ra file v?i cách dùng gi?ng cout */
    for (int i = 0; i < sophantu; i++)
    {
        f_out << danhsach[i].noidung << " " << danhsach[i].dem << endl;
    }
    return 0;
}
