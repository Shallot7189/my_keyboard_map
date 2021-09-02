/*
Copyright 2021 niva(@_Shallot_)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "otukimi.h"
#include "pointing_device.h"
#include "pmw/pmw.h"

#define CLAMP_HID(value) value < -127 ? -127 : value > 127 ? 127 : value

void pointing_device_init(void)
{
	pmw_init();
}

void pointing_device_task(void)
{
    report_mouse_t mouse_report = pointing_device_get_report();
    report_optical_sensor_t sensor_report = optical_sensor_get_report();

    int8_t clamped_x = CLAMP_HID(sensor_report.x);
    int8_t clamped_y = CLAMP_HID(sensor_report.y);

	mouse_report.x = -clamped_x;
	mouse_report.y = clamped_y;

    pointing_device_set_report(mouse_report);

    // only send report on change as even sending report with no change is treated as movement
	if((mouse_report.x != 0)
	|| (mouse_report.y != 0))
	{
		pointing_device_send();
	}
}

