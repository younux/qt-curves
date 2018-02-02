#ifndef RENDERAREA_H
#define RENDERAREA_H

#include <QWidget>
#include <QColor>

class RenderArea : public QWidget
{
    Q_OBJECT
public:
    explicit RenderArea(QWidget *parent = nullptr);

    QSize  minimumSizeHint() const Q_DECL_OVERRIDE;
    QSize sizeHint() const Q_DECL_OVERRIDE;

    enum ShapeType {
        Astroid,
        Cycloid,
        HuygensCycloid,
        HypoCycloid,
        Line,
        Circle,
        Ellipse,
        Funny,
        Star,
    };

    void setBackgroundColor(QColor color);
    QColor getBackgroundColor() const;
    void setShape(ShapeType shape);
    ShapeType getShape() const;
    void setShapeColor(QColor color);
    QColor getShapeColor() const;
    void setScale(float scale);
    float getScale() const;
    void setIntervalLength(float intervalLength);
    float getIntervalLength() const;
    void setStepCount(int stepCount);
    int getStepCount() const;


protected:
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

signals:

public slots:

private:
    QColor mBackgroundColor;
    QColor mShapeColor;
    ShapeType mShape;

    float mIntervalLength;
    float mScale;
    int mStepCount;

    QPointF  compute(float t);
    QPointF  compute_astroid(float t);
    QPointF  compute_cycloid(float t);
    QPointF  compute_huygens(float t);
    QPointF  compute_hypo(float t);
    QPointF  compute_line(float t);
    QPointF  compute_circle(float t);
    QPointF  compute_ellipse(float t);
    QPointF  compute_funny(float t);
    QPointF  compute_star(float t);



    void on_shape_changed();


};

#endif // RENDERAREA_H
