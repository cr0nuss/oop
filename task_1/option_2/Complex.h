#ifndef UNTITLED_COMPLEX1_H
#define UNTITLED_COMPLEX1_H
#ifndef UNTITLED4_COMPLEX_C_H
#define UNTITLED4_COMPLEX_C_H
#include "complex"
class Com {
    double c_image;
    double c_real;
public:
    void setValues(const std::string& a, const std::string& b) {
        c_image = atoi(a.c_str());
        c_real = atoi(b.c_str());
    }
    [[nodiscard]] double getting_back() const {
        std::complex< double > z1( c_real, c_image );
        return std::abs( z1 );
    }

};
#endif //UNTITLED4_COMPLEX_C_H
#endif //UNTITLED_COMPLEX1_H
