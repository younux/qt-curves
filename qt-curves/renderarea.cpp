#include "renderarea.h"
#include <QPaintEvent>
#include <QPainter>

RenderArea::RenderArea(QWidget *parent) :
    QWidget(parent),
    mBackgroundColor(0, 0, 255),
    mShapeColor(255, 255, 255),
    mShape(ShapeType::Astroid)
{

}

QColor RenderArea::getBackgroundColor() const{
    return mBackgroundColor;
}

void RenderArea::setBackgroundColor(QColor color){
    mBackgroundColor = color;
}

RenderArea::ShapeType RenderArea::getShape() const{
    return mShape;
}

void RenderArea::setShape(RenderArea::ShapeType shape){
    mShape = shape;
}

QSize RenderArea::minimumSizeHint() const{
    return QSize(100, 100);
}

QSize RenderArea::sizeHint() const{
    return QSize(400, 200);
}

void RenderArea::paintEvent(QPaintEvent *event){
    QPainter painter(this);

    painter.setRenderHint(QPainter::Antialiasing, true);

    switch (mShape) {
    case ShapeType::Astroid:
        mBackgroundColor = Qt::red;
        break;
    case ShapeType::Cycloid:
        mBackgroundColor = Qt::green;
        break;
    case ShapeType::HuygensCycloid:
        mBackgroundColor = Qt::blue;
        break;
    case ShapeType::HypoCycloid:
        mBackgroundColor = Qt::yellow;
        break;
    default:
        break;
    }

    painter.setBrush(mBackgroundColor);
    painter.setPen(mShapeColor);

    // drawing area
    painter.drawRect(this->rect());
    painter.drawLine(this->rect().topLeft(), this->rect().bottomRight());
}
