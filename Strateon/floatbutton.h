#ifndef FLOATBUTTON_H
#define FLOATBUTTON_H
#include <QtWidgets>
#include <QWebEngineView>
#include <QSyntaxHighlighter>
#include <QHash>
#include <QTextCharFormat>
#include "syntaxic.h"
#include <QMouseEvent>

class FloatingButton : public QPushButton
{
    public:
        FloatingButton();

        void setIndex(int index);

        int index() const { return m_index; }

    private:
        int m_index{0};
        bool m_blockClick{false};
        QPoint m_offset{};
        QPoint m_oldPosition{};
        QWidget* m_parent{nullptr};


    protected:
        void mousePressEvent(QMouseEvent* event);
        void mouseMoveEvent(QMouseEvent* event);
        //void mouseReleaseEvent(QMouseEvent* event);
};











#endif // FLOATBUTTON_H
