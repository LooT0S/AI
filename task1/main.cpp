#include "includes.h"
#include "dss.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    dss window;

    window.resize(800, 300);
    window.setWindowTitle("Система підтримки прийняття рішені");
    window.show();

    return app.exec();
}
