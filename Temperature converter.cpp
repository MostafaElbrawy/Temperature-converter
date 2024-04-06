#include <iostream>
using namespace std;

enum enTemperature{ Fahrenheit=1 , Celsius=2 ,Exit=3 };


double ToCelsius() {

    double temperature;

    cout << "Enter the temperature in Fahrenheit: ";
    cin >> temperature;

    return (temperature - 32) * (5.0 / 9);

}


double ToFahrenheit(){

    double temperature;
    cout << "Enter the temperature in Celsius: ";
    cin >> temperature;

    return temperature * (9.0 / 5) + 32;

}


enTemperature ReadTemperatureType() {
    int type;

    cout << "(1) Fahrenheit\n";
    cout << "(2) Celsius\n";
    cout << "(3) Exit\n";
    cout << "Choose temperature type you want to convert from: ";

    cin >> type;

    return enTemperature(type);


}


bool AnotherOperation() {

    char again;

    cout << "\nAnother operation? (Y/N) : ";
    cin >> again;

    do {



        if (again == 'y' || again == 'Y')
        {
            system("cls");
            return true;
        }

        else if (again == 'n' || again == 'N')
        {
            cout << "\nBye :)" << endl;
            exit(0);
        }

        else
        {
            do {
                cout << "\nWrong choice, please choose (Y/N) : ";
                cin >> again;

            } while (again != 'y' && again != 'Y' && again != 'n' && again != 'N');
        }
    } while (true);
    
}


void Converter() {

    do {
        switch (ReadTemperatureType()) {

        case Fahrenheit:
            cout << "The temperature in Celsius= " << ToCelsius() << "\n";
            break;

        case Celsius:
            cout << "The temperature in Fahrenheit= " << ToFahrenheit() << "\n";
            break;

        case Exit:
            cout << "\nBye :)" << endl;
            exit(0);

        default:
            system("cls");
            cout << "Wrong choice\n";
            cout << "Please choose from the list\n\n";
            Converter();
        }

    } while (AnotherOperation());


}


void StartTemperatureConverter() {

    cout << "WELCOME TO TEMPERATURE CONVERTER\n";
    cout << "***********************************************\n";

    Converter();

}


int main()
{
   
    StartTemperatureConverter();
    return 0;
    

   
}

