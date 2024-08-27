#ifndef SCROLLTEXT_H
#define SCROLLTEXT_H

#include <QWidget>
#include<QLabel>
#include<QGridLayout>
#include<QPropertyAnimation>
#include<QGraphicsOpacityEffect>
#include<QTime>
#include<QTimer>

class scrolltext : public QWidget
{
    Q_OBJECT
public:
    explicit scrolltext(QWidget *parent = nullptr);
    QLabel *textlable;
    void animationStart();
private:
    QPropertyAnimation *m_TooPropertyAnimation;

signals:

};

#endif // SCROLLTEXT_H
