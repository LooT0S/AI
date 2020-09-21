#ifndef DSSLOGIC_H
#define DSSLOGIC_H

#include "includes.h"

class dsslogic
{
public:
    dsslogic();
    void calcAnswer();
    QString getRes();

protected:
    std::array<std::string, 8> question = {
        "Питання 1. ",
        "Питання 2.",
        "Питання 3.",
        "Питання 4.",
        "Питання 5.",
        "Питання 6.",
        "Питання 7.",
        "Питання 8."
    };

    std::vector<int> res;
    std::vector<int> out;

    int bk[7][8] = {
        {42, 1, 10, 15, 4, 2, 1, 25},
        {5, 4, 30, 40, 2, 5, 10, 4},
        {-1, 50, 10, 10, 10, 15, -1, 5},
        {-1, 60, 5, 15, 20, -1, -1},
        {-1, 30, 10, 30, 20, 5, -1, 5},
        {-1, 20, 10, 5, -1, 5, 60, -1},
        {-1, 8, 15, 8, 60, 5, -1, 4}
    };


    int C = 0,
        CPP = 0,
        JS = 0,
        PHP = 0,
        CSHARP = 0,
        PYTHON = 0,
        JAVA = 0;

};

#endif // DSSLOGIC_H
