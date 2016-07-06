// Generated by gtkmmproc -- DO NOT MODIFY!


#include <giomm/datainputstream.h>
#include <giomm/private/datainputstream_p.h>

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

#include <gio/gio.h>
#include "slot_async.h"

namespace Gio
{

#ifdef GLIBMM_EXCEPTIONS_ENABLED
guchar DataInputStream::read_byte()
#else
guchar DataInputStream::read_byte(std::auto_ptr<Glib::Error>& error)
#endif //GLIBMM_EXCEPTIONS_ENABLED
{
  GError* gerror = 0;
  const guchar retvalue = g_data_input_stream_read_byte(gobj(), 0, &(gerror));
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
#else
  if(gerror)
    error = ::Glib::Error::throw_exception(gerror);
#endif //GLIBMM_EXCEPTIONS_ENABLED

  return retvalue;
}

#ifdef GLIBMM_EXCEPTIONS_ENABLED
gint16 DataInputStream::read_int16()
#else
gint16 DataInputStream::read_int16(std::auto_ptr<Glib::Error>& error)
#endif //GLIBMM_EXCEPTIONS_ENABLED
{
  GError* gerror = 0;
  const gint16 retvalue = g_data_input_stream_read_int16(gobj(), 0, &(gerror));
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
#else
  if(gerror)
    error = ::Glib::Error::throw_exception(gerror);
#endif //GLIBMM_EXCEPTIONS_ENABLED

  return retvalue;
}

#ifdef GLIBMM_EXCEPTIONS_ENABLED
guint16 DataInputStream::read_uint16()
#else
guint16 DataInputStream::read_uint16(std::auto_ptr<Glib::Error>& error)
#endif //GLIBMM_EXCEPTIONS_ENABLED
{
  GError* gerror = 0;
  const guint16 retvalue = g_data_input_stream_read_uint16(gobj(), 0, &(gerror));
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
#else
  if(gerror)
    error = ::Glib::Error::throw_exception(gerror);
#endif //GLIBMM_EXCEPTIONS_ENABLED

  return retvalue;
}

#ifdef GLIBMM_EXCEPTIONS_ENABLED
gint32 DataInputStream::read_int32()
#else
gint32 DataInputStream::read_int32(std::auto_ptr<Glib::Error>& error)
#endif //GLIBMM_EXCEPTIONS_ENABLED
{
  GError* gerror = 0;
  const gint32 retvalue = g_data_input_stream_read_int32(gobj(), 0, &(gerror));
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
#else
  if(gerror)
    error = ::Glib::Error::throw_exception(gerror);
#endif //GLIBMM_EXCEPTIONS_ENABLED

  return retvalue;
}

#ifdef GLIBMM_EXCEPTIONS_ENABLED
guint32 DataInputStream::read_uint32()
#else
guint32 DataInputStream::read_uint32(std::auto_ptr<Glib::Error>& error)
#endif //GLIBMM_EXCEPTIONS_ENABLED
{
  GError* gerror = 0;
  const guint32 retvalue = g_data_input_stream_read_uint32(gobj(), 0, &(gerror));
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
#else
  if(gerror)
    error = ::Glib::Error::throw_exception(gerror);
#endif //GLIBMM_EXCEPTIONS_ENABLED

  return retvalue;
}

#ifdef GLIBMM_EXCEPTIONS_ENABLED
gint64 DataInputStream::read_int64()
#else
gint64 DataInputStream::read_int64(std::auto_ptr<Glib::Error>& error)
#endif //GLIBMM_EXCEPTIONS_ENABLED
{
  GError* gerror = 0;
  const gint64 retvalue = g_data_input_stream_read_int64(gobj(), 0, &(gerror));
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
#else
  if(gerror)
    error = ::Glib::Error::throw_exception(gerror);
#endif //GLIBMM_EXCEPTIONS_ENABLED

  return retvalue;
}

#ifdef GLIBMM_EXCEPTIONS_ENABLED
guint64 DataInputStream::read_uint64()
#else
guint64 DataInputStream::read_uint64(std::auto_ptr<Glib::Error>& error)
#endif //GLIBMM_EXCEPTIONS_ENABLED
{
  GError* gerror = 0;
  const guint64 retvalue = g_data_input_stream_read_uint64(gobj(), 0, &(gerror));
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
#else
  if(gerror)
    error = ::Glib::Error::throw_exception(gerror);
#endif //GLIBMM_EXCEPTIONS_ENABLED

  return retvalue;
}

#ifdef GLIBMM_EXCEPTIONS_ENABLED
bool DataInputStream::read_line(std::string& line, const Glib::RefPtr<Cancellable>& cancellable)
#else
bool DataInputStream::read_line(std::string& line, const Glib::RefPtr<Cancellable>& cancellable, std::auto_ptr<Glib::Error>& error)
#endif //GLIBMM_EXCEPTIONS_ENABLED
{
  GError* gerror = 0;
  char* c_line = g_data_input_stream_read_line(gobj(),
                                               0, // pass NULL since we can easily determine the length from the returned std::string
                                               Glib::unwrap(cancellable),
                                               &gerror);
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
#else
  if(gerror)
    error = ::Glib::Error::throw_exception(gerror);
#endif //GLIBMM_EXCEPTIONS_ENABLED
    if (c_line) {
        line = c_line;
        g_free (c_line);
        return true;
    }
    // end of stream reached, return failure status
    return false;
}

#ifdef GLIBMM_EXCEPTIONS_ENABLED
bool DataInputStream::read_line(std::string& line)
#else
bool DataInputStream::read_line(std::string& line, std::auto_ptr<Glib::Error>& error)
#endif //GLIBMM_EXCEPTIONS_ENABLED
{
  GError* gerror = 0;
  char* c_line = g_data_input_stream_read_line(gobj(),
                                               0, // pass NULL since we can easily determine the length from the returned std::string
                                               0,
                                               &gerror);
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
#else
  if(gerror)
    error = ::Glib::Error::throw_exception(gerror);
#endif //GLIBMM_EXCEPTIONS_ENABLED
    if (c_line) {
        line = c_line;
        g_free(c_line);
        return true;
    }
    // end of stream reached, return failure status
    return false;
}

void DataInputStream::read_line_async(const SlotAsyncReady& slot, const Glib::RefPtr<Cancellable>& cancellable, int io_priority)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

