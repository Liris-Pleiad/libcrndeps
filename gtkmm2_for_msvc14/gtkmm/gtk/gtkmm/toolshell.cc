// Generated by gtkmmproc -- DO NOT MODIFY!


#include <gtkmm/toolshell.h>
#include <gtkmm/private/toolshell_p.h>

// -*- c++ -*-
/* $Id: editable.ccg,v 1.1 2003/01/21 13:38:48 murrayc Exp $ */

/* Copyright 1998-2002 The gtkmm Development Team
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

#include <gtk/gtk.h>


namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gtk::ToolShell> wrap(GtkToolShell* object, bool take_copy)
{
  return Glib::RefPtr<Gtk::ToolShell>( dynamic_cast<Gtk::ToolShell*> (Glib::wrap_auto_interface<Gtk::ToolShell> ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} // namespace Glib


namespace Gtk
{


/* The *_Class implementation: */

const Glib::Interface_Class& ToolShell_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Interface_Class has to know the interface init function
    // in order to add interfaces to implementing types.
    class_init_func_ = &ToolShell_Class::iface_init_function;

    // We can not derive from another interface, and it is not necessary anyway.
    gtype_ = gtk_tool_shell_get_type();
  }

  return *this;
}

void ToolShell_Class::iface_init_function(void* g_iface, void*)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_iface);

  //This is just to avoid an "unused variable" warning when there are no vfuncs or signal handlers to connect.
  //This is a temporary fix until I find out why I can not seem to derive a GtkFileChooser interface. murrayc
  g_assert(klass != 0); 

  klass->get_icon_size = &get_icon_size_vfunc_callback;
  klass->get_orientation = &get_orientation_vfunc_callback;
  klass->get_style = &get_style_vfunc_callback;
  klass->get_relief_style = &get_relief_style_vfunc_callback;
  klass->rebuild_menu = &rebuild_menu_vfunc_callback;

}

GtkIconSize ToolShell_Class::get_icon_size_vfunc_callback(GtkToolShell* self)
{
  Glib::ObjectBase *const obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    CppObjectType *const obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
      #endif //GLIBMM_EXCEPTIONS_ENABLED
        // Call the virtual member method, which derived classes might override.
        return static_cast<GtkIconSize>(int(obj->get_icon_size_vfunc()));
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
      #endif //GLIBMM_EXCEPTIONS_ENABLED
    }
  }
  
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)  );

  // Call the original underlying C function:
  if(base && base->get_icon_size)
    return (*base->get_icon_size)(self);


  typedef GtkIconSize RType;
  return RType();
}
GtkOrientation ToolShell_Class::get_orientation_vfunc_callback(GtkToolShell* self)
{
  Glib::ObjectBase *const obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    CppObjectType *const obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
      #endif //GLIBMM_EXCEPTIONS_ENABLED
        // Call the virtual member method, which derived classes might override.
        return ((GtkOrientation)(obj->get_orientation_vfunc()));
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
      #endif //GLIBMM_EXCEPTIONS_ENABLED
    }
  }
  
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)  );

  // Call the original underlying C function:
  if(base && base->get_orientation)
    return (*base->get_orientation)(self);


  typedef GtkOrientation RType;
  return RType();
}
GtkToolbarStyle ToolShell_Class::get_style_vfunc_callback(GtkToolShell* self)
{
  Glib::ObjectBase *const obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    CppObjectType *const obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
      #endif //GLIBMM_EXCEPTIONS_ENABLED
        // Call the virtual member method, which derived classes might override.
        return ((GtkToolbarStyle)(obj->get_style_vfunc()));
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
      #endif //GLIBMM_EXCEPTIONS_ENABLED
    }
  }
  
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)  );

  // Call the original underlying C function:
  if(base && base->get_style)
    return (*base->get_style)(self);


  typedef GtkToolbarStyle RType;
  return RType();
}
GtkReliefStyle ToolShell_Class::get_relief_style_vfunc_callback(GtkToolShell* self)
{
  Glib::ObjectBase *const obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    CppObjectType *const obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
      #endif //GLIBMM_EXCEPTIONS_ENABLED
        // Call the virtual member method, which derived classes might override.
        return ((GtkReliefStyle)(obj->get_relief_style_vfunc()));
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
      #endif //GLIBMM_EXCEPTIONS_ENABLED
    }
  }
  
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)  );

  // Call the original underlying C function:
  if(base && base->get_relief_style)
    return (*base->get_relief_style)(self);


  typedef GtkReliefStyle RType;
  return RType();
}
void ToolShell_Class::rebuild_menu_vfunc_callback(GtkToolShell* self)
{
  Glib::ObjectBase *const obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    CppObjectType *const obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
      #endif //GLIBMM_EXCEPTIONS_ENABLED
        // Call the virtual member method, which derived classes might override.
        obj->rebuild_menu_vfunc();
        return;
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
      #endif //GLIBMM_EXCEPTIONS_ENABLED
    }
  }
  
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(self), CppObjectType::get_type()) // Get the interface.
)  );

  // Call the original underlying C function:
  if(base && base->rebuild_menu)
    (*base->rebuild_menu)(self);

}


