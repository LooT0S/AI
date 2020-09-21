#ifndef DSS_H
#define DSS_H

#include "includes.h"
#include "dsslogic.h"

class dss : public QWidget, public dsslogic {
    Q_OBJECT
public:
    dss(QWidget *parent = 0);
    virtual ~dss() {};
    int getIndexQuestionCounter();
    int indexQuestionCounter = 0;

public slots:
    void OnYesPressed();
    void OnNoPressed();

private:
    QPushButton *yesBtn;
    QPushButton *noBtn;
    QLabel *questionLbl;

    //int indexQuestionCounter = 0;
};

#endif // DSS_H