  g_data_input_stream_read_line_async(gobj(),
                            io_priority,
                            Glib::unwrap(cancellable),
                            &SignalProxy_async_callback,
                            slot_copy);
}

#ifdef GLIBMM_EXCEPTIONS_ENABLED
bool DataInputStream::read_line_finish(const Glib::RefPtr<AsyncResult>& result, std::string& data)
#else
bool DataInputStream::read_line_finish(const Glib::RefPtr<AsyncResult>& result, std::string& data, std::auto_ptr<Glib::Error>& error)
#endif //GLIBMM_EXCEPTIONS_ENABLED
{
  GError* gerror = 0;
  gsize size = 0;
  gchar* buffer = g_data_input_stream_read_line_finish(gobj(), Glib::unwrap(result), &size, &(gerror));
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
#else
  if(gerror)
    error = ::Glib::Error::throw_exception(gerror);
#endif //GLIBMM_EXCEPTIONS_ENABLED

  bool retval = false;
  if(buffer && size)
  {
    retval = (buffer != 0);
    data = std::string(buffer, size);
    g_free (buffer);
  }
  
  return retval;
}

#ifdef GLIBMM_EXCEPTIONS_ENABLED
bool DataInputStream::read_until(std::string& data, const std::string& stop_chars, const Glib::RefPtr<Cancellable>& cancellable)
#else
bool DataInputStream::read_until(std::string& data, const std::string& stop_chars, const Glib::RefPtr<Cancellable>& cancellable, std::auto_ptr<Glib::Error>& error)
#endif //GLIBMM_EXCEPTIONS_ENABLED
{
  GError* gerror = 0;
  char* c_str = g_data_input_stream_read_until(gobj(),
                                               stop_chars.c_str(),
                                               0, // pass NULL since we can easily determine the length from the returned std::string
                                               Glib::unwrap(cancellable),
                                               &gerror);
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
#else
  if(gerror)
    error = ::Glib::Error::throw_exception(gerror);
#endif //GLIBMM_EXCEPTIONS_ENABLED
    if (c_str) {
        data = c_str;
        g_free (c_str);
        return true;
    }
    // end of stream reached, return failure status
    return false;
}

