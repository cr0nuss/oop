#include <iostream>
#include <cmath>

class complexNumber {
private:
    double firstImageNumber;
    double firstRealNumber;
public:
    void setValues(double image, double real) {
        firstImageNumber = image;
        firstRealNumber = real;
    }
    [[nodiscard]] double abs() const {
        return sqrt(firstRealNumber * firstRealNumber + firstImageNumber * firstImageNumber);
    }

    complexNumber operator+(const complexNumber &c) const
    {
        complexNumber temp{};

        temp.firstRealNumber = this->firstRealNumber + c.firstRealNumber;
        temp.firstImageNumber = this->firstImageNumber + c.firstImageNumber;

        return temp;
    }
    complexNumber operator - (complexNumber &c) const
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
        temp.firstRealNumber = (firstImageNumber * c.firstRealNumber - firstRealNumber * c.firstImageNumber) / r;
        return temp;
    }

};

class Vector {
    double a1, a2, a3;
    double vector_a[3];

public:
    void setValues(double _a1, double _a2, double _a3, double _b1, double _b2, double _b3) {
        a1 = _a1;
        a2 = _a2;
        a3 = _a3;

    }

    [[maybe_unused]] [[nodiscard]] double distance() const {
        double z;
        z = sqrt(pow(a1, 2) +  pow(a2, 2) + pow(a3, 2));
        return z;
    }
};
class [[maybe_unused]] aCircle {
    const float p = 3.14;
    double r{};
public:
    void setValues(double _r) {
        r = _r;
    }
    [[nodiscard]] double square() const {
        return p*pow(r, 2);
    }

    [[maybe_unused]] [[nodiscard]] double distance() const {
        return 2 * p * r;
    }

};
int main() {
    return 0;
};