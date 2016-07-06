// Generated by gtkmmproc -- DO NOT MODIFY!


#include <gtkmm/label.h>
#include <gtkmm/private/label_p.h>

// -*- c++ -*-
/* $Id: label.ccg,v 1.2 2004/02/03 11:06:49 murrayc Exp $ */

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
#include <gtkmm/menu.h>

namespace Gtk
{

Label::Label()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Misc(Glib::ConstructParams(label_class_.init()))
{}

Label::Label(const Glib::ustring& label, bool mnemonic)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Misc(Glib::ConstructParams(label_class_.init(), "label",label.c_str(),"use_underline",gboolean(mnemonic), static_cast<char*>(0)))
{}

Label::Label(const Glib::ustring& label, float xalign, float yalign, bool mnemonic)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Misc(Glib::ConstructParams(label_class_.init(), "label",label.c_str(),"use_underline",gboolean(mnemonic), static_cast<char*>(0)))
{
  set_alignment(xalign, yalign);
}

Label::Label(const Glib::ustring& label, AlignmentEnum xalign, AlignmentEnum yalign, bool mnemonic)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gtk::Misc(Glib::ConstructParams(label_class_.init(), "label",label.c_str(),"use_underline",gboolean(mnemonic), static_cast<char*>(0)))
{
  set_alignment(xalign, yalign);
}

void Label::select_region(int start_offset)
{
  gtk_label_select_region(gobj(), start_offset, -1 /* See C docs */);
}

} // namespace Gtk


namespace
{


static void Label_signal_populate_popup_callback(GtkLabel* self, GtkMenu* p0,void* data)
{
  using namespace Gtk;
  typedef sigc::slot< void,Menu* > SlotType;

  // Do not try to call a signal on a disassociated wrapper.
  if(Glib::ObjectBase::_get_current_wrapper((GObject*) self))
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::wrap(p0)
);
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
    #endif //GLIBMM_EXCEPTIONS_ENABLED
  }
}

static const Glib::SignalProxyInfo Label_signal_populate_popup_info =
{
  "populate_popup",
  (GCallback) &Label_signal_populate_popup_callback,
  (GCallback) &Label_signal_populate_popup_callback
};


static gboolean Label_signal_activate_link_callback(GtkLabel* self, const gchar* p0,void* data)
{
  using namespace Gtk;
  typedef sigc::slot< bool,const Glib::ustring& > SlotType;

  // Do not try to call a signal on a disassociated wrapper.
  if(Glib::ObjectBase::_get_current_wrapper((GObject*) self))
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        return static_cast<int>((*static_cast<SlotType*>(slot))(Glib::convert_const_gchar_ptr_to_ustring(p0)
));
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
    #endif //GLIBMM_EXCEPTIONS_ENABLED
  }

  typedef gboolean RType;
  return RType();
}

static gboolean Label_signal_activate_link_notify_callback(GtkLabel* self, const gchar* p0, void* data)
{
  using namespace Gtk;
  typedef sigc::slot< void,const Glib::ustring& > SlotType;

  // Do not try to call a signal on a disassociated wrapper.
  if(Glib::ObjectBase::_get_current_wrapper((GObject*) self))
  {
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    try
    {
    #endif //GLIBMM_EXCEPTIONS_ENABLED
      if(sigc::slot_base *const slot = Glib::SignalProxyNormal::data_to_slot(data))
        (*static_cast<SlotType*>(slot))(Glib::convert_const_gchar_ptr_to_ustring(p0)
);
    #ifdef GLIBMM_EXCEPTIONS_ENABLED
    }
    catch(...)
    {
      Glib::exception_handlers_invoke();
    }
    #endif //GLIBMM_EXCEPTIONS_ENABLED
  }

  typedef gboolean RType;
  return RType();
}

static const Glib::SignalProxyInfo Label_signal_activate_link_info =
{
  "activate-link",
  (GCallback) &Label_signal_activate_link_callback,
  (GCallback) &Label_signal_activate_link_notify_callback
};


} // anonymous namespace


