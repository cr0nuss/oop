//
// Created by sad on 01.03.2022.
#include "iostream"
#include "fstream"
#include <string>
#include "vector"
#include "Complex.h"
void base() {
    std::string first_number;
    std::string second_number;
    std::string str;
    std::vector <double> array = {};
    std::ifstream file("/home/sad/CLionProjects/untitled/tests.txt");
    Com alg{};
    while(getline(file, str)) {
        int i = 0;
        while (i <= std::size(str)) {
            if (str[i] != ' ') {
                first_number += str[i];
                i += 1;
            } else
                break;
        }
        i++;
        while (i < std::size(str)) {
            second_number += str[i];
            second_number += str[i];
            i += 1;
        }
        alg.setValues(first_number, second_number);
        array.push_back(alg.getting_back());
        first_number = "";
        second_number = "";
    }
    std::cout << "Max: " << *std::max_element (array.begin(), array.end());
}
//

