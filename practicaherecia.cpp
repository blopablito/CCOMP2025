#include <iostream>

using namespace std;
//Vehiculo
class Vehicle {
protected:
    char* license;
    int year;
public:
    Vehicle(const char* myLicense, int myYear){
        int len= 0;
        while(myLicense[len] != '\0'){
            len++;
        }
        license = new char[len + 1];
        for(int i=0; i<= len; i++){
            license[i]= myLicense[i];
        }
        year = myYear;
    }
    const char* getLicense() const {
        return license;
    }
    int getYear() const{
        return year;
    }
    virtual ~Vehicle(){
        delete[] license;
    }
};

//Carro
class Car: public Vehicle{
private:
    int Puertas;
public:
    Car(const char* myLicense, int myYear, int myPuertas): Vehicle(myLicense, myYear){
    Puertas = myPuertas;
    }
    int getPuertas() const {
    return Puertas;
    }
};

//Truck
class Truck: public Vehicle{
private:
    float Capacidad;
public:
    Truck(const char* myLicense, int myYear, float myCapacidad):Vehicle(myLicense,myYear){
        Capacidad= myCapacidad;
    }
    float getCapacidad() const {
        return Capacidad;
    }



};

int main()
{
    int size;
    cout << "Ingrese cantidad de vehiculos:";
    cin >> size;
    Vehicle** vehicles = new Vehicle*[size];
    for (int i=0; i < size; i++){
        int tipo;
        cout << "Ingre que tipo de vehivulo es CAR O TRUCK";
        cin >> tipo;
        char license[100];
        int year;
        cout << "Ingrese su placa";
        cin >> license;
        cout << "Ingrese su año";
        cin >> year;
        if (tipo ==1){
            int Puertas;
            cout << "Ingrese el numero de puerta";
            cin >> Puertas;
            vehicles[i] = new Car(license,year,Puertas);
        } else if (tipo==2){
            float Capacidad;
            cout << "Ingrese la capacidad";
            cin>> Capacidad;
            vehicles[i] = new Car(license,year,Capacidad);
        }else {
            cout << "Ingreso un dato invalido";
            vehicles[i]= nullptr;
        }
    cout << "Vehiculo";
    for(int j=0; j; j++){
        if(vehicles[j]){
            cout << "Vehiculo num" << j+1 << ":Año=" << vehicles[j]->getYear() <<"Placa=" << vehicles[j]->getLicense()<< endl;
            }

        }

    }
}