namespace Glib
{

Gtk::Label* wrap(GtkLabel* object, bool take_copy)
{
  return dynamic_cast<Gtk::Label *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gtk
{


/* The *_Class implementation: */

const Glib::Class& Label_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Label_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_label_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Label_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


  klass->populate_popup = &populate_popup_callback;
}


void Label_Class::populate_popup_callback(GtkLabel* self, GtkMenu* p0)
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
        obj->on_populate_popup(Glib::wrap(p0)
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
        g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
    );

  // Call the original underlying C function:
  if(base && base->populate_popup)
    (*base->populate_popup)(self, p0);
}


Glib::ObjectBase* Label_Class::wrap_new(GObject* o)
{
  return manage(new Label((GtkLabel*)(o)));

}


/* The implementation: */

Label::Label(const Glib::ConstructParams& construct_params)
:
  Gtk::Misc(construct_params)
{
  }

Label::Label(GtkLabel* castitem)
:
  Gtk::Misc((GtkMisc*)(castitem))
{
  }

Label::~Label()
{
  destroy_();
}

Label::CppClassType Label::label_class_; // initialize static member

GType Label::get_type()
{
  return label_class_.init().get_type();
}


GType Label::get_base_type()
{
  return gtk_label_get_type();
}


void Label::set_text(const Glib::ustring & str)
{
gtk_label_set_text(gobj(), str.c_str()); 
}

Glib::ustring Label::get_text() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_label_get_text(const_cast<GtkLabel*>(gobj())));
}

void Label::set_attributes(Pango::AttrList& attrs)
{
gtk_label_set_attributes(gobj(), (attrs).gobj()); 
}

Pango::AttrList Label::get_attributes() const
{
  return Pango::AttrList((gtk_label_get_attributes(const_cast<GtkLabel*>(gobj()))));
}

void Label::set_label(const Glib::ustring& str)
{
gtk_label_set_label(gobj(), str.c_str()); 
}

Glib::ustring Label::get_label() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_label_get_label(const_cast<GtkLabel*>(gobj())));
}

void Label::set_markup(const Glib::ustring& str)
{
gtk_label_set_markup(gobj(), str.c_str()); 
}

void Label::set_use_markup(bool setting)
{
gtk_label_set_use_markup(gobj(), static_cast<int>(setting)); 
}

bool Label::get_use_markup() const
{
  return gtk_label_get_use_markup(const_cast<GtkLabel*>(gobj()));
}

void Label::set_use_underline(bool setting)
{
gtk_label_set_use_underline(gobj(), static_cast<int>(setting)); 
}

bool Label::get_use_underline() const
{
  return gtk_label_get_use_underline(const_cast<GtkLabel*>(gobj()));
}

void Label::set_markup_with_mnemonic(const Glib::ustring& str)
{
gtk_label_set_markup_with_mnemonic(gobj(), str.c_str()); 
}

guint Label::get_mnemonic_keyval() const
{
  return gtk_label_get_mnemonic_keyval(const_cast<GtkLabel*>(gobj()));
}

void Label::set_mnemonic_widget(Widget& widget)
{
gtk_label_set_mnemonic_widget(gobj(), (widget).gobj()); 
}

Widget* Label::get_mnemonic_widget()
{
  return Glib::wrap(gtk_label_get_mnemonic_widget(gobj()));
}

const Widget* Label::get_mnemonic_widget() const
{
  return Glib::wrap(gtk_label_get_mnemonic_widget(const_cast<GtkLabel*>(gobj())));
}

void Label::set_text_with_mnemonic(const Glib::ustring& str)
{
gtk_label_set_text_with_mnemonic(gobj(), str.c_str()); 
}

void Label::set_justify(Justification jtype)
{
gtk_label_set_justify(gobj(), ((GtkJustification)(jtype))); 
}

Justification Label::get_justify() const
{
  return ((Justification)(gtk_label_get_justify(const_cast<GtkLabel*>(gobj()))));
}

void Label::set_ellipsize(Pango::EllipsizeMode mode)
{
gtk_label_set_ellipsize(gobj(), ((PangoEllipsizeMode)(mode))); 
}

