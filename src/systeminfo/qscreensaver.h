/****************************************************************************
**
** Copyright (C) 2011 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (qt-info@nokia.com)
**
** This file is part of the QtSystems module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QSCREENSAVER_H
#define QSCREENSAVER_H

#include <qsysteminfoglobal.h>
#include <QtCore/qobject.h>

QT_BEGIN_HEADER
QT_BEGIN_NAMESPACE

class QScreenSaverPrivate;

class Q_SYSTEMINFO_EXPORT QScreenSaver : public QObject
{
    Q_OBJECT

    Q_PROPERTY(bool screenSaverEnabled READ screenSaverEnabled WRITE setScreenSaverEnabled)

public:
    QScreenSaver(QObject *parent = 0);
    virtual ~QScreenSaver();

    bool screenSaverEnabled() const;
    void setScreenSaverEnabled(bool enabled);

private:
    Q_DISABLE_COPY(QScreenSaver)
    QScreenSaverPrivate * const d_ptr;
    Q_DECLARE_PRIVATE(QScreenSaver)
};

QT_END_NAMESPACE
QT_END_HEADER

#endif // QSCREENSAVER_H
