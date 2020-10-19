#include "tabwelcome.h"
#include <QTabWidget>
#include <QPainter>
#include <QPlainTextEdit>
#include <iostream>

#include "loggingcategories.h"

TabWelcome::TabWelcome(QWidget *parent) : QWidget(parent)
{
    l_welcome = new QLabel(this);
    l_welcome->setText("Welcome!!!");
//    std::cout << "AAAAAA" << std::endl;
}



TabWelcome::~TabWelcome()
{
    delete l_welcome;
}

void TabWelcome::paintEvent(QPaintEvent *event) {
    QPainter painter{this};
    qDebug(logDebug()) << event;

    painter.setRenderHint(QPainter::Antialiasing);
//    painter.save();

//    painter.setBrush(Qt::BrushStyle::TexturePattern);
    painter.drawRect(rect());
}
