#include <iostream>
#include <string>

using namespace std;


class ElectricKettle {
private:
    string brand;
    double capacity;
    int power;
    bool isPluggedIn;
    int waterLevel;

public:

    void SetBrand(string brand)
    {
        this->brand = brand;
    }

    string GetBrand() const
    {
        return brand;
    }

    void SetCapacity(double capacity)
    {
        this->capacity = capacity;
    }

    double GetCapacity() const
    {
        return capacity;
    }

    void SetPower(int power)
    {
        this->power = power;
    }

    int GetPower() const
    {
        return power;
    }

    void SetWater(int waterLevel)
    {
        this->waterLevel = waterLevel;
    }

    int GetWater() const
    {
        return waterLevel;
    }

    void SetPluggedIn(bool isPluggedIn)
    {
        this->isPluggedIn = isPluggedIn;
    }

    bool GetPluggedIn() const
    {
        return isPluggedIn;
    }

    void PuggedIn()
    {
        cout << "Kettle is plugged in\n";
    }

    void Unplug()
    {
        cout << " Kettle is unplagged\n";
    }

    void FillWater()
    {
        cout << "Kettle is filling with water\n";
    }

    void Boil()
    {
        cout << "kettle boils water\n";
    }

    void PourTea()
    {
        cout << "pour tea\n";
    }
};

class Book {
private:
    string title;
    string author;
    int pageCount;
    bool isHardcover;
    double price;

public:

    void SetTitle(string title)
    {
        this->title = title;
    }

    string GetTitle() const
    {
        return title;
    }

    void SetAuthor(string author)
    {
        this->author = author;
    }

    string GetAuthor() const
    {
        return author;
    }

    void SetPage(int pageCount)
    {
        this->pageCount = pageCount;
    }

    int GetPage() const
    {
        return pageCount;
    }

    void SetHardCover(bool isHardcover)
    {
        this->isHardcover = isHardcover;
    }

    bool GetHardCover() const
    {
        return isHardcover;
    }

    void GetPrice(double price)
    {
        this->price = price;
    }

    void Read()
    {

    }
    void BookmarkPage()
    {

    }
    void Review()
    {

    }
    void Lend()
    {

    }
    void CalculateDiscountPrice()
    {

    }
};

class Smartphone {
private:
    string brand;
    string model;
    int capacityGB;
    bool hasDualCamera;
    bool isWaterproof;

public:

    void SetBrand(string brand)
    {
        this->brand = brand;
    }

    string GetBrand() const
    {
        return brand;
    }

    void SetModel(string model)
    {
        this->model = model;
    }

    string GetModel() const
    {
        return model;
    }

    void SetCapacity(int capacityGB)
    {
        this->capacityGB = capacityGB;
    }

    int GetCapacity() const
    {
        return capacityGB;
    }

    void SetCamera(bool hasDualCamera)
    {
        this->hasDualCamera = hasDualCamera;
    }

    bool GetCamera() const
    {
        return hasDualCamera;
    }

    void SetWaterProof(bool isWaterproof)
    {
        this->isWaterproof = isWaterproof;
    }

    bool GetWaterProof() const
    {
        return isWaterproof;
    }

    void MakeCall()
    {

    }
    void TakePhoto()
    {

    }
    void InstallApp()
    {

    }
    void CheckStorageSpace()
    {

    }
    void SetAlarm()
    {

    }
};

class Cat {
private:
    string name;
    int age;
    string color;
    bool isMale;
    bool hasCollar;

public:

    void SetName(string name)
    {
        this->name = name;
    }

    string GetName() const
    {
        return name;
    }

    void SetAge(int age)
    {
        this->age = age;
    }

    int GetAge() const
    {
        return age;
    }

    void SetColor(string color)
    {
        this->color = color;
    }

    string GetColor() const
    {
        return color;
    }

    void SetMale(bool isMale)
    {
        this->isMale = isMale;
    }

    bool GetMale() const
    {
        return isMale;
    }

    void SetCollar(bool hasCollar)
    {
        this->hasCollar = hasCollar;
    }

    bool GetCollar() const
    {
        return hasCollar;
    }

    void Meow()
    {

    }

    void Sleep()
    {

    }

    void Eat()
    {

    }

    void Purr()
    {

    }

    void Play()
    {

    }
};

class RemoteControl {
private:
    string brand;
    bool hasBattery;
    int buttonsCount;
    bool isProgrammable;
    bool isTouchScreen;

public:

    void SetBrand(string brand)
    {
        this->brand = brand;
    }

    string GetBrand() const
    {
        return brand;
    }

    void SetBattery(bool hasBattery)
    {
        this->hasBattery = hasBattery;
    }

    bool GetBattery() const
    {
        return hasBattery;
    }

    void SetButtons(int buttonsCount)
    {
        this->buttonsCount = buttonsCount;
    }

    int GetButtons() const
    {
        return buttonsCount;
    }

    void SetProgrammable(bool isProgrammable)
    {
        this->isProgrammable = isProgrammable;
    }

    bool GetProgrammable() const
    {
        return isProgrammable;
    }

    void SetTouchScreen(bool isTouchScreen)
    {
        this->isTouchScreen = isTouchScreen;
    }

    bool GetTouchScreen() const
    {
        return isTouchScreen;
    }

    void PressButton()
    {

    }

    void PowerOn()
    {

    }

    void PowerOff()
    {

    }

    void ProgramButton()
    {

    }

    void AdjustVolume()
    {

    }
};

int main()
{

}