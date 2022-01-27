#include<iostream>
using namespace std;
int main()
{
    int T;
    char n;
    cin>>T;
    while(T--)
    {
        cin>>n;
        switch (n) 
        {
            case 'B':
                cout << "BattleShip" << endl;
                break;
            case'b':
                cout<< "BattleShip" <<endl;
                break;
            case 'C':
                cout << "Cruiser" << endl;
                break;
            case 'c':
                cout<< "Cruiser" <<endl;
                break;
            case 'D':
                cout << "Destroyer" << endl;
                break;
            case 'd':
                cout<< "Destroyer" <<endl;
            break;
            case 'f':
                cout<< "Frigate" <<endl;
            break;
            default:
                cout << "Frigate" << endl;
                break;
        }
    }
    return 0;
}
