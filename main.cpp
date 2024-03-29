#include <QApplication>
#include <QMainWindow>
#include <QLabel>
#include "pulsante.h"

using namespace std;

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    QMainWindow finestra;
    finestra.setWindowTitle("Barra di Progresso");
    finestra.setFixedSize(600, 700);
    finestra.setStyleSheet(
            "QMainWindow { }"
            "QPushButton { }"
            "QLabel { font-size: 17px; }"
    );

    QLabel messaggio("Premi il pulsante per aggiornare lo stato del Subject e vedere la barra di progresso caricarsi");
    messaggio.setParent(&finestra);
    messaggio.setGeometry(100, 10, 400, 60);


    auto b = std::make_unique<barra>();
    b->setParent(&finestra);
    b->setGeometry(100, 120, 400, 30);

    auto s1 = std::make_unique<pulsante>();
    s1->setGeometry(180, 200, 180, 50);
    s1->setText("Aggiorna il Subject1 ");
    s1->addObserver(b.get());
    s1->setParent(&finestra);

    auto b1 = std::make_unique<barra>();
    b1->setParent(&finestra);
    b1->setGeometry(100, 100, 400, 30);
    s1->addObserver(b1.get());

    QLabel messaggio1("Premi il pulsante per aggiornare lo stato del Subject e vedere la barra di progresso caricarsi");
    messaggio1.setParent(&finestra);
    messaggio1.setGeometry(100, 350, 400, 60);

    auto b2 = std::make_unique<barra>();
    b2->setParent(&finestra);
    b2->setGeometry(100, 400, 400, 30);

    auto s2 = std::make_unique<pulsante>();
    s2->setGeometry(180, 500, 180, 50);
    s2->setText("Aggiorna Subject 2");
    s2->addObserver(b2.get());
    s2->setParent(&finestra);

    int contatore = 0;
    int fastvalue = 0;

    QObject::connect(s1.get(), &QPushButton::clicked, [&s1, &contatore, &messaggio]() {
        s1->carica(++contatore);
        if (contatore == 100) {
            messaggio.setText("Hai completato il caricamento!");
            s1->setEnabled(false);
        }
    });

    QObject::connect(s2.get(), &QPushButton::clicked, [&s2, &fastvalue, &messaggio1]() {
        fastvalue = ++fastvalue * 2;
        s2->carica(fastvalue);
        if (fastvalue > 100) {
            s2->carica(100);
            messaggio1.setText("Hai completato il caricamento!");
            s2->setEnabled(false);
        }
    });

    finestra.show();

    return a.exec();
}
