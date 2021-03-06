/****************************************************************************
* Copyright (C) 2011-2014 Rayner Pupo Gomez
*
* GNU Lesser General Public License Usage
* This file may be used under the terms of the GNU Lesser
* General Public License version 2.1 as published by the Free Software
* Foundation and appearing in the file LICENSE.LGPL included in the
* packaging of this file.  Please review the following information to
* ensure the GNU Lesser General Public License version 2.1 requirements
* will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
*****************************************************************************/

#include "progress_style_animation.h"

ProgressStyleAnimation::ProgressStyleAnimation(int speed, QObject *target) :
    StyleAnimation(target), _speed(speed), _step(-1)
{
}

int ProgressStyleAnimation::animationStep() const
{
    return currentTime() / (1000.0 / _speed);
}

int ProgressStyleAnimation::progressStep(int width) const
{
    int step = animationStep();
    int progress = (step * width / _speed) % width;
    if (((step * width / _speed) % (2 * width)) >= width)
        progress = width - progress;
    return progress;
}

int ProgressStyleAnimation::speed() const
{
    return _speed;
}

void ProgressStyleAnimation::setSpeed(int speed)
{
    _speed = speed;
}

bool ProgressStyleAnimation::isUpdateNeeded() const
{
    if (StyleAnimation::isUpdateNeeded()) {
        int current = animationStep();
        if (_step == -1 || _step != current)
        {
            _step = current;
            return true;
        }
    }
    return false;
}