/** non-cancellable version of read_until()
 */
#ifdef GLIBMM_EXCEPTIONS_ENABLED
bool DataInputStream::read_until(std::string& data, const std::string& stop_chars)
#else
bool DataInputStream::read_until(std::string& data, const std::string& stop_chars, std::auto_ptr<Glib::Error>& error)
#endif //GLIBMM_EXCEPTIONS_ENABLED
{
  GError* gerror = 0;
  char* c_str = g_data_input_stream_read_until(gobj(),
                                               stop_chars.c_str(),
                                               0, // pass NULL since we can easily determine the length from the returned std::string
                                               0,
                                               &gerror);
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
#else
  if(gerror)
    error = ::Glib::Error::throw_exception(gerror);
#endif //GLIBMM_EXCEPTIONS_ENABLED
    if (c_str) {
        data = c_str;
        g_free (c_str);
        return true;
    }
    // end of stream reached, return failure status
    return false;
}

void DataInputStream::read_until_async(const std::string& stop_chars, const SlotAsyncReady& slot, const Glib::RefPtr<Cancellable>& cancellable, int io_priority)
{
  // Create a copy of the slot.
  // A pointer to it will be passed through the callback's data parameter
  // and deleted in the callback.
  SlotAsyncReady* slot_copy = new SlotAsyncReady(slot);

  g_data_input_stream_read_until_async(gobj(), stop_chars.c_str(), 
                            io_priority,
                            Glib::unwrap(cancellable),
                            &SignalProxy_async_callback,
                            slot_copy);
}

