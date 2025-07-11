/*****************************************************************************\
     Snes9x - Portable Super Nintendo Entertainment System (TM) emulator.
                This file is licensed under the Snes9x License.
   For further information, consult the LICENSE file in the root directory.
\*****************************************************************************/

#pragma once
#include <gtkmm.h>

#include <gtk/gtk.h>
#include <gdk/gdk.h>
#include <gdk/gdkkeysyms.h>
#include <gdk/gdkkeysyms-compat.h>

#ifndef USE_WAYLAND
#undef GDK_WINDOWING_WAYLAND
#endif

#ifdef GDK_WINDOWING_WAYLAND
#include <gdk/gdkwayland.h>
inline bool is_wayland()
{
   return GDK_IS_WAYLAND_DISPLAY(gdk_display_get_default());
}
#endif

#ifdef GDK_WINDOWING_X11
#include <gdk/gdkx.h>
inline bool is_x11()
{
   return GDK_IS_X11_DISPLAY(gdk_display_get_default());
}
#endif
