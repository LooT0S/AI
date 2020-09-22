#include "dss.h"

dss::dss(QWidget *parent) : QWidget(parent) {
    QVBoxLayout *vbox = new QVBoxLayout(this);
    QHBoxLayout *hbox = new QHBoxLayout();
    QHBoxLayout *hboxForTitle = new QHBoxLayout();
    QHBoxLayout *hboxForLbl = new QHBoxLayout();
    QLabel *title = new QLabel("СППР для вибору мови програмування");

    questionLbl = new QLabel(QString::fromStdString(question[indexQuestionCounter]), this);
    questionLbl->setStyleSheet("font: 12pt;");
    title->setStyleSheet("font: 18pt;");

    yesBtn = new QPushButton("Так", this);
    noBtn = new QPushButton("Ні", this);

    hboxForTitle->addStretch(5);
    hboxForTitle->addWidget(title, Qt::AlignTop);
    hboxForLbl->addStretch(40);
    hboxForLbl->addWidget(questionLbl, Qt::AlignCenter);

    hbox->addWidget(yesBtn, Qt::AlignCenter);
    hbox->addWidget(noBtn, Qt::AlignCenter);

    vbox->addLayout(hboxForTitle, Qt::AlignCenter);
    vbox->addStretch(300);
    vbox->addLayout(hboxForLbl, Qt::AlignCenter);
    vbox->addStretch(300);
    vbox->addLayout(hbox);

    connect(yesBtn, &QPushButton::clicked, this, &dss::OnYesPressed);
    connect(noBtn, &QPushButton::clicked, this, &dss::OnNoPressed);
};

void dss::OnYesPressed() {
    if (indexQuestionCounter == 7) {
            yesBtn->setEnabled(false);
            noBtn->setEnabled(false);


            QString s = getRes();
            questionLbl->setText(s);
        } else {
            indexQuestionCounter++;
            res.push_back(1);
            questionLbl->setText(QString::fromStdString(question[indexQuestionCounter]));
        }
}

void dss::OnNoPressed() {
    if (indexQuestionCounter == 7) {
        noBtn->setEnabled(false);
        yesBtn->setEnabled(false);

        QString s = getRes();
        questionLbl->setText(s);

    } else {
        indexQuestionCounter++;
        res.push_back(0);
        questionLbl->setText(QString::fromStdString(question[indexQuestionCounter]));
    }
}

int dss::getIndexQuestionCounter() {
    return indexQuestionCounter;
}
