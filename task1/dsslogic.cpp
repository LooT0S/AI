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

    std::string result;
    if (std::equal(out.begin() + 1, out.end(), out.begin())) {
            return "Спробуйте знову";
    } else {
            if (maxValue == C) {
                result = result + "C language" + std::to_string(C) + "% ";
            }

            if (maxValue == CPP) {
                result = result + "C++ language"  + std::to_string(CPP) + "% ";
            }

            if (maxValue == JS) {
                result = result + "JavaScript language" + std::to_string(JS) + "% ";
            }

            if (maxValue == PHP) {
                result = result + "PHP language" + std::to_string(PHP) + "% ";
            }

            if (maxValue == CSHARP) {
                result = result + "C# language" + std::to_string(CSHARP) + "% ";
            }

            if (maxValue == PYTHON) {
                result = result + "Python language" + std::to_string(PYTHON) + "% ";
            }

            if (maxValue == JAVA) {
                result = result + "Java language" + std::to_string(JAVA) + "% ";
            }

        }
    return QString::fromStdString(result);

}
