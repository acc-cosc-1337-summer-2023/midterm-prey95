#include "question3.h"


int main()
{
    double mass, velocity, result;
    int choice;
    do{
        cout << "Please enter the mass in KG: ";
        cin >> mass;
        do{
            if(mass < 0 || cin.fail()){
                
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                cout << "Invalid input. Please retry: ";
                cin >> mass;
            }
        }while(mass < 0 || cin.fail());
        cout << "Please enter velocity: ";
        cin >> velocity;
        do{
            if(velocity < 0 || cin.fail()){
                
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                cout << "Invalid input. Please retry: ";
                cin >> velocity;
            }
        }while(cin.fail());

        result = get_kinetic_energy(mass, velocity);
        cout << "Kinetic Energy: " << result << "\n";

        cout<<"Press to (1) Continue (0) Exit ";
        cin>>choice;
    }while(choice != 0);

    return 0;
}