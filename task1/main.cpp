#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QHBoxLayout>
#include <QFrame>

#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <algorithm>

class dss : public QWidget {
    //Q_OBJECT
public:
    dss(QWidget *parent = 0);
    virtual ~dss() {};

private slots:
    void OnYesPressed();
    void OnNoPressed();

private:
    QPushButton *yesBtn;
    QPushButton *noBtn;
    QLabel *questionLbl;

    int indexQuestionCounter = 0;

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

    int bz[5][8] = {
        {20, 50, -1, 10, 9, -1, 1, -1},
        {-1, 10, 50, 10, 20, 5, 5, -1},
        {10, 45, -1, -1, 25, -1, -1, 20},
        {-1, 10, 40, 15, 15, 2, 10, -1},
        {60, 5, -1, -1, 10, 5, 2, 5}
    };

};

dss::dss(QWidget *parent) : QWidget(parent) {
    QFrame *frame = new QFrame(this);
    QHBoxLayout *hbox = new QHBoxLayout(this);

    questionLbl = new QLabel(QString::fromStdString(question[indexQuestionCounter]), this);
    hbox->addWidget(questionLbl, Qt::AlignCenter);

    yesBtn = new QPushButton("Так", this);
    hbox->addWidget(yesBtn, Qt::AlignCenter);

    noBtn = new QPushButton("Ні", this);
    hbox->addWidget(noBtn, Qt::AlignCenter)  ;

   // connect(yesBtn, &QPushButton::clicked, this, SLOT(OnYesPressed()));
    //connect(noBtn, &QPushButton::clicked, this, SLOT(OnNoPressed()));
};

void dss::OnYesPressed() {
    res.push_back(1);
    indexQuestionCounter++;
    //questionLbl->setText(QString::fromStdString(question[indexQuestionCounter]));
}

void dss::OnNoPressed() {
    res.push_back(0);
    indexQuestionCounter++;
    //questionLbl->setText(QString::fromStdString(question[indexQuestionCounter]));
}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    dss window;

    window.show();

    return app.exec();
}
