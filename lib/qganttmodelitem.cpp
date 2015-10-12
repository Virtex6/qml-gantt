/****************************************************************************
**
** Copyright (C) 2015 Dinu SV.
** (contact: mail@dinusv.com)
** This file is part of QML Gantt Timeline library.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPLv3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl.html.
**
****************************************************************************/

#include "qganttmodelitem.h"

QGanttModelItem::QGanttModelItem(QObject *parent)
    : QObject(parent)
    , m_position(0)
    , m_length(0)
{
}

QGanttModelItem::QGanttModelItem(qint64 position, qint64 length, QObject* parent)
    : QObject(parent)
    , m_position(position)
    , m_length(length)
{
}

QGanttModelItem::~QGanttModelItem(){
}