Pango::EllipsizeMode Label::get_ellipsize() const
{
  return ((Pango::EllipsizeMode)(gtk_label_get_ellipsize(const_cast<GtkLabel*>(gobj()))));
}

void Label::set_width_chars(int n_chars)
{
gtk_label_set_width_chars(gobj(), n_chars); 
}

int Label::get_width_chars() const
{
  return gtk_label_get_width_chars(const_cast<GtkLabel*>(gobj()));
}

void Label::set_max_width_chars(int n_chars)
{
gtk_label_set_max_width_chars(gobj(), n_chars); 
}

int Label::get_max_width_chars() const
{
  return gtk_label_get_max_width_chars(const_cast<GtkLabel*>(gobj()));
}

void Label::set_pattern(const Glib::ustring& pattern)
{
gtk_label_set_pattern(gobj(), pattern.c_str()); 
}

void Label::set_line_wrap(bool wrap)
{
gtk_label_set_line_wrap(gobj(), static_cast<int>(wrap)); 
}

bool Label::get_line_wrap() const
{
  return gtk_label_get_line_wrap(const_cast<GtkLabel*>(gobj()));
}

void Label::set_line_wrap_mode(Pango::WrapMode wrap_mode)
{
gtk_label_set_line_wrap_mode(gobj(), ((PangoWrapMode)(wrap_mode))); 
}

Pango::WrapMode Label::get_line_wrap_mode() const
{
  return ((Pango::WrapMode)(gtk_label_get_line_wrap_mode(const_cast<GtkLabel*>(gobj()))));
}

void Label::set_selectable(bool setting)
{
gtk_label_set_selectable(gobj(), static_cast<int>(setting)); 
}

bool Label::get_selectable() const
{
  return gtk_label_get_selectable(const_cast<GtkLabel*>(gobj()));
}

void Label::set_angle(double angle)
{
gtk_label_set_angle(gobj(), angle); 
}

double Label::get_angle() const
{
  return gtk_label_get_angle(const_cast<GtkLabel*>(gobj()));
}

void Label::select_region(int start_offset, int end_offset)
{
gtk_label_select_region(gobj(), start_offset, end_offset); 
}

bool Label::get_selection_bounds(int& start, int& end) const
{
  return gtk_label_get_selection_bounds(const_cast<GtkLabel*>(gobj()), &start, &end);
}

Glib::RefPtr<Pango::Layout> Label::get_layout()
{

  Glib::RefPtr<Pango::Layout> retvalue = Glib::wrap(gtk_label_get_layout(gobj()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;

}

Glib::RefPtr<const Pango::Layout> Label::get_layout() const
{
  return const_cast<Label*>(this)->get_layout();
}

void Label::get_layout_offsets(int& x, int& y) const
{
gtk_label_get_layout_offsets(const_cast<GtkLabel*>(gobj()), &x, &y); 
}

void Label::set_single_line_mode(bool single_line_mode)
{
gtk_label_set_single_line_mode(gobj(), static_cast<int>(single_line_mode)); 
}

bool Label::get_single_line_mode() const
{
  return gtk_label_get_single_line_mode(const_cast<GtkLabel*>(gobj()));
}

Glib::ustring Label::get_current_uri() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_label_get_current_uri(const_cast<GtkLabel*>(gobj())));
}

void Label::set_track_visited_links(bool track_links)
{
gtk_label_set_track_visited_links(gobj(), static_cast<int>(track_links)); 
}

bool Label::get_track_visited_links() const
{
  return gtk_label_get_track_visited_links(const_cast<GtkLabel*>(gobj()));
}


Glib::SignalProxy1< void,Menu* > Label::signal_populate_popup()
{
  return Glib::SignalProxy1< void,Menu* >(this, &Label_signal_populate_popup_info);
}


Glib::SignalProxy1< bool,const Glib::ustring& > Label::signal_activate_link()
{
  return Glib::SignalProxy1< bool,const Glib::ustring& >(this, &Label_signal_activate_link_info);
}


