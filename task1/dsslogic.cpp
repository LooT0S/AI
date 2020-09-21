#include "dsslogic.h"

dsslogic::dsslogic()
{

}

void dsslogic::calcAnswer()
{
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
}

QString dsslogic::getRes()
{
    calcAnswer();
    int maxValue = *std::max_element(out.begin(), out.end());
    QString res;
    if (std::adjacent_find(out.begin(), out.end(), std::not_equal_to<int>()) == out.end()) {
            res += "Спробуйте знову";
        }else {

    if (maxValue == C) {
        res += "C language";
    }

    if (maxValue == CPP) {
        res += "C++ language";
    }

    if (maxValue == JS) {
        res += "JavaScript language";
    }

    if (maxValue == PHP) {
        res += PHP;
    }

    if (maxValue == CSHARP) {
        res += "C# language";
    }

    if (maxValue == PYTHON) {
        return "Python language";
    }

    if (maxValue == JAVA) {
        res += "Java language";
    }

}

}
