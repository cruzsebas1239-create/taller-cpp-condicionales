#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    double temperaturaCelsius;
    double temperaturaFahrenheit;
    double temperaturaKelvin;
    double temperaturaRankine;

    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> temperaturaCelsius;

    
    temperaturaFahrenheit = (temperaturaCelsius * 9.0 / 5.0) + 32.0;
    temperaturaKelvin = temperaturaCelsius + 273.15;
    temperaturaRankine = (temperaturaCelsius + 273.15) * 9.0 / 5.0;

    cout << setprecision(4);
    cout << "Temperatura en Fahrenheit: " << temperaturaFahrenheit << endl;
    cout << "Temperatura en Kelvin: " << temperaturaKelvin << endl;
    cout << "Temperatura en Rankine: " << temperaturaRankine << endl;

    return 0;
}
