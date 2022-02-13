# include <iostream>
# include <unistd.h>
using namespace std;

int main(){
    cout << endl << "------ Amateur Boxing Weight Divisions -------------------------" << endl << endl;
    cout << "Welcome to the Amateur Boxing Division Checker" << endl;
    cout << "Enter the following details below\n" << endl;
    
    // variables for user input
    string gender;
    int weight;
    string first;
    string last;

    // user input
    cout << "Enter Firstname: ";
    cin >> first;
    cout << "Enter Lastname: ";
    cin >> last;

    // user input
    cout << "Enter gender [M|F]: ";
    cin >> gender;
    cout << "Enter weight in kg: ";
    cin >> weight;

    // male divisions
    if (gender=="M" || gender=="m"){
        if (weight>=46 && weight<=48){
            cout << endl << first << " " << last << " : M : " << "Minimum Weight\n" << endl;
        }
        else if (weight>=49 && weight<=50){
            cout << endl << first << " " << last << " : M : " << "No Class\n" << endl;
        }
        else if (weight==51){
            cout << endl << first << " " << last << " : M : " << "Flyweight\n" << endl;
        }
        else if (weight>=52 && weight<=53){
            cout << endl << first << " " << last << " : M : " << "No Class\n" << endl;
        }
        else if (weight>=54 && weight<=56){
            cout << endl << first << " " << last << " : M : " << "Bantam Weight\n" << endl;
        } 
        else if (weight>=57 && weight<=59){
            cout << endl << first << " " << last << " : M : " << "Feather Weight\n" << endl;
        }
        else if (weight>=60 && weight<=62){
            cout << endl << first << " " << last << " : M : " << "Light Weight\n" << endl;
        }
        else if (weight>=63 && weight<=66){
            cout << endl << first << " " << last << " : M : " << "Light Welterweight\n" << endl;
        }
        else if (weight>=67 && weight<=70){
            cout << endl << first << " " << last << " : M : " << "Welterweight\n" << endl;
        }
        else if (weight>=71 && weight<=74){
            cout << endl << first << " " << last << " : M : " << "Light Middleweight\n" << endl;
        }
        else if (weight>=75 && weight<=79){
            cout << endl << first << " " << last << " : M : " << "Middleweight\n" << endl;
        }
        else if (weight>=80 && weight<=85){
            cout << endl << first << " " << last << " : M : " << "Light Heavyweight\n" << endl;
        }
        else if (weight>=86 && weight<=91){
            cout << endl << first << " " << last << " : M : " << "Cruiserweight\n" << endl;
        }
        else if (weight==92){
            cout << endl << first << " " << last << " : M : " << "Heavyweight\n" << endl;
        }
        else if (weight>92){
            cout << endl << first << " " << last << " : M : " << "Super Heavyweight\n" << endl;
        }
    }
    // female divisions
    else if (gender == "F" || gender == "f"){
        if (weight>=45 && weight<=48){
            cout << endl << first << " " << last << " : F : " << "Minimum Weight\n" << endl;
        }
        else if (weight==50){
            cout << endl << first << " " << last << " : F : " << "Light Flyweight\n" << endl;
        }
        else if (weight==52){
            cout << endl << first << " " << last << " : F : " << "Flyweight\n" << endl;
        }
        else if (weight==53){
            cout << endl << first << " " << last << " : F : " << "No Class\n" << endl;
        }
        else if (weight>=54 && weight<=56){
            cout << endl << first << " " << last << " : F : " << "Bantam Weight\n" << endl;
        }
        else if (weight>=57 && weight<=59){
            cout << endl << first << " " << last << " : F : " << "Feather Weight\n" << endl;
        }
        else if (weight>=60 && weight<=62){
            cout << endl << first << " " << last << " : F : " << "Light Weight\n" << endl;
        }
        else if (weight>=63 && weight<=65){
            cout << endl << first << " " << last << " : F : " << "Light Welterweight\n" << endl;
        }
        else if (weight>=66 && weight<=69){
            cout << endl << first << " " << last << " : F : " << "Welterweight\n" << endl;
        }
        else if (weight>=70 && weight<=74){
            cout << endl << first << " " << last << " : F : " << "Light Middleweight\n" << endl;
        }
        else if (weight>=75 && weight<=80){
            cout << endl << first << " " << last << " : F : " << "Middleweight\n" << endl;
        }
        else if (weight==81){
            cout << endl << first << " " << last << " : F : " << "Light Heavyweight\n" << endl;
        }
        else if (weight>81){
            cout << endl << first << " " << last << " : F : " << "Heavyweight\n" << endl;
        }
    }
    sleep(2);
    cout << "----------------------------------------------------------------" << endl << endl;
    
    // below gives user option to add another boxer/end program
    string add;
    cout << "Would you like to add another boxer? [Y|N]: ";
    cin >> add;
    if (add=="Y" || add=="y"){
        sleep(2);
        system("cls");
        main();
    }
    else if (add=="N" || add=="n"){
        sleep(2);
        cout << "Goodbye\n" << endl;
    }
    return 0;
}
