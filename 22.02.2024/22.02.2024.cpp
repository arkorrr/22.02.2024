#include <iostream>
#include <string>

using namespace std;

class Processor 
{
public:
    string model = "Intelcore i5 10100k";
    void output() {
        cout << "Processor: " << model << endl;
    }
};

class RAM 
{
public:
    int size = 16;
    void output() 
    {
        cout << "RAM: " << size << "GB" << endl;
    }
};

class Mouse 
{
public:
    string type = "Wireless";
    void output() 
    {
        cout << "Mouse: " << type << endl;
    }
};

class Webcam 
{
public:
    int resolution = 1080;
    void output() 
    {
        cout << "Webcam: " << resolution << "p" << endl;
    }
};

class GraphicsCard 
{
public:
    string model = "1050 ti";
    void output() {
        cout << "Graphics Card: " << model << endl;
    }
};

class Laptop {
private:
    Processor processor;
    RAM ram;
    Mouse mouse;
    Webcam webcam;
    GraphicsCard graphicsCard;
public:
    void output() {
        processor.output();
        ram.output();
        mouse.output();
        webcam.output();
        graphicsCard.output();
    }
};

int main() {
    Laptop myLaptop;
    myLaptop.output();
}