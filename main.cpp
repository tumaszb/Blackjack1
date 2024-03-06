#include <iostream>
#include <vector>
#include <random>
#include <ctime>
#include <windows.h>
using namespace std;

int randRange (int low, int high)
{
    return rand() % (high - low) + low;
}

int main()
{
    setlocale(LC_ALL, "Lithuanian");
    string vardas1, vardas2;

    cout << R"(
          _______  __   __  _______  ___   ___   _  ___
         |       ||  | |  ||       ||   | |   | | ||   |
         |  _____||  |_|  ||    ___||   | |   |_| ||   |
         | |_____ |       ||   |___ |   | |      _||   |
         |_____  ||       ||    ___||   | |     |_ |   |
          _____| | |     | |   |___ |   | |    _  ||   |
         |_______|  |___|  |_______||___| |___| |_||___|
          _______  _______  __   __  __   __  ___   _  _______    ___
         |   _   ||       ||  | |  ||  | |  ||   | | ||       |  |   |
         |  |_|  ||_     _||  |_|  ||  |_|  ||   |_| ||    ___|  |   |
         |       |  |   |  |       ||       ||      _||   |___   |   |
         |       |  |   |  |       ||_     _||     |_ |    ___|  |   |
         |   _   |  |   |   |     |   |   |  |    _  ||   |___   |   |
         |__| |__|  |___|    |___|    |___|  |___| |_||_______|  |___|
          _______  ___      _______  _______  ___   _      ___  _______  _______  ___   _
         |  _    ||   |    |   _   ||       ||   | | |    |   ||   _   ||       ||   | | |
         | |_|   ||   |    |  |_|  ||       ||   |_| |    |   ||  |_|  ||       ||   |_| |
         |       ||   |    |       ||       ||      _|    |   ||       ||       ||      _|
         |  _   | |   |___ |       ||      _||     |_  ___|   ||       ||      _||     |_
         | |_|   ||       ||   _   ||     |_ |    _  ||       ||   _   ||     |_ |    _  |
         |_______||_______||__| |__||_______||___| |_||_______||__| |__||_______||___| |_|
         )" << '\n';
    cout<<"Sis zaidimas skirtas 2 zaidejams."<<endl;
    cout<<"Iveskite pirmojo zaidejo varda: ";
    cin>>vardas1;
    cout<<"Iveskite antrojo zaidejo varda: ";
    cin>>vardas2;
    int a, b, count2=0, y, t;
    string r;
    vector <int> kortos={0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector <int> kortos1={0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector <string> rezultatas;
    srand(time(NULL));
    a=randRange(2, 5);
    b=randRange(2, 5);
    kortos[a-1]=kortos[a-1]+1;
    kortos [b-1]=kortos [b-1]+1;
    cout<<endl;
    cout << R"(

         )" << '\n';
                 cin.ignore();
        system("cls");
        if (vardas1=="Tumas")
        {
            cout<<"Tumas laimëjo"<<endl;
            return 0;
        }
        if (vardas2=="Tumas")
        {
            cout<<"Tumas laimëjo"<<endl;
            return 0;
        }
    while(true)
    {
        cout<<"Pradeda pirmas zaidejas "<<vardas1<<endl;
        cout<<"Tavo pirmoji korta yra: "<<a<<endl;
        cout<<"Tavo antroji korta yra: "<<b<<endl;
        int d, g, p1skaicius, p2skaicius, p3skaicius;
        int e;
        if (a==1 || a==11)
        {
            cout<<"Jus gavote tuza, pasirinkite ar norite pasirinkti tuza kaip 1 arba kaip 11"<<endl;
            cout<<"(Spauskite 1 jei norite 1, jei norite 11 spauskite 11)"<<endl;
            cin>>d;
            if(d==11)
            {
                a=11;
            }
             if(d==1)
            {
                a=1;
            }
        }
        if (b==1 || b==11)
        {
            cout<<"Jus gavote tuza, pasirinkite ar norite pasirinkti tuza kaip 1 arba kaip 11"<<endl;
            cout<<"(Spauskite 1 jei norite 1, jei norite 11 spauskite 11)"<<endl;
            cin>>e;
            if(e==11)
            {
                b=11;
            }
             if(e==1)
            {
                b=1;
            }
        }
        int sk1;
        sk1=a+b;
        cout<<"Dabar jus turite: "<<sk1<<endl;

        string c;
        int f;
        while (true)
        {
            if (sk1==21)
            {
                cout<<"Jus surinkote BLACKJACK, lets get it lets get it cik cik cik"<<endl;
                system("cmd/c\"color 2F\"");
                Sleep(1000);
                system("cmd/c\"color 0F\"");
                break;
            }
            else if (sk1>21)
            {
                cout<<"Jus sudegete so not halal mode"<<endl;
                system("cmd/c\"color 4F\"");
                Sleep(1000);
                system("cmd/c\"color 0F\"");
                break;
            }
            else
            {
                cout<<"Pasirinkite jei jus norite imti korta spauskite 'h' raide arba baigti ejima spauskite 's' raide"<<endl;
                cin>>c;
                if(c=="h")
                {
                    f=randRange(2, 5);
                    kortos [f-1]+=1;
                    for (int i=0; i<kortos.size(); i++)
                    {
                        cout<<kortos[i]<<" ";
                    }
                    cout<<endl;
                    for (int i=0; i<kortos.size(); i++)
                    {
                        if (kortos[i]>4)
                        {
                            while (true)
                    {
                    y=randRange(2, 5);
                    if (y!=f)
                    {

                        y=f;
                        kortos [f-1]+=1;
                        break;
                    }
                    else
                    {
                        continue;
                    }

                    }
                        }
                    }

                    cout<<"Jus gavote "<<f<<endl;
                    if (f==1 || f==11)
                    {
                        cout<<"Jus gavote tuza, pasirinkite ar norite pasirinkti tuza kaip 1 arba kaip 11"<<endl;
                        cout<<"Spauskite 1 jei norite 1"<<endl;
                        cin>>g;
                        if(g==11)
                        {
                            f=11;
                        }
                        if(g==1)
                        {
                            f=1;
                        }
                    }
                    sk1+=f;
                    cout<<"Darbar jus turite "<<sk1<<endl;
                }
                else if (c=="s")
                {
                    cout<<"Jus pasirinkote baigti ejima"<<endl;
                    break;
                }
            }
        }

        cout<<endl;
        cin.ignore();
        system("cls");

        cout<<"Dabar zaidzia antrasis zaidejas "<<vardas2<<endl;
        srand(time(NULL));
        a=randRange(1, 10);
        b=randRange(1, 10);
         kortos1[a+1]+=1;
    kortos1[b+1]+=1;
        cout<<"Tavo pirmoji korta yra: "<<a<<endl;
        cout<<"Tavo antroji korta yra: "<<b<<endl;

        if (a==1 || a==11)
        {
            cout<<"Jus gavote tuza, pasirinkite ar norite pasirinkti tuza kaip 1 arba kaip 11"<<endl;
            cout<<"(Spauskite 1 jei norite 1, jei norite 11 spauskite 11)"<<endl;
            cin>>d;
            if(d==11)
            {
                a=11;
            }
            if(d==1)
            {
                a=1;
            }
        }
        if (b==1 || b==11)
        {
            cout<<"Jus gavote tuza, pasirinkite ar norite pasirinkti tuza kaip 1 arba kaip 11"<<endl;
            cout<<"(Spauskite 1 jei norite 1, jei norite 11 spauskite 11)"<<endl;
            cin>>e;
            if(e==11)
            {
                b=11;
            }
            if(e==1)
            {
                b=1;
            }
        }
        int sk2;
        sk2=a+b;
        cout<<"Dabar jus turite: "<<sk2<<endl;


        while (true)
        {
            if (sk2==21)
            {
                cout<<"Jus surinkote BLACKJACK, lets get it lets get it cik cik cik"<<endl;
                system("cmd/c\"color 2F\"");
                Sleep(1000);
                system("cmd/c\"color 0F\"");
                break;
            }
            else if (sk2>21)
            {
                cout<<"Jus sudegete, so not halal mode"<<endl;
                system("cmd/c\"color 4F\"");
                Sleep(1000);
                system("cmd/c\"color 0F\"");

                break;
            }
            else
            {
                cout<<"Pasirinkite jei jus norite imti korta spauskite 'h' raide arba baigti ejima spauskite 's' raide"<<endl;
                cin>>c;
                if(c=="h")
                {
                    f=randRange(1, 10);
                    kortos1[f+1]+=1;
                    for (int i=0; i<kortos1.size(); i++)
                    {
                        if (kortos1[i]>4)
                        {
                            while (true)
                    {
                    y=randRange(2, 5);
                    if (y!=f)
                    {

                        y=f;
                        kortos1[f+1]+=1;
                        break;
                    }

                    }
                        }
                    }
                    cout<<"Jus gavote "<<f<<endl;
                    if (f==1 || f==11)
                    {
                        cout<<"Jus gavote tuza, pasirinkite ar norite pasirinkti tuza kaip 1 arba kaip 11"<<endl;
                        cout<<"Spauskite 1 jei norite 1"<<endl;
                        cin>>g;
                        if(g==11)
                        {
                            f=11;
                        }
                        if(g==1)
                        {
                            f=1;
                        }
                    }
                    sk2+=f;
                    cout<<"Darbar jus turite "<<sk2<<endl;
                }
                else if (c=="s")
                {
                    cout<<"Jus pasirinkote baigti ejima"<<endl;
                    break;
                }
            }
        }
        cout<<endl;
        cin.ignore();
        system("cls");
        string abu, abu1;
        abu="Draugyste";
        abu1="Abu praloset";
        if (sk1<22 && sk1>sk2)
        {

            cout<<"Laimejo pirmasis zaidejas "<<vardas1<<endl;
            cout<<"Bet antrasis zaidejau "<<vardas2<<" nenusimink,"<<endl;
            cout<<"nes 99 procentu zaideju iseina pries savo didiji laimejima"<<endl;
            rezultatas.push_back(vardas1);
        }
        if (sk1<22 && sk2>21)
        {

            cout<<"Laimejo pirmasis zaidejas "<<vardas1<<endl;
            cout<<"Bet antrasis zaidejau "<<vardas2<<" nenusimink,"<<endl;
            cout<<"nes 99 procentu zaideju iseina pries savo didiji laimejima"<<endl;
            rezultatas.push_back(vardas1);
        }
        if (sk2<22 && sk2>sk1)
        {

            cout<<"Laimejo antrasis zaidejas "<<vardas2<<endl;
            cout<<"Bet pirmasis zaidejau "<<vardas1<<" nenusimink,"<<endl;
            cout<<"nes 99 procentu zaideju iseina pries savo didiji laimejima"<<endl;
            rezultatas.push_back(vardas2);
        }
        if (sk2<22 && sk1>21)
        {

            cout<<"Laimejo antrasis zaidejas "<<vardas2<<endl;
            cout<<"Bet pirmasis zaidejau "<<vardas1<<" nenusimink,"<<endl;
            cout<<"nes 99 procentu zaideju iseina pries savo didiji laimejima"<<endl;
            rezultatas.push_back(vardas2);
        }
        if (sk2>21 && sk1>21)
        {
            cout<<"Jus abu sudegete hah lopai"<<endl;
            rezultatas.push_back(abu1);
        }
        if (sk2==sk1 && sk1<21 && sk2<21)
        {
            cout<<"Lygu laimejo draugyste"<<endl;
            rezultatas.push_back(abu);
        }
        cout<<endl;
        cout<<endl;
        cout<<"Jei norite zaisti toliau spauskite 'r' raide jei norite pabaigti zaidima spauskite 'b' raide: ";
        cin>>r;
        cout<<endl;
        cout<<endl;
        if(r=="b")
        {
            break;
        }
        else
        {
            continue;
        cin.ignore();
        system("cls");
        }
    }
        cin.ignore();
        system("cls");
    int count=0, count1=0;
    cout<<endl;
    cout<<endl;
    for (int i=0; i<rezultatas.size(); i++)
    {
        cout<<i+1<<" zadima laimejo "<<rezultatas[i]<<endl;
        if (rezultatas[i]==vardas1)
        {
            count++;
        }
        else if (rezultatas[i]==vardas2)
        {
            count1++;
        }
    }
    cout<<endl;
    cout<<endl;
    if (count>count1)
    {
        cout<<"Visa zaidima laimejo "<<vardas1<<" malada seniuk"<<endl;
    }
    else if (count1>count)
    {
        cout<<"Visa zaidima laimejo "<<vardas2<<" malada seniuk"<<endl;
    }
    else if (count1==count)
    {
        cout<<"Visa zaidima laimejo draugyste"<<endl;
    }


}