Glib::ObjectBase* ToolShell_Class::wrap_new(GObject* object)
{
  return new ToolShell((GtkToolShell*)(object));
}


/* The implementation: */

ToolShell::ToolShell()
:
  Glib::Interface(toolshell_class_.init())
{}

ToolShell::ToolShell(GtkToolShell* castitem)
:
  Glib::Interface((GObject*)(castitem))
{}

ToolShell::ToolShell(const Glib::Interface_Class& interface_class)
: Glib::Interface(interface_class)
{
}

ToolShell::~ToolShell()
{}

// static
void ToolShell::add_interface(GType gtype_implementer)
{
  toolshell_class_.init().add_interface(gtype_implementer);
}

ToolShell::CppClassType ToolShell::toolshell_class_; // initialize static member

GType ToolShell::get_type()
{
  return toolshell_class_.init().get_type();
}


GType ToolShell::get_base_type()
{
  return gtk_tool_shell_get_type();
}


IconSize ToolShell::get_icon_size() const
{
  return IconSize(static_cast<int>(gtk_tool_shell_get_icon_size(const_cast<GtkToolShell*>(gobj()))));
}

Orientation ToolShell::get_orientation() const
{
  return ((Orientation)(gtk_tool_shell_get_orientation(const_cast<GtkToolShell*>(gobj()))));
}

ToolbarStyle ToolShell::get_style() const
{
  return ((ToolbarStyle)(gtk_tool_shell_get_style(const_cast<GtkToolShell*>(gobj()))));
}

ReliefStyle ToolShell::get_relief_style() const
{
  return ((ReliefStyle)(gtk_tool_shell_get_relief_style(const_cast<GtkToolShell*>(gobj()))));
}

void ToolShell::rebuild_menu()
{
gtk_tool_shell_rebuild_menu(gobj()); 
}

Orientation ToolShell::get_text_orientation() const
{
  return ((Orientation)(gtk_tool_shell_get_text_orientation(const_cast<GtkToolShell*>(gobj()))));
}

float ToolShell::get_text_alignment() const
{
  return gtk_tool_shell_get_text_alignment(const_cast<GtkToolShell*>(gobj()));
}

Pango::EllipsizeMode ToolShell::get_ellipsize_mode() const
{
  return ((Pango::EllipsizeMode)(gtk_tool_shell_get_ellipsize_mode(const_cast<GtkToolShell*>(gobj()))));
}

Glib::RefPtr<SizeGroup> ToolShell::get_text_size_group()
{

  Glib::RefPtr<SizeGroup> retvalue = Glib::wrap(gtk_tool_shell_get_text_size_group(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;

}

Glib::RefPtr<const SizeGroup> ToolShell::get_text_size_group() const
{
  return const_cast<ToolShell*>(this)->get_text_size_group();
}


IconSize Gtk::ToolShell::get_icon_size_vfunc() 
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->get_icon_size)
    return IconSize(static_cast<int>((*base->get_icon_size)(gobj())));

  typedef IconSize RType;
  return RType();
}
Orientation Gtk::ToolShell::get_orientation_vfunc() 
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->get_orientation)
    return ((Orientation)((*base->get_orientation)(gobj())));

  typedef Orientation RType;
  return RType();
}
ToolbarStyle Gtk::ToolShell::get_style_vfunc() 
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->get_style)
    return ((ToolbarStyle)((*base->get_style)(gobj())));

  typedef ToolbarStyle RType;
  return RType();
}
ReliefStyle Gtk::ToolShell::get_relief_style_vfunc() 
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->get_relief_style)
    return ((ReliefStyle)((*base->get_relief_style)(gobj())));

  typedef ReliefStyle RType;
  return RType();
}
void Gtk::ToolShell::rebuild_menu_vfunc() 
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->rebuild_menu)
    (*base->rebuild_menu)(gobj());
}


} // namespace Gtk


