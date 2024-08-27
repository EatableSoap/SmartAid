#include "scrolltext.h"

scrolltext::scrolltext(QWidget *parent) : QWidget(parent)
{
    textlable = new QLabel(this);
    textlable->setStyleSheet("QLabel{\
                              font-family: \"Miscrosoft YaHei\";\
                              font-size: 18px;\
                              color: red;\
                              font-style: normal;\
                              font-weight: bold;}");
    textlable->setText("This is scrolltext");
    textlable->setFixedHeight(20);
    textlable->hide();
    //
    m_TooPropertyAnimation = new QPropertyAnimation(this,"geometry");
    m_TooPropertyAnimation->setDuration(600);

}

void scrolltext::animationStart()
{
    if(textlable->isHidden())
        textlable->show();
    m_TooPropertyAnimation->setStartValue(QRect(0,textlable->height(),textlable->width(),textlable->height()));
    m_TooPropertyAnimation->setEndValue(QRect(0,0,textlable->width(),textlable->height()));
    m_TooPropertyAnimation->setEasingCurve(QEasingCurve(QEasingCurve::OutQuart));
    m_TooPropertyAnimation->start(QAbstractAnimation::KeepWhenStopped);

    QTimer *timer = new QTimer(this);
    timer->start(3000);

    connect(timer,&QTimer::timeout,this,[=]
    {
        m_TooPropertyAnimation->setStartValue(QRect(0,0,textlable->width(),textlable->height()));
        m_TooPropertyAnimation->setEndValue(QRect(0,textlable->height(),textlable->width(),textlable->height()));
        m_TooPropertyAnimation->start(QAbstractAnimation::KeepWhenStopped);
        timer->stop();
        delete timer;
    });
}
