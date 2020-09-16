#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <algorithm>
#include <clocale>

int main() 
{    
    setlocale(LC_CTYPE, "rus");

    int bz[5][8] = {
        {20, 50, -1, 10, 9, -1, 1, -1},
        {-1, 10, 50, 10, 20, 5, 5, -1},
        {10, 45, -1, -1, 25, -1, -1, 20},
        {-1, 10, 40, 15, 15, 2, 10, -1},
        {60, 5, -1, -1, 10, 5, 2, 5}
    };

    std::array<std::string, 8> question = {
        "\nВопрос1",
        "\nq2",
        "\nq3",
        "\nq4",
        "\nq5",
        "\nq6",
        "\nq7",
        "\nq8"
    };

    std::vector<int> res;
    std::vector<int> out;
    
    int pa = 0,
        b = 0,
        bg = 0,
        os = 0,
        p = 0;

    int in = 0;
    auto it = 0;

    std::for_each(question.begin(), question.end(), [&res, &in, &it](std::string i) {
        std::cout << i << std::endl;
        std::cin >> in;
        it++;
        res.push_back(in);
    });

    for (auto &i : res) std::cout << i << std::endl;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 8; j++) {
            switch (i) {
                case 0:
                    if (bz[i][j] > 0 && res[j] != 0) {
                        pa += bz[i][j];
                    }
                    break;
                case 1:
                    if (bz[i][j] > 0 && res[j] != 0) {
                        b += bz[i][j];
                    }
                    break;
                case 2:
                    if (bz[i][j] > 0 && res[j] != 0) {
                        bg += bz[i][j];
                    }
                    break;              
                case 3:
                    if (bz[i][j] > 0 && res[j] != 0) {
                        os += bz[i][j];
                    }
                    break;
                case 4:
                    if (bz[i][j] > 0 && res[j] != 0) {
                        p += bz[i][j];
                    }
                    break;
            }
        }
    }

    out.push_back(pa);
    out.push_back(b);
    out.push_back(bg);
    out.push_back(os);
    out.push_back(p);

    int maxValue = *std::max_element(out.begin(), out.end());

    if (maxValue == pa) {
        std::cout << "patato" << std::endl;
    }
    
    if (maxValue == b) {
        std::cout << "borsch" << std::endl;
    }

    if (maxValue == bg) {
        std::cout << "burger" << std::endl;
    }

    if (maxValue == os) {
        std::cout << "onion soup" << std::endl;
    }
    
    if (maxValue == p) {
        std::cout << "pizza" << std::endl;
    }

    if (maxValue == pa && maxValue == b && maxValue == bg && maxValue == os && maxValue == p) {
        std::cout << "bullshit" << std::endl;
    }
    
    return 0;
}