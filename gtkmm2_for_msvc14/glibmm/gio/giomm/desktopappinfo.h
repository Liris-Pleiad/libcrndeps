// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GIOMM_DESKTOPAPPINFO_H
#define _GIOMM_DESKTOPAPPINFO_H


#include <glibmm.h>

// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2007 The gtkmm Development Team
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
#include <giomm/appinfo.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GDesktopAppInfo GDesktopAppInfo;
typedef struct _GDesktopAppInfoClass GDesktopAppInfoClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gio
{ class DesktopAppInfo_Class; } // namespace Gio
namespace Gio
{

/**
 * DesktopAppInfo is an implementation of AppInfo based on desktop files.
 *
 * @newin{2,16}
 */

class DesktopAppInfo
: public Glib::Object,
  public AppInfo
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef DesktopAppInfo CppObjectType;
  typedef DesktopAppInfo_Class CppClassType;
  typedef GDesktopAppInfo BaseObjectType;
  typedef GDesktopAppInfoClass BaseClassType;

private:  friend class DesktopAppInfo_Class;
  static CppClassType desktopappinfo_class_;

private:
  // noncopyable
  DesktopAppInfo(const DesktopAppInfo&);
  DesktopAppInfo& operator=(const DesktopAppInfo&);

protected:
  explicit DesktopAppInfo(const Glib::ConstructParams& construct_params);
  explicit DesktopAppInfo(GDesktopAppInfo* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~DesktopAppInfo();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GDesktopAppInfo*       gobj()       { return reinterpret_cast<GDesktopAppInfo*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GDesktopAppInfo* gobj() const { return reinterpret_cast<GDesktopAppInfo*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GDesktopAppInfo* gobj_copy();

private:

  
  //This is not available in on Win32.
//This source file will not be compiled,
//and the class will not be registered in wrap_init.h or wrap_init.cc


public:
  // TODO: should use _WRAP_CREATE(), but these functions do more than just call
  // g_object_new() because there's quite a bit of error-handling to do
  
  /** Creates a new DesktopAppInfo based on a desktop file id. 
   * 
   * A desktop file id is the basename of the desktop file, including the 
   * .desktop extension. GIO is looking for a desktop file with this name 
   * in the <filename>applications</filename> subdirectories of the XDG data
   * directories (i.e. the directories specified in the 
   * <envar>XDG_DATA_HOME</envar> and <envar>XDG_DATA_DIRS</envar> environment 
   * variables). GIO also supports the prefix-to-subdirectory mapping that is
   * described in the <ulink url="http://standards.freedesktop.org/menu-spec/latest/">Menu Spec</ulink> 
   * (i.e. a desktop id of kde-foo.desktop will match
   * <filename>/usr/share/applications/kde/foo.desktop</filename>).
   * @param desktop_id The desktop file id.
   * @return A new DesktopAppInfo, or <tt>0</tt> if no desktop file with that id.
   */
  static Glib::RefPtr<DesktopAppInfo> create(const std::string& desktop_id);
  
  /** Creates a new DesktopAppInfo.
   * 
   * @newin{2,18}
   * @param key_file An opened KeyFile.
   * @return A new DesktopAppInfo or <tt>0</tt> on error.
   */
  static Glib::RefPtr<DesktopAppInfo> create_from_keyfile(Glib::KeyFile& key_file);
  
  /** Creates a new DesktopAppInfo.
   * @param filename The path of a desktop file, in the GLib filename encoding.
   * @return A new DesktopAppInfo or <tt>0</tt> on error.
   */
  static Glib::RefPtr<DesktopAppInfo> create_from_filename(const std::string& filename);

  
  /** A desktop file is hidden if the Hidden key in it is
   * set to True.
   * @return <tt>true</tt> if hidden, <tt>false</tt> otherwise.
   */
  bool is_hidden() const;
  
  /** Sets the name of the desktop that the application is running in.
   * This is used by g_app_info_should_show() to evaluate the
   * <literal>OnlyShowIn</literal> and <literal>NotShowIn</literal>
   * desktop entry fields.
   * 
   * The <ulink url="http://standards.freedesktop.org/menu-spec/latest/">Desktop 
   * Menu specification</ulink> recognizes the following:
   * <simplelist>
   * <member>GNOME</member>
   * <member>KDE</member>
   * <member>ROX</member>
   * <member>XFCE</member>
   * <member>Old</member> 
   * </simplelist>
   * 
   * Should be called only once; subsequent calls are ignored.
   * @param desktop_env A string specifying what desktop this is.
   */
  static void set_desktop_env(const std::string& desktop_env);


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
   * @relates Gio::DesktopAppInfo
   */
  Glib::RefPtr<Gio::DesktopAppInfo> wrap(GDesktopAppInfo* object, bool take_copy = false);
}


#endif /* _GIOMM_DESKTOPAPPINFO_H */

