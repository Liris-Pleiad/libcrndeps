// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GIOMM_TCPCONNECTION_H
#define _GIOMM_TCPCONNECTION_H


#include <glibmm.h>

// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2010 Jonathon Jongsma
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <glibmm/object.h>
#include <giomm/socketconnection.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GTcpConnection GTcpConnection;
typedef struct _GTcpConnectionClass GTcpConnectionClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gio
{ class TcpConnection_Class; } // namespace Gio
namespace Gio
{

/**
 * A TCP SocketConnection
 *
 * This is the subclass of SocketConnection that is created
 * for TCP/IP sockets.
 *
 * @newin{2,24}
 * @ingroup NetworkIO
 */

class TcpConnection : public Gio::SocketConnection
{
    
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef TcpConnection CppObjectType;
  typedef TcpConnection_Class CppClassType;
  typedef GTcpConnection BaseObjectType;
  typedef GTcpConnectionClass BaseClassType;

private:  friend class TcpConnection_Class;
  static CppClassType tcpconnection_class_;

private:
  // noncopyable
  TcpConnection(const TcpConnection&);
  TcpConnection& operator=(const TcpConnection&);

protected:
  explicit TcpConnection(const Glib::ConstructParams& construct_params);
  explicit TcpConnection(GTcpConnection* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~TcpConnection();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GTcpConnection*       gobj()       { return reinterpret_cast<GTcpConnection*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GTcpConnection* gobj() const { return reinterpret_cast<GTcpConnection*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GTcpConnection* gobj_copy();

private:


public:
    
  /** This enabled graceful disconnects on close. A graceful disconnect
   * means that we signal the recieving end that the connection is terminated
   * and wait for it to close the connection before closing the connection.
   * 
   * A graceful disconnect means that we can be sure that we successfully sent
   * all the outstanding data to the other end, or get an error reported.
   * However, it also means we have to wait for all the data to reach the
   * other side and for it to acknowledge this by closing the socket, which may
   * take a while. For this reason it is disabled by default.
   * 
   * @newin{2,22}
   * @param graceful_disconnect Whether to do graceful disconnects or not.
   */
  void set_graceful_disconnect (bool graceful_disconnect);
    
  /** Checks if graceful disconnects are used. See
   * g_tcp_connection_set_graceful_disconnect().
   * 
   * @newin{2,22}
   * @return <tt>true</tt> if graceful disconnect is used on close, <tt>false</tt> otherwise.
   */
  bool get_graceful_disconnect () const;

    #ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether or not close does a graceful disconnect.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<bool> property_graceful_disconnect() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether or not close does a graceful disconnect.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_graceful_disconnect() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:
#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED

protected:
  //GTK+ Virtual Functions (override these to change behaviour):
#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED

  //Default Signal Handlers::
#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED


};

} // namespace Gio


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gio::TcpConnection
   */
  Glib::RefPtr<Gio::TcpConnection> wrap(GTcpConnection* object, bool take_copy = false);
}


#endif /* _GIOMM_TCPCONNECTION_H */
