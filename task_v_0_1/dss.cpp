#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <algorithm>
#include <clocale>

int main()
{
    setlocale(LC_CTYPE, "rus");

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

    int in = 0;
    auto it = 0;

    std::for_each(question.begin(), question.end(), [&res, &in, &it](std::string i) {
        std::cout << i << std::endl;
        std::cin >> in;
        it++;
        res.push_back(in);
        });

    for (auto& i : res) std::cout << i << std::endl;

    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 8; j++) {
            switch (i) {
            case 0:
                if (bk[i][j] > 0 && res[j] != 0) {
                    C += bk[i][j];
                }
                break;
            case 1:
                if (bk[i][j] > 0 && res[j] != 0) {
                    CPP += bk[i][j];
                }
                break;
            case 2:
                if (bk[i][j] > 0 && res[j] != 0) {
                    JS += bk[i][j];
                }
                break;
            case 3:
                if (bk[i][j] > 0 && res[j] != 0) {
                    PHP += bk[i][j];
                }
                break;
            case 4:
                if (bk[i][j] > 0 && res[j] != 0) {
                    CSHARP += bk[i][j];
                }
                break;
            case 5:
                if (bk[i][j] > 0 && res[j] != 0) {
                    PYTHON += bk[i][j];
                }
                break;
            case 6:
                if (bk[i][j] > 0 && res[j] != 0) {
                    JAVA += bk[i][j];
                }
                break;
            }
        }
    }
    out.push_back(C);
    out.push_back(CPP);
    out.push_back(JS);
    out.push_back(PHP);
    out.push_back(CSHARP);
    out.push_back(PYTHON);
    out.push_back(JAVA);


    int maxValue = *std::max_element(out.begin(), out.end());
    if (std::adjacent_find(out.begin(), out.end(), std::not_equal_to<int>()) == out.end()) {
        std::cout << "Спробуйте знову";
    } else {
        if (maxValue == C) {
            std::cout << "C language";
        }

        if (maxValue == CPP) {
            std::cout << "C++ language";
        }

        if (maxValue == JS) {
            std::cout << "JavaScript language";
        }

        if (maxValue == PHP) {
            std::cout << "PHP language";
        }

        if (maxValue == CSHARP) {
            std::cout << "C# language";
        }

        if (maxValue == PYTHON) {
            std::cout << "Python language";
        }

        if (maxValue == JAVA) {
            std::cout << "Java language";
        }

    }
    



    return 0;
}