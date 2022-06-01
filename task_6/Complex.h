//
// Created by sad on 18.05.22.
//

#ifndef NUMBER6_COMPLEX_H
#define NUMBER6_COMPLEX_H

#include <valarray>

class complexNumber {
public:
    double firstImageNumber;
    double firstRealNumber;
    friend bool operator < (const complexNumber &c1, const complexNumber &c2);
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

        temp.firstRealNumber = firstRealNumber + c.firstRealNumber;
        temp.firstImageNumber = firstImageNumber + c.firstImageNumber;

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

    ~complexNumber() = default;


};

bool operator<(const complexNumber &c1, const complexNumber &c2) {
    return c1.firstRealNumber < c2.firstImageNumber;
}
std::ostream& operator<<(std::ostream& stream, const complexNumber& obj) {
    return stream << obj.firstRealNumber << " " << obj.firstImageNumber;
}

#endif //NUMBER6_COMPLEX_H
