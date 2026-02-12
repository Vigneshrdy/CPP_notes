#include <iostream>
#include <string>
#include<vector>//ds standard template
using namespace std;


class Medicine {
private:
    string name;
    double price;
    int quantity;
    
public:
    Medicine(string n = "Unknown", double p = 0.0, int q = 0) 
        : name(n), price(p), quantity(q) {}
    
    // Getters
    string getName() const { return name; }
    double getPrice() const { return price; }
    int getQuantity() const { return quantity; }
    
   
    bool operator<(const Medicine& other) const {
        return price < other.price;
    }
    
    bool operator>(const Medicine& other) const {
        return price > other.price;
    }
    
   
    bool operator==(const Medicine& other) const {
        return name == other.name && price == other.price;
    }
    
   
    
    
    Medicine operator+(const Medicine& other) const {
        if (name == other.name) {
            return Medicine(name, price, quantity + other.quantity);
        }
        cout << "Warning: Adding different medicines!" << endl;
        return *this;
    }
    
    
    
    
    Medicine& operator+=(int amount) {
        quantity += amount;
        return *this;  
    }
    
  
    
  
    Medicine& operator++() {
        ++quantity;
        return *this;
    }
    
    Medicine& operator--() {
        --quantity;
        return *this;
    }
    // Postfix increment (med++)
    Medicine operator++(int) {  // int parameter distinguishes postfix
        Medicine temp = *this;  // Save current state
        ++quantity;
        return temp;  // Return old value
    }
    
    Medicine operator--(int) {  // int parameter distinguishes postfix
        Medicine temp = *this;  // Save current state
        --quantity;
        return temp;  // Return old value
    }
};

int main()
{
    Medicine med1("Aspirin", 5.99, 100);
    Medicine med2("Aspirin", 5.99, 50);
    Medicine med3("Ibuprofen", 7.25, 75);

    cout << "Testing == operator:" << endl;
    if (med1 == med2)
        cout << "med1 and med2 are the same medicine" << endl;
    else
        cout << "they are different" << endl;

    cout << "\nTesting < and > operators:" << endl;
    if (med1 < med3)
        cout << med1.getName() << " is cheaper than " << med3.getName() << endl;
    if (med3 > med1)
        cout << med3.getName() << " is more expensive than " << med1.getName() << endl;

    cout << "\nTesting + operator:" << endl;
    Medicine combined = med1 + med2;
    cout << "combined quantity = " << combined.getQuantity() << endl;

    cout << "\nTesting += operator:" << endl;
    cout << "med1 quantity before: " << med1.getQuantity() << endl;
    med1 += 20;
    cout << "med1 quantity after += 20: " << med1.getQuantity() << endl;

    cout << "\nTesting prefix ++ and --:" << endl;
    cout << "med2 quantity before: " << med2.getQuantity() << endl;
    ++med2;
    cout << "after ++med2: " << med2.getQuantity() << endl;
    --med2;
    cout << "after --med2: " << med2.getQuantity() << endl;

    cout << "\nTesting postfix ++ and --:" << endl;
    cout << "med3 quantity before: " << med3.getQuantity() << endl;
    Medicine old1 = med3++;
    cout << "value returned by med3++ (old value): " << old1.getQuantity() << endl;
    cout << "med3 quantity after: " << med3.getQuantity() << endl;
    Medicine old2 = med3--;
    cout << "value returned by med3-- (old value): " << old2.getQuantity() << endl;
    cout << "med3 quantity after: " << med3.getQuantity() << endl;

    return 0;
}