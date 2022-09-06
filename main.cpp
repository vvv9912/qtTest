#include <QCoreApplication>
#include <QTest>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <test_smart.h>
using namespace std;
int main(int argc, char *argv[])
{
    freopen("file.log", "w", stdout);
    std::cout << "Это предложение будет перенаправлено в файл";
    QCoreApplication a(argc, argv);
    QTest::qExec(new Test_Smart, argc, argv);
  // fclose(stdout);
    return a.exec();
}
