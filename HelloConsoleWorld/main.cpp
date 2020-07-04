#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    //    QCoreApplication a(argc, argv);
    //    return a.exec();

    int x = 20;
    QString msg ("Hello Console");
    qWarning().nospace() << msg << x << "space";
    qWarning(msg.toStdString().c_str());
    qWarning(qPrintable(msg));

    QTextStream out_stream(stdout);
    out_stream.setFieldWidth(10);
    out_stream.setPadChar('*');
    out_stream << msg << x << '\n';
}
