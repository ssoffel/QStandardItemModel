#include "readfile.h"

readFile::readFile(QObject *parent) : QObject(parent)
{
    QFile file("C:/Users/Scott/MyFolder/Banking.txt");
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() <<"Error opening file";
    }

    QTextStream stream(&file);

    text = stream.readAll();

    file.close();
}
