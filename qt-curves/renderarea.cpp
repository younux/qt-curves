#include "renderarea.h"
#include <QPaintEvent>
#include <QPainter>
#include <QtMath>
RenderArea::RenderArea(QWidget *parent) :
    QWidget(parent),
    mBackgroundColor(Qt::blue),
    mShapeColor(Qt::white),
    mShape(ShapeType::Astroid)
{
    on_shape_changed();

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
    on_shape_changed();
}

QColor RenderArea::getShapeColor() const{
    return mShapeColor;
}

void RenderArea::setShapeColor(QColor color){
    mShapeColor = color;
}

float RenderArea::getScale() const{
    return mScale;
}

void RenderArea::setScale(float scale){
    mScale = scale;
}

void RenderArea::setIntervalLength(float intervalLength){
    mIntervalLength = intervalLength;
}

float RenderArea::getIntervalLength() const {
    return mIntervalLength;
}

void RenderArea::setStepCount(int stepCount){
    mStepCount = stepCount;
}

int RenderArea::getStepCount() const{
    return mStepCount;
}

QSize RenderArea::minimumSizeHint() const{
    return QSize(400, 400);
}

QSize RenderArea::sizeHint() const{
    return QSize(400, 400);
}

void RenderArea::on_shape_changed(){
    switch (mShape) {
    case ShapeType::Astroid:
        mIntervalLength = 2*M_PI;
        mScale = 90;
        mStepCount = 256;
        break;
    case ShapeType::Cycloid:
        mIntervalLength = 4*M_PI;
        mScale = 10;
        mStepCount = 128;

        break;
    case ShapeType::HuygensCycloid:
        mIntervalLength = 4*M_PI;
        mScale = 4;
        mStepCount = 256;
        break;
    case ShapeType::HypoCycloid:
        mIntervalLength = 2*M_PI;
        mScale = 40;
        mStepCount = 256;
        break;
    case ShapeType::Line:
        mIntervalLength = 2;
        mScale = 100;
        mStepCount = 128;
        break;
    case ShapeType::Circle:
        mIntervalLength = 2*M_PI;
        mScale = 100;
        mStepCount = 128;
        break;
    case ShapeType::Ellipse:
        mIntervalLength = 2*M_PI;
        mScale = 75;
        mStepCount = 256;
        break;
    case ShapeType::Funny:
        mIntervalLength = 12*M_PI;
        mScale = 10;
        mStepCount = 512;
        break;
    case ShapeType::Star:
        mIntervalLength = 6*M_PI;
        mScale = 25;
        mStepCount = 256;
        break;
    default:
        break;
    }
}

QPointF RenderArea::compute(float t){
    switch (mShape) {
    case ShapeType::Astroid:
        return compute_astroid(t);
        break;
    case ShapeType::Cycloid:
        return compute_cycloid(t);
        break;
    case ShapeType::HuygensCycloid:
        return compute_huygens(t);
        break;
    case ShapeType::HypoCycloid:
        return compute_hypo(t);
        break;
    case ShapeType::Line:
        return compute_line(t);
        break;
    case ShapeType::Circle:
        return compute_circle(t);
        break;
    case ShapeType::Ellipse:
        return compute_ellipse(t);
        break;
    case ShapeType::Funny:
        return compute_funny(t);
        break;
    case ShapeType::Star:
        return compute_star(t);
        break;
    default:
        break;
    }

    return QPointF(0, 0);
}

QPointF  RenderArea::compute_astroid(float t){
    float cos_t = cos(t);
    float sin_t = sin(t);

    float x = 2*cos_t*cos_t*cos_t;
    float y = 2*sin_t*sin_t*sin_t;

    return QPointF(x, y);

}

QPointF RenderArea::compute_cycloid(float t){
    return QPointF(
                1.5*(1 - cos(t)),
                1.5*(t - sin(t))
                );
}

QPointF RenderArea::compute_huygens(float t){
    return QPointF(
                4*(3*cos(t)-cos(3*t)),
                4*(3*sin(t)-sin(3*t))
                );
}

QPointF RenderArea::compute_hypo(float t){
    return QPointF(
                1.5*(2*cos(t) + cos(2*t)),
                1.5*(2*sin(t) - sin(2*t))
                );
}

QPointF RenderArea::compute_line(float t){
    return QPointF(1 - t, 1 - t);
}

QPointF RenderArea::compute_circle(float t){
    return QPointF(cos(t), sin(t));
}

QPointF RenderArea::compute_ellipse(float t){
    float a = 2;
    float b = 1.1;
    return QPointF(a*cos(t), b*sin(t));
}

QPointF RenderArea::compute_funny(float t){
    float v1 = 11;
    float v2 = 6;
    return QPointF(v1*cos(t) - v2*cos(v1/v2*t),
                   v1*sin(t) - v2*sin(v1/v2*t));
}

QPointF RenderArea::compute_star(float t){
    float R = 5;
    float r = 3;
    float d = 5;
    return QPointF((R - r)*cos(t) + d*cos(t*(R-r)/r), (R - r)*sin(t) - d*sin(t*(R-r)/r));
}

void RenderArea::paintEvent(QPaintEvent *event){
    QPainter painter(this);

    painter.setRenderHint(QPainter::Antialiasing, true);

    painter.setBrush(mBackgroundColor);
    painter.setPen(mShapeColor);

    // drawing area
    painter.drawRect(this->rect());

    float step = mIntervalLength/mStepCount;
    QPoint center = this->rect().center();
    QPointF prevPoint = compute(0);
    QPoint prevPixel;
    prevPixel.setX(prevPoint.x()*mScale + center.x());
    prevPixel.setY(prevPoint.y()*mScale + center.y());
    for(float t = 0; t<mIntervalLength; t+=step){
        QPointF point = compute(t);
        QPoint pixel;
        pixel.setX(point.x()*mScale + center.x());
        pixel.setY(point.y()*mScale + center.y());
        painter.drawLine(prevPixel, pixel);
        prevPixel = pixel;
    }
    QPointF point = compute(mIntervalLength);
    QPoint pixel;
    pixel.setX(point.x()*mScale + center.x());
    pixel.setY(point.y()*mScale + center.y());
    painter.drawLine(pixel, prevPixel);
}
