#ifndef MANUALSTAGECONTROL_H
#define MANUALSTAGECONTROL_H

#include <QWidget>

namespace Ui {
class ManualStageControl;
}

class ManualStageControl : public QWidget
{
    Q_OBJECT

public:
    explicit ManualStageControl(QWidget *parent = nullptr);
    ~ManualStageControl();

private slots:
    void on_MoveRelative_clicked();

    void on_MoveAbsolute_clicked();

    void on_SetMinEndOfRun_clicked();

    void on_SetMaxEndOfRun_clicked();

    void on_SetVelocity_clicked();

    void on_SetAcceleration_clicked();

private:
    Ui::ManualStageControl *ui;
};

#endif // MANUALSTAGECONTROL_H
