#include <QApplication>
#include <QtWidgets>
#include "principalwindow.h"
#include <iostream>
#include <QWebEngineView>
#include "floatbutton.h"



FloatingButton::FloatingButton()
{
    setFixedSize(QSize(48, 48));
    setIconSize(QSize(48, 48));

    show();
}

void FloatingButton::setIndex(int index)
{
    m_index = index;
}


void FloatingButton::mousePressEvent(QMouseEvent* event)
{
    m_offset = event->pos();
    m_oldPosition = pos();

    QPushButton::mousePressEvent(event);
}

void FloatingButton::mouseMoveEvent(QMouseEvent* event)
{
    if (event->buttons() & Qt::LeftButton) {
        QPoint position{mapToParent(event->pos() - m_offset)};
        int x{};
        int y{};

        x = (position.x() >= 0) ? qMin(m_parent->width() - width(), position.x()) : qMax(0, position.x());
        y = (position.y() >= 0) ? qMin(m_parent->height() - height(), position.y()) : qMax(0, position.y());

        move(QPoint(x, y));
        m_blockClick = true;
    }
}

/*void FloatingButton::mouseReleaseEvent(QMouseEvent* event)
{
    setAttribute(Qt::WA_TransparentForMouseEvents, true);

    if (QApplication::widgetAt(mapToGlobal(event->pos()))) {
        FloatingButton* button = qobject_cast<FloatingButton*>(QApplication::widgetAt(mapToGlobal(event->pos())));

        if (button) {
            int buttonIndex = button->index();
            button->setIndex(m_index);
            m_index = buttonIndex;

            move(button->pos());
            button->moveButton(m_oldPosition);

            emit statusChanged();
        } else {
            moveButton(m_oldPosition);
        }
    }
*/
