#include<iostream>
#include<stdio.h>

using namespace std;
int main()

{
    char hotel;
    char layanan;
    int total_harga_TD;
    int total_harga_TP;
    int total_harga_TS;
    int total_harga_PD;
    int total_harga_PP;
    int total_harga_PS;
    int total_harga_RD;
    int total_harga_RP;
    int total_harga_RS;
    int lama_menginap;
    int TD = 250000;
    int TP = 300000;
    int TS = 400000;
    int PD = 1750000;
    int PP = 2500000;
    int PS = 3000000;
    int RD = 2500000;
    int RP = 3000000;
    int RS = 4500000;

    cout << "Jenis Kamar    Harga \n";
    cout << "--------------------------" << endl;
    cout << "1        Tartarus" << endl;
    cout << "--------------------------" << endl;
    cout << "Deluxe         250000" << endl;
    cout << "Premium        300000" << endl;
    cout << "Super          400000" << endl;
    cout << "--------------------------" << endl;
    cout << "Jenis Kamar    Harga \n";
    cout << "--------------------------" << endl;
    cout << "2        Pentagon" << endl;
    cout << "--------------------------" << endl;
    cout << "Deluxe         1750000" << endl;
    cout << "Premium        2500000" << endl;
    cout << "Super          3000000" << endl;
    cout << "--------------------------" << endl;
    cout << "Jenis Kamar    Harga \n";
    cout << "--------------------------" << endl;
    cout << "3        Ritz carlton" << endl;
    cout << "--------------------------" << endl;
    cout << "Deluxe         2500000" << endl;
    cout << "Premium        3000000" << endl;
    cout << "Super          4500000" << endl;
    cout << "--------------------------" << endl;

    cout << "\nPilih hotel    : "; cin >> hotel;
    if(hotel != '1'&& hotel != '2' && hotel != '3')
    {
        cout << "Hotel tak tersedia" << endl;
        cout << "Keluar program" << endl;
        exit(0);
    }
    else
    {
        cout << "Pilih layanan  : "; cin >> layanan;
        switch(hotel)
        {
            case '1':
                switch(layanan)
                {
                    case '1':
                        cout << "Anda memilih hotel Tartarus" << endl;
                        cout << "Anda memilih layanan Deluxe" << endl;
                        cout << "Biaya per malam        : 250000" << endl;
                        break;
                    case '2':
                        cout << "Anda memilih hotel Tartarus" << endl;
                        cout << "Anda memilih layanan Premium" << endl;
                        cout << "Biaya per malam        : 300000" << endl;
                        break;
                    case '3':
                        cout << "Anda memilih hotel Tartarus" << endl;
                        cout << "Anda memilih layanan Super" << endl;
                        cout << "Biaya per malam        : 400000" << endl;
                        break;
                    default:
                        cout << "Layanan tak tersedia" << endl;
                        cout << "Keluar program" << endl;
                        exit(0);
                        break;
                }
                break;

            case '2':
                switch(layanan)
                {
                    case '1':
                        cout << "Anda memilih hotel Pentagon" << endl;
                        cout << "Anda memilih layanan Deluxe" << endl;
                        cout << "Biaya per malam        : 1750000" << endl;
                        break;
                    case '2':
                        cout << "Anda memilih hotel Pentagon" << endl;
                        cout << "Anda memilih layanan Premium" << endl;
                        cout << "Biaya per malam        : 2500000" << endl;
                        break;
                    case '3':
                        cout << "Anda memilih hotel Pentagon" << endl;
                        cout << "Anda memilih layanan Super" << endl;
                        cout << "Biaya per malam        : 3000000" << endl;
                        break;
                    default:
                        cout << "Layanan tak tersedia" << endl;
                        cout << "Keluar program" << endl;
                        exit(0);
                        break;
                }
                break;

            case '3':
                switch(layanan)
                {
                    case '1':
                        cout << "Anda memilih hotel Ritz carlton" << endl;
                        cout << "Anda memilih layanan Deluxe" << endl;
                        cout << "Biaya per malam        : 2500000" << endl;
                        break;
                    case '2':
                        cout << "Anda memilih hotel Ritz carlton" << endl;
                        cout << "Anda memilih layanan Premium" << endl;
                        cout << "Biaya per malam        : 3000000" << endl;
                        break;
                    case '3':
                        cout << "Anda memilih hotel Ritz carlton" << endl;
                        cout << "Anda memilih layanan Super" << endl;
                        cout << "Biaya per malam        : 4500000" << endl;
                        break;
                    default:
                        cout << "Layanan tak tersedia" << endl;
                        cout << "Keluar program" << endl;
                        exit(0);
                        break;
                }
                break;

            default:
                cout << "Hotel tak tersedia" << endl;
                cout << "Keluar program" << endl;
                exit(0);
                break;
        }

        cout << "Berapa lama menginap   : "; cin >> lama_menginap;

        system("pause");
        system("cls");

        cout << "Nama hotel             : ";
        if(hotel == '1')
        {
            cout << "Tartarus" << endl;
        }
        else if(hotel == '2')
        {
            cout << "Pentagon" << endl;
        }
        else if(hotel == '3')
        {
            cout << "Ritz carlton" << endl;
        }
        else
        {
            cout << "-" << endl;
        }
        cout << "Jenis layanan          : ";
        if(layanan == '1')
        {
            cout << "Deluxe" << endl;
        }
        else if(layanan == '2')
        {
            cout << "Premium" << endl;
        }
        else if(layanan == '3')
        {
            cout << "Super" << endl;
        }
        else
        {
            cout << "-" << endl;
        }

        cout << "Biaya per malam        : ";
        if(hotel == '1')
        {
            if(layanan == '1')
            {
                cout << "250000" << endl;
            }
            else if(layanan == '2')
            {
                cout << "300000" << endl;
            }
            else if(layanan == '3')
            {
                cout << "400000" << endl;
            }
            else
            {
                cout << "-" << endl;
            }
        }
        else if(hotel == '2')
        {
            if(layanan == '1')
            {
                cout << "1750000" << endl;
            }
            else if(layanan == '2')
            {
                cout << "2500000" << endl;
            }
            else if(layanan == '3')
            {
                cout << "3000000" << endl;
            }
            else
            {
                cout << "-" << endl;
            }
        }
        else if(hotel == '3')
        {
            if(layanan == '1')
            {
                cout << "2500000" << endl;
            }
            else if(layanan == '2')
            {
                cout << "3000000" << endl;
            }
            else if(layanan == '3')
            {
                cout << "4000000" << endl;
            }
            else
            {
                cout << "-" << endl;
            }
        }
        else
        {
            cout << "-" << endl;
        }

        cout << "Total durasi (malam)   : " << lama_menginap << endl;
        cout << "Total harga            : ";
        if(hotel == '1')
        {
            if(layanan == '1')
            {
                total_harga_TD = lama_menginap*TD;
                if( total_harga_TD <= '5000000')
                {
                    cout << total_harga_TD << endl;
                }
                else if(total_harga_TD <= '10000000')
                {
                    cout << 0.9*total_harga_TD << endl;
                }
                else if(total_harga_TD <= '15000000')
                {
                    cout << 0.7*total_harga_TD << endl;
                }
                else if(total_harga_TD > '15000000')
                {
                    cout << 0.5*total_harga_TD << endl;
                }
            }
            else if(layanan == '2')
            {
                total_harga_TP = lama_menginap*TP;
                if( total_harga_TP <= '5000000')
                {
                    cout << total_harga_TP << endl;
                }
                else if(total_harga_TP <= '10000000')
                {
                    cout << 0.9*total_harga_TP << endl;
                }
                else if(total_harga_TP <= '15000000')
                {
                    cout << 0.7*total_harga_TP << endl;
                }
                else if(total_harga_TP > '15000000')
                {
                    cout << 0.5*total_harga_TP << endl;
                }
            }
            else if(layanan == '3')
            {
                total_harga_TS = lama_menginap*TS;
                if( total_harga_TS <= '5000000')
                {
                    cout << total_harga_TS << endl;
                }
                else if(total_harga_TS <= '10000000')
                {
                    cout << 0.9*total_harga_TS << endl;
                }
                else if(total_harga_TS <= '15000000')
                {
                    cout << 0.7*total_harga_TS << endl;
                }
                else if(total_harga_TS > '15000000')
                {
                    cout << 0.5*total_harga_TS << endl;
                }
            }
            else
            {
                cout << "-" << endl;
            }
        }
        else if(hotel == '2')
        {
            if(layanan == '1')
            {
                total_harga_PD = lama_menginap*PD;
                if( total_harga_PD <= '5000000')
                {
                    cout << total_harga_PD << endl;
                }
                else if(total_harga_PD <= '10000000')
                {
                    cout << 0.9*total_harga_PD << endl;
                }
                else if(total_harga_PD <= '15000000')
                {
                    cout << 0.7*total_harga_PD << endl;
                }
                else if(total_harga_PD > '15000000')
                {
                    cout << 0.5*total_harga_PD << endl;
                }
            }
            else if(layanan == '2')
            {
                total_harga_PP = lama_menginap*PP;
                if( total_harga_PP <= '5000000')
                {
                    cout << total_harga_PP << endl;
                }
                else if(total_harga_PP <= '10000000')
                {
                    cout << 0.9*total_harga_PP << endl;
                }
                else if(total_harga_PP <= '15000000')
                {
                    cout << 0.7*total_harga_PP << endl;
                }
                else if(total_harga_PP > '15000000')
                {
                    cout << 0.5*total_harga_PP << endl;
                }
            }
            else if(layanan == '3')
            {
                total_harga_PS = lama_menginap*PS;
                if( total_harga_PS <= '5000000')
                {
                    cout << total_harga_PS << endl;
                }
                else if(total_harga_PS <= '10000000')
                {
                    cout << 0.9*total_harga_PS << endl;
                }
                else if(total_harga_PS <= '15000000')
                {
                    cout << 0.7*total_harga_PS << endl;
                }
                else if(total_harga_PS > '15000000')
                {
                    cout << 0.5*total_harga_PS << endl;
                }
            }
            else
            {
                cout << "-" << endl;
            }
        }
        else if(hotel == '3')
        {
            if(layanan == '1')
            {
                total_harga_RD = lama_menginap*RD;
                if( total_harga_RD <= '5000000')
                {
                    cout << total_harga_RD << endl;
                }
                else if(total_harga_RD <= '10000000')
                {
                    cout << 0.9*total_harga_RD << endl;
                }
                else if(total_harga_RD <= '15000000')
                {
                    cout << 0.7*total_harga_RD << endl;
                }
                else if(total_harga_RD > '15000000')
                {
                    cout << 0.5*total_harga_RD << endl;
                }
            }
            else if(layanan == '2')
            {
                total_harga_RP = lama_menginap*RP;
                if( total_harga_RP <= '5000000')
                {
                    cout << total_harga_RP << endl;
                }
                else if(total_harga_RP <= '10000000')
                {
                    cout << 0.9*total_harga_RP << endl;
                }
                else if(total_harga_RP <= '15000000')
                {
                    cout << 0.7*total_harga_RP << endl;
                }
                else if(total_harga_RP > '15000000')
                {
                    cout << 0.5*total_harga_RP << endl;
                }
            }
            else if(layanan == '3')
            {
                total_harga_RS = lama_menginap*RS;
                if( total_harga_RS <= '5000000')
                {
                    cout << total_harga_RS << endl;
                }
                else if(total_harga_RS <= '10000000')
                {
                    cout << 0.9*total_harga_RS << endl;
                }
                else if(total_harga_RS <= '15000000')
                {
                    cout << 0.7*total_harga_RS << endl;
                }
                else if(total_harga_RS > '15000000')
                {
                    cout << 0.5*total_harga_RS << endl;
                }
            }
            else
            {
                cout << "-" << endl;
            }
        }
        else
        {
            cout << "-" << endl;
        }
    }

    return 0;
}
