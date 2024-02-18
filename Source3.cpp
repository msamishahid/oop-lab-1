#include <iostream>
using namespace std;

class Car {
private:
    string make;
    string model;
    int year;
    double mileage;
    bool needsService;

public:
    Car(string make, string model, int year, double mileage)
        : make(make), model(model), year(year), mileage(mileage), needsService(false) {}

    void setMileage(double newMileage) {
        mileage = newMileage;
        checkService();
    }

    double getMileage() const {
        return mileage;
    }

    void checkService() {
        if (mileage >= 100000) {
            needsService = true;
            cout << "Service needed for " << make << " " << model << endl;
        }
        else {
            needsService = false;
            cout << "No service needed for " << make << " " << model << endl;
        }
    }

    void displayInfo() const {
        cout << "Make: " << make << endl
            << "Model: " << model << endl
            << "Year: " << year << endl
            << "Mileage: " << mileage << endl;
    }
};

int main() {
    Car myCar("Honda", "Accord", 2018, 65000);

    cout << "Initial car information:" << endl;
    myCar.displayInfo();

    myCar.setMileage(75000);

    cout << "\nUpdated car information:" << endl;
    myCar.displayInfo();

    return 0;
}
