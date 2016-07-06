// Generated by gtkmmproc -- DO NOT MODIFY!


#include <glibmm.h>

#include <atkmm/value.h>
#include <atkmm/private/value_p.h>


// -*- c++ -*-
/* $Id: value.ccg,v 1.1 2003/01/21 13:37:08 murrayc Exp $ */

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

#include <atk/atkvalue.h>


namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Atk::Value> wrap(AtkValue* object, bool take_copy)
{
  return Glib::RefPtr<Atk::Value>( dynamic_cast<Atk::Value*> (Glib::wrap_auto_interface<Atk::Value> ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} // namespace Glib


namespace Atk
{


/* The *_Class implementation: */

const Glib::Interface_Class& Value_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Interface_Class has to know the interface init function
    // in order to add interfaces to implementing types.
    class_init_func_ = &Value_Class::iface_init_function;

    // We can not derive from another interface, and it is not necessary anyway.
    gtype_ = atk_value_get_type();
  }

  return *this;
}

void Value_Class::iface_init_function(void* g_iface, void*)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_iface);

  //This is just to avoid an "unused variable" warning when there are no vfuncs or signal handlers to connect.
  //This is a temporary fix until I find out why I can not seem to derive a GtkFileChooser interface. murrayc
  g_assert(klass != 0); 

  klass->get_current_value = &get_current_value_vfunc_callback;
  klass->get_maximum_value = &get_maximum_value_vfunc_callback;
  klass->get_minimum_value = &get_minimum_value_vfunc_callback;
  klass->set_current_value = &set_current_value_vfunc_callback;

}

void Value_Class::get_current_value_vfunc_callback(AtkValue* self, GValue* value)
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
        obj->get_current_value_vfunc(*reinterpret_cast<Glib::ValueBase*>(value)
);
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
  if(base && base->get_current_value)
    (*base->get_current_value)(self, value);

}
void Value_Class::get_maximum_value_vfunc_callback(AtkValue* self, GValue* value)
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
        obj->get_maximum_value_vfunc(*reinterpret_cast<Glib::ValueBase*>(value)
);
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
  if(base && base->get_maximum_value)
    (*base->get_maximum_value)(self, value);

}
void Value_Class::get_minimum_value_vfunc_callback(AtkValue* self, GValue* value)
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
        obj->get_minimum_value_vfunc(*reinterpret_cast<Glib::ValueBase*>(value)
);
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
  if(base && base->get_minimum_value)
    (*base->get_minimum_value)(self, value);

}
gboolean Value_Class::set_current_value_vfunc_callback(AtkValue* self, const GValue* value)
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
        return static_cast<int>(obj->set_current_value_vfunc(*reinterpret_cast<const Glib::ValueBase*>(value)
));
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
  if(base && base->set_current_value)
    return (*base->set_current_value)(self, value);


  typedef gboolean RType;
  return RType();
}


Glib::ObjectBase* Value_Class::wrap_new(GObject* object)
{
  return new Value((AtkValue*)(object));
}


/* The implementation: */

Value::Value()
:
  Glib::Interface(value_class_.init())
{}

Value::Value(AtkValue* castitem)
:
  Glib::Interface((GObject*)(castitem))
{}

Value::Value(const Glib::Interface_Class& interface_class)
: Glib::Interface(interface_class)
{
}

Value::~Value()
{}

// static
void Value::add_interface(GType gtype_implementer)
{
  value_class_.init().add_interface(gtype_implementer);
}

Value::CppClassType Value::value_class_; // initialize static member

GType Value::get_type()
{
  return value_class_.init().get_type();
}


GType Value::get_base_type()
{
  return atk_value_get_type();
}


void Value::get_current_value(Glib::ValueBase& value) const
{
atk_value_get_current_value(const_cast<AtkValue*>(gobj()), (value).gobj()); 
}

void Value::get_maximum_value(Glib::ValueBase& value) const
{
atk_value_get_maximum_value(const_cast<AtkValue*>(gobj()), (value).gobj()); 
}

void Value::get_minimum_value(Glib::ValueBase& value) const
{
atk_value_get_minimum_value(const_cast<AtkValue*>(gobj()), (value).gobj()); 
}

bool Value::set_current_value(const Glib::ValueBase& value)
{
  return atk_value_set_current_value(gobj(), (value).gobj());
}


void Atk::Value::get_current_value_vfunc(Glib::ValueBase& value) const
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->get_current_value)
    (*base->get_current_value)(const_cast<AtkValue*>(gobj()),(value).gobj());
}
void Atk::Value::get_maximum_value_vfunc(Glib::ValueBase& value) const
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->get_maximum_value)
    (*base->get_maximum_value)(const_cast<AtkValue*>(gobj()),(value).gobj());
}
void Atk::Value::get_minimum_value_vfunc(Glib::ValueBase& value) const
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->get_minimum_value)
    (*base->get_minimum_value)(const_cast<AtkValue*>(gobj()),(value).gobj());
}
bool Atk::Value::set_current_value_vfunc(const Glib::ValueBase& value) 
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_interface_peek_parent( // Get the parent interface of the interface (The original underlying C interface).
g_type_interface_peek(G_OBJECT_GET_CLASS(gobject_), CppObjectType::get_type()) // Get the interface.
)  );

  if(base && base->set_current_value)
    return (*base->set_current_value)(gobj(),(value).gobj());

  typedef bool RType;
  return RType();
}


} // namespace Atk

