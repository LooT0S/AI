#include <QApplication>
#include <QWidget>

class dss : QWidget {
    
};

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget window;
    window.setWindowTitle("FUCK");
    window.show();

    return a.exec();
}
