#ifndef FORMULARIO_H
#define FORMULARIO_H

#include <QMainWindow>

namespace Ui {
class Formulario;
}

class Formulario : public QMainWindow
{
    Q_OBJECT

public:
    explicit Formulario(QWidget *parent = 0);
    ~Formulario();

private:
    Ui::Formulario *ui;
};

#endif // FORMULARIO_H
