#ifndef CHESS_H
#define CHESS_H

#include <QMainWindow>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui {
class Chess;
}
QT_END_NAMESPACE

class Chess : public QMainWindow
{
    Q_OBJECT

public:
    Chess(QWidget *parent = nullptr);
    ~Chess();

private slots:
    void launchSetup();

    void setDefaultBoard();

    void setButtonPositionMap();

    void setPiecePositionMap();

    void setPieceImageMap();

    void setButtonPiece(QPushButton *button, const QString &imagePath);

    void setButtonBoard(QPushButton *button, const QString &imagePath);

    void setChessBoard();

    void setMenu();

    void on_buttonPlayComputer_clicked();

    void on_buttonComputerEasy_clicked();

    void on_buttonComputerMedium_clicked();

    void on_buttonComputerHard_clicked();

    void on_buttonComputerImpossible_clicked();

    void on_buttonComputerNext_clicked();

    void on_buttonComputerBack_clicked();

    void on_buttonGoesFirstBack_clicked();

private:
    Ui::Chess *ui;
};
#endif // CHESS_H
