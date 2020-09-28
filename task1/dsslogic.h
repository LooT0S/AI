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
        "Питання 1. Низькорiвневе програмування ?",
        "Питання 2. Веб-розробка?",
        "Питання 3. Розробка GUI?",
        "Питання 4. Розробка iгор?",
        "Питання 5. Розробка для бiзнесу?",
        "Питання 6. Робота з даними?",
        "Питання 7. Розробка ШI?",
        "Питання 8. Написання продуктивного коду?"
    };

    std::vector<int> res;
    std::vector<int> out;

    int bk[7][8] = {
        {31, 10, 12, 15, 5, 6, 1, 20},
        {5, 4, 30, 40, 2, 5, 10, 4},
        {-1, 45, 10, 10, 10, 15, -1, 10},
        {-1, 40, 5, 15, 20, 15, -1, -1},
        {-1, 30, 10, 30, 20, 5, -1, 5},
        {-1, 20, 10, 5, -1, 15, 50, -1},
        {-1, 8, 15, 8, 50, 15, -1, 4}
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
