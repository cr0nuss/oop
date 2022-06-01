//
// Created by sad on 30.03.2022.
//
#ifndef UNTITLED4_COMPLEX_H
#define UNTITLED4_COMPLEX_H
#include <iostream>
#include <cmath>

class complexNumber {
public:

    double firstImageNumber;
    double firstRealNumber;
    void setValues(double image, double real) {
        firstImageNumber = image;
        firstRealNumber = real;
    }

    [[nodiscard]] double abs() const {
        return pow(((firstRealNumber * firstRealNumber) + (firstImageNumber * firstImageNumber)), 0.5);
    }

    complexNumber operator+(const complexNumber &c) const  // перегрузка оператора сложения
    {
        complexNumber temp{};

        temp.firstRealNumber = firstRealNumber + c.firstRealNumber;
        temp.firstImageNumber = firstImageNumber + c.firstImageNumber;

        return temp;
    }
    complexNumber operator - (complexNumber &c) const // перегрузка оператора вычитания
    {
        complexNumber temp{};

        temp.firstRealNumber = firstRealNumber - c.firstRealNumber;
        temp.firstImageNumber = firstImageNumber - c.firstImageNumber;

        return temp;
    }
    complexNumber operator *(const complexNumber &c) const {
        complexNumber temp{};
        temp.firstRealNumber = firstRealNumber * c.firstRealNumber;
        temp.firstImageNumber = firstRealNumber * c.firstImageNumber;

        return temp;
    }
    complexNumber operator /(const complexNumber &c) const {
        complexNumber temp{};
        double r = c.firstRealNumber * c.firstRealNumber + c.firstImageNumber * c.firstImageNumber;
        temp.firstRealNumber = (firstRealNumber * c.firstRealNumber + firstImageNumber * c.firstImageNumber) / r;
        temp.firstImageNumber = (firstImageNumber * c.firstRealNumber - firstRealNumber * c.firstImageNumber) / r;
        return temp;
    }

};
std::ostream& operator<<(std::ostream& stream, const complexNumber& obj) {
    return stream << obj.firstImageNumber << " + " << obj.firstRealNumber << "i";
}
#endif //UNTITLED4_COMPLEX_H
