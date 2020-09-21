#include "dsslogic.h"

dsslogic::dsslogic()
{

}

void dsslogic::calcAnswer()
{
    for (int i = 0; i < 5; i++) {
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
}

void dsslogic::getRes()
{
    int maxValue = *std::max_element(out.begin(), out.end());

    if (maxValue == C) {
        std::cout << "C language" << std::endl;
    }

    if (maxValue == CPP) {
        std::cout << "C++ language" << std::endl;
    }

    if (maxValue == JS) {
        std::cout << "JavaScript language" << std::endl;
    }

    if (maxValue == PHP) {
        std::cout << "PHP language" << std::endl;
    }

    if (maxValue == CSHARP) {
        std::cout << "C# language" << std::endl;
    }

    if (maxValue == PYTHON) {
        std::cout << "Python language" << std::endl;
    }

    if (maxValue == JAVA) {
        std::cout << "Java language" << std::endl;
    }

    if (maxValue == C && maxValue == CPP && maxValue == JS && maxValue == PHP && maxValue == CSHARP && maxValue == PYTHON && maxValue == JAVA) {
        std::cout << "bullshit" << std::endl;
    }
}