#ifdef GLIBMM_EXCEPTIONS_ENABLED
bool DataInputStream::read_until_finish(const Glib::RefPtr<AsyncResult>& result, std::string& data)
#else
bool DataInputStream::read_until_finish(const Glib::RefPtr<AsyncResult>& result, std::string& data, std::auto_ptr<Glib::Error>& error)
#endif //GLIBMM_EXCEPTIONS_ENABLED
{
  GError* gerror = 0;
  gsize size = 0;
  gchar* buffer = g_data_input_stream_read_until_finish(gobj(), Glib::unwrap(result), &size, &(gerror));
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
#else
  if(gerror)
    error = ::Glib::Error::throw_exception(gerror);
#endif //GLIBMM_EXCEPTIONS_ENABLED

  bool retval = false;
  if(buffer && size)
  {
    retval = (buffer != 0);
    data = std::string(buffer, size);
    g_free (buffer);
  }
  
  return retval;
}

  
} // namespace Gio

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gio::DataInputStream> wrap(GDataInputStream* object, bool take_copy)
{
  return Glib::RefPtr<Gio::DataInputStream>( dynamic_cast<Gio::DataInputStream*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gio
{


/* The *_Class implementation: */

const Glib::Class& DataInputStream_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &DataInputStream_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(g_data_input_stream_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void DataInputStream_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);

#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED

#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
}

#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED

#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED


Glib::ObjectBase* DataInputStream_Class::wrap_new(GObject* object)
{
  return new DataInputStream((GDataInputStream*)object);
}


/* The implementation: */

GDataInputStream* DataInputStream::gobj_copy()
{
  reference();
  return gobj();
}

DataInputStream::DataInputStream(const Glib::ConstructParams& construct_params)
:
  Gio::BufferedInputStream(construct_params)
{

}

DataInputStream::DataInputStream(GDataInputStream* castitem)
:
  Gio::BufferedInputStream((GBufferedInputStream*)(castitem))
{}


DataInputStream::~DataInputStream()
{}


DataInputStream::CppClassType DataInputStream::datainputstream_class_; // initialize static member

GType DataInputStream::get_type()
{
  return datainputstream_class_.init().get_type();
}


GType DataInputStream::get_base_type()
{
  return g_data_input_stream_get_type();
}


DataInputStream::DataInputStream(const Glib::RefPtr<InputStream>& base_stream)
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Gio::BufferedInputStream(Glib::ConstructParams(datainputstream_class_.init(), "base_stream", const_cast<GInputStream*>(Glib::unwrap(base_stream)), static_cast<char*>(0)))
{
  

}

Glib::RefPtr<DataInputStream> DataInputStream::create(const Glib::RefPtr<InputStream>& base_stream)
{
  return Glib::RefPtr<DataInputStream>( new DataInputStream(base_stream) );
}
void DataInputStream::set_byte_order(DataStreamByteOrder order)
{
g_data_input_stream_set_byte_order(gobj(), ((GDataStreamByteOrder)(order))); 
}

DataStreamByteOrder DataInputStream::get_byte_order() const
{
  return ((DataStreamByteOrder)(g_data_input_stream_get_byte_order(const_cast<GDataInputStream*>(gobj()))));
}

void DataInputStream::set_newline_type(DataStreamNewlineType type)
{
g_data_input_stream_set_newline_type(gobj(), ((GDataStreamNewlineType)(type))); 
}

DataStreamNewlineType DataInputStream::get_newline_type() const
{
  return ((DataStreamNewlineType)(g_data_input_stream_get_newline_type(const_cast<GDataInputStream*>(gobj()))));
}

#ifdef GLIBMM_EXCEPTIONS_ENABLED
guchar DataInputStream::read_byte(const Glib::RefPtr<Cancellable>& cancellable)
#else
guchar DataInputStream::read_byte(const Glib::RefPtr<Cancellable>& cancellable, std::auto_ptr<Glib::Error>& error)
#endif //GLIBMM_EXCEPTIONS_ENABLED
{
  GError* gerror = 0;
  guchar retvalue = g_data_input_stream_read_byte(gobj(), const_cast<GCancellable*>(Glib::unwrap(cancellable)), &(gerror));
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
#else
  if(gerror)
    error = ::Glib::Error::throw_exception(gerror);
#endif //GLIBMM_EXCEPTIONS_ENABLED

  return retvalue;

}

#ifdef GLIBMM_EXCEPTIONS_ENABLED
gint16 DataInputStream::read_int16(const Glib::RefPtr<Cancellable>& cancellable)
#else
gint16 DataInputStream::read_int16(const Glib::RefPtr<Cancellable>& cancellable, std::auto_ptr<Glib::Error>& error)
#endif //GLIBMM_EXCEPTIONS_ENABLED
{
  GError* gerror = 0;
  gint16 retvalue = g_data_input_stream_read_int16(gobj(), const_cast<GCancellable*>(Glib::unwrap(cancellable)), &(gerror));
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
#else
  if(gerror)
    error = ::Glib::Error::throw_exception(gerror);
#endif //GLIBMM_EXCEPTIONS_ENABLED

  return retvalue;

}

#ifdef GLIBMM_EXCEPTIONS_ENABLED
guint16 DataInputStream::read_uint16(const Glib::RefPtr<Cancellable>& cancellable)
#else
guint16 DataInputStream::read_uint16(const Glib::RefPtr<Cancellable>& cancellable, std::auto_ptr<Glib::Error>& error)
#endif //GLIBMM_EXCEPTIONS_ENABLED
{
  GError* gerror = 0;
  guint16 retvalue = g_data_input_stream_read_uint16(gobj(), const_cast<GCancellable*>(Glib::unwrap(cancellable)), &(gerror));
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
#else
  if(gerror)
    error = ::Glib::Error::throw_exception(gerror);
#endif //GLIBMM_EXCEPTIONS_ENABLED

  return retvalue;

}

#ifdef GLIBMM_EXCEPTIONS_ENABLED
gint32 DataInputStream::read_int32(const Glib::RefPtr<Cancellable>& cancellable)
#else
gint32 DataInputStream::read_int32(const Glib::RefPtr<Cancellable>& cancellable, std::auto_ptr<Glib::Error>& error)
#endif //GLIBMM_EXCEPTIONS_ENABLED
{
  GError* gerror = 0;
  gint32 retvalue = g_data_input_stream_read_int32(gobj(), const_cast<GCancellable*>(Glib::unwrap(cancellable)), &(gerror));
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
#else
  if(gerror)
    error = ::Glib::Error::throw_exception(gerror);
#endif //GLIBMM_EXCEPTIONS_ENABLED

  return retvalue;

}

#ifdef GLIBMM_EXCEPTIONS_ENABLED
guint32 DataInputStream::read_uint32(const Glib::RefPtr<Cancellable>& cancellable)
#else
guint32 DataInputStream::read_uint32(const Glib::RefPtr<Cancellable>& cancellable, std::auto_ptr<Glib::Error>& error)
#endif //GLIBMM_EXCEPTIONS_ENABLED
{
  GError* gerror = 0;
  guint32 retvalue = g_data_input_stream_read_uint32(gobj(), const_cast<GCancellable*>(Glib::unwrap(cancellable)), &(gerror));
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
#else
  if(gerror)
    error = ::Glib::Error::throw_exception(gerror);
#endif //GLIBMM_EXCEPTIONS_ENABLED

  return retvalue;

}

#ifdef GLIBMM_EXCEPTIONS_ENABLED
gint64 DataInputStream::read_int64(const Glib::RefPtr<Cancellable>& cancellable)
#else
gint64 DataInputStream::read_int64(const Glib::RefPtr<Cancellable>& cancellable, std::auto_ptr<Glib::Error>& error)
#endif //GLIBMM_EXCEPTIONS_ENABLED
{
  GError* gerror = 0;
  gint64 retvalue = g_data_input_stream_read_int64(gobj(), const_cast<GCancellable*>(Glib::unwrap(cancellable)), &(gerror));
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
#else
  if(gerror)
    error = ::Glib::Error::throw_exception(gerror);
#endif //GLIBMM_EXCEPTIONS_ENABLED

  return retvalue;

}

#ifdef GLIBMM_EXCEPTIONS_ENABLED
guint64 DataInputStream::read_uint64(const Glib::RefPtr<Cancellable>& cancellable)
#else
guint64 DataInputStream::read_uint64(const Glib::RefPtr<Cancellable>& cancellable, std::auto_ptr<Glib::Error>& error)
#endif //GLIBMM_EXCEPTIONS_ENABLED
{
  GError* gerror = 0;
  guint64 retvalue = g_data_input_stream_read_uint64(gobj(), const_cast<GCancellable*>(Glib::unwrap(cancellable)), &(gerror));
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  if(gerror)
    ::Glib::Error::throw_exception(gerror);
#else
  if(gerror)
    error = ::Glib::Error::throw_exception(gerror);
#endif //GLIBMM_EXCEPTIONS_ENABLED

  return retvalue;

}


#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<DataStreamByteOrder> DataInputStream::property_byte_order() 
{
  return Glib::PropertyProxy<DataStreamByteOrder>(this, "byte-order");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<DataStreamByteOrder> DataInputStream::property_byte_order() const
{
  return Glib::PropertyProxy_ReadOnly<DataStreamByteOrder>(this, "byte-order");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<DataStreamNewlineType> DataInputStream::property_newline_type() 
{
  return Glib::PropertyProxy<DataStreamNewlineType>(this, "newline-type");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<DataStreamNewlineType> DataInputStream::property_newline_type() const
{
  return Glib::PropertyProxy_ReadOnly<DataStreamNewlineType>(this, "newline-type");
}
#endif //GLIBMM_PROPERTIES_ENABLED


#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED

#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED


} // namespace Gio


