/* PROJEK UAP KELOMPOK 15 KELAS D
1. ALIYA ZALFA PUTRI_2217051042
2. IBNU MUHTAR_2217051140
*/ 

#include <iostream>
#include <curses.h> 
#include <unistd.h>
#include <windows.h>
using namespace std;

char kotak[10] = {'o','1','2','3','4','5','6','7','8','9'};

int hasil();
void tampilan();

int main(){
	
	for(int i=0;i<=100;i++){
        system("color E1");
	    cout<<endl<<"Memuat Game . . . "<<i<<"%"<<endl;
        system("cls");
        }
        
        cout<<"LOADING SELESAI"<<endl;
           
	int player = 1,i,pilih;

    char tanda;
    do
    {
        tampilan();
        player=(player%2)?1:2;

        cout << "Player " << player << ", ketik kolom yg dipilih:  ";
        cin >>pilih;

        tanda=(player == 1)  ? 'X' : 'O';

        if (pilih == 1 && kotak[1] == '1')

            kotak[1] = tanda;
        else if (pilih == 2 && kotak[2] == '2')

            kotak[2] = tanda;
        else if (pilih == 3 && kotak[3] == '3')

            kotak[3] = tanda;
        else if (pilih == 4 && kotak[4] == '4')

            kotak[4] = tanda;
        else if (pilih == 5 && kotak[5] == '5')

            kotak[5] = tanda;
        else if (pilih == 6 && kotak[6] == '6')

            kotak[6] = tanda;
        else if (pilih == 7 && kotak[7] == '7')

            kotak[7] = tanda;
        else if (pilih == 8 && kotak[8] == '8')

            kotak[8] = tanda;
        else if (pilih == 9 && kotak[9] == '9')

            kotak[9] = tanda;
        else
        {
            cout<<"Maaf inputan tidak valid, silahkan inputkan angka kembali "<<endl;
            
            cout << "Player " << player << ", ketik kolom yg dipilih:  ";
        cin >>pilih;
        
            player--;
        }
        i=hasil();

        player++;
    }while(i==-1);
    tampilan();
    if(i==1)

        cout<<"==>\aPlayer "<<--player<<" MENANG! ";
    else
        cout<<"==>\aGame berakhir SERI!";
        
    return 0;
}
int hasil()
{
    if (kotak[1] == kotak[2] && kotak[2] == kotak[3])

        return 1;
    else if (kotak[4] == kotak[5] && kotak[5] == kotak[6])

        return 1;
    else if (kotak[7] == kotak[8] && kotak[8] == kotak[9])

        return 1;
    else if (kotak[1] == kotak[4] && kotak[4] == kotak[7])

        return 1;
    else if (kotak[2] == kotak[5] && kotak[5] == kotak[8])

        return 1;
    else if (kotak[3] == kotak[6] && kotak[6] == kotak[9])

        return 1;
    else if (kotak [1] == kotak[5] && kotak[5] == kotak[9])

        return 1;
    else if (kotak[3] == kotak[5] && kotak[5] == kotak[7])

        return 1;
    else if (kotak[1] != '1' && kotak[2] != '2' && kotak[3] != '3' 
                    && kotak[4] != '4' && kotak[5] != '5' && kotak[6] != '6' 
                  && kotak[7] != '7' && kotak[8] != '8' && kotak[9] != '9')

        return 0;
    else
        return -1;
}
void tampilan()
{
    system("cls");
    
    cout<<"\n\n\n\t\t\t        LETS PLAY TIC TAC TOE             \n";
	cout<<"\n\n\n\t\t\t-----------------------------------------\n"<<endl;
    cout << "Player 1 |X| " << endl;
    cout << "player 2 |O|"<<endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << kotak[1] << "  |  " << kotak[2] << "  |  " << kotak[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << kotak[4] << "  |  " << kotak[5] << "  |  " << kotak[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << kotak[7] << "  |  " << kotak[8] << "  |  " << kotak[9] << endl;

    cout << "     |     |     " << endl << endl;
}
