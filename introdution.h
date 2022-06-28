#ifndef INTRODUTION_H
#define INTRODUTION_H

#include <QDialog>

namespace Ui {
class introdution;
}

class introdution : public QDialog
{
    Q_OBJECT

public:
    explicit introdution(QWidget *parent = nullptr);
    ~introdution();

private:
    Ui::introdution *ui;
};

#endif // INTRODUTION_H