#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Glib::ustring> Label::property_label() 
{
  return Glib::PropertyProxy<Glib::ustring>(this, "label");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Glib::ustring> Label::property_label() const
{
  return Glib::PropertyProxy_ReadOnly<Glib::ustring>(this, "label");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Pango::AttrList> Label::property_attributes() 
{
  return Glib::PropertyProxy<Pango::AttrList>(this, "attributes");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Pango::AttrList> Label::property_attributes() const
{
  return Glib::PropertyProxy_ReadOnly<Pango::AttrList>(this, "attributes");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> Label::property_use_markup() 
{
  return Glib::PropertyProxy<bool>(this, "use-markup");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> Label::property_use_markup() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "use-markup");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> Label::property_use_underline() 
{
  return Glib::PropertyProxy<bool>(this, "use-underline");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> Label::property_use_underline() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "use-underline");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Justification> Label::property_justify() 
{
  return Glib::PropertyProxy<Justification>(this, "justify");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Justification> Label::property_justify() const
{
  return Glib::PropertyProxy_ReadOnly<Justification>(this, "justify");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_WriteOnly<Glib::ustring> Label::property_pattern() 
{
  return Glib::PropertyProxy_WriteOnly<Glib::ustring>(this, "pattern");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> Label::property_wrap() 
{
  return Glib::PropertyProxy<bool>(this, "wrap");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> Label::property_wrap() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "wrap");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Pango::WrapMode> Label::property_wrap_mode() 
{
  return Glib::PropertyProxy<Pango::WrapMode>(this, "wrap-mode");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Pango::WrapMode> Label::property_wrap_mode() const
{
  return Glib::PropertyProxy_ReadOnly<Pango::WrapMode>(this, "wrap-mode");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> Label::property_selectable() 
{
  return Glib::PropertyProxy<bool>(this, "selectable");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> Label::property_selectable() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "selectable");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<guint> Label::property_mnemonic_keyval() const
{
  return Glib::PropertyProxy_ReadOnly<guint>(this, "mnemonic-keyval");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Widget*> Label::property_mnemonic_widget() 
{
  return Glib::PropertyProxy<Widget*>(this, "mnemonic-widget");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Widget*> Label::property_mnemonic_widget() const
{
  return Glib::PropertyProxy_ReadOnly<Widget*>(this, "mnemonic-widget");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<int> Label::property_cursor_position() const
{
  return Glib::PropertyProxy_ReadOnly<int>(this, "cursor-position");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<int> Label::property_selection_bound() const
{
  return Glib::PropertyProxy_ReadOnly<int>(this, "selection-bound");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Pango::EllipsizeMode> Label::property_ellipsize() 
{
  return Glib::PropertyProxy<Pango::EllipsizeMode>(this, "ellipsize");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Pango::EllipsizeMode> Label::property_ellipsize() const
{
  return Glib::PropertyProxy_ReadOnly<Pango::EllipsizeMode>(this, "ellipsize");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<int> Label::property_width_chars() 
{
  return Glib::PropertyProxy<int>(this, "width-chars");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<int> Label::property_width_chars() const
{
  return Glib::PropertyProxy_ReadOnly<int>(this, "width-chars");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> Label::property_single_line_mode() 
{
  return Glib::PropertyProxy<bool>(this, "single-line-mode");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> Label::property_single_line_mode() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "single-line-mode");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<double> Label::property_angle() 
{
  return Glib::PropertyProxy<double>(this, "angle");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<double> Label::property_angle() const
{
  return Glib::PropertyProxy_ReadOnly<double>(this, "angle");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<int> Label::property_max_width_chars() 
{
  return Glib::PropertyProxy<int>(this, "max-width-chars");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<int> Label::property_max_width_chars() const
{
  return Glib::PropertyProxy_ReadOnly<int>(this, "max-width-chars");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> Label::property_track_visited_links() 
{
  return Glib::PropertyProxy<bool>(this, "track-visited-links");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> Label::property_track_visited_links() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "track-visited-links");
}
#endif //GLIBMM_PROPERTIES_ENABLED


void Gtk::Label::on_populate_popup(Menu* menu)
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->populate_popup)
    (*base->populate_popup)(gobj(),(GtkMenu*)Glib::unwrap(menu));
}


} // namespace Gtk

