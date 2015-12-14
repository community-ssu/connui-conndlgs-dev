/**
  @file connui-conndlgs.h

  Copyright (C) 2011 Jonathan Wilson

  @author Jonathan wilson <jfwfreo@tpgi.com.au>

  This library is free software; you can redistribute it and/or modify it
  under the terms of the GNU Lesser General Public License version 2.1 as
  published by the Free Software Foundation.

  This library is distributed in the hope that it will be useful, but
  WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser
  General Public License for more details.

  You should have received a copy of the GNU Lesser General Public License
  along with this library; if not, write to the Free Software Foundation,
  Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
*/

#include <dbus/dbus.h>

DBusConnection *iap_dialog_get_connection(DBusMessage *message);
void iap_dialog_register_service(gchar *service, gchar *path);
//iap_dialog_request_dialog
void iap_dialog_unregister_service(gchar *service, gchar *path);

