// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GIOMM_IOSTREAM_H
#define _GIOMM_IOSTREAM_H


#include <glibmm.h>

// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2007 The giomm Development Team
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

#include <giomm/inputstream.h>
#include <giomm/outputstream.h>
#include <giomm/asyncresult.h>
#include <giomm/cancellable.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GIOStream GIOStream;
typedef struct _GIOStreamClass GIOStreamClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gio
{ class IOStream_Class; } // namespace Gio
namespace Gio
{

/**
 *
 * @ingroup Streams
 *
 * @newin{2,22}
 */

class IOStream : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef IOStream CppObjectType;
  typedef IOStream_Class CppClassType;
  typedef GIOStream BaseObjectType;
  typedef GIOStreamClass BaseClassType;

private:  friend class IOStream_Class;
  static CppClassType iostream_class_;

private:
  // noncopyable
  IOStream(const IOStream&);
  IOStream& operator=(const IOStream&);

protected:
  explicit IOStream(const Glib::ConstructParams& construct_params);
  explicit IOStream(GIOStream* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~IOStream();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GIOStream*       gobj()       { return reinterpret_cast<GIOStream*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GIOStream* gobj() const { return reinterpret_cast<GIOStream*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GIOStream* gobj_copy();

private:


public:
  
  /** Gets the input stream for this object. This is used
   * for reading.
   * 
   * @newin{2,22}
   * @return A InputStream, owned by the IOStream. Do not free.
   */
  Glib::RefPtr<InputStream> get_input_stream();
  
  /** Gets the output stream for this object. This is used for
   * writing.
   * 
   * @newin{2,22}
   * @return A OutputStream, owned by the IOStream. Do not free.
   */
  Glib::RefPtr<OutputStream> get_output_stream();
  
  /** Closes the stream, releasing resources related to it. This will also
   * closes the individual input and output streams, if they are not already
   * closed.
   * 
   * Once the stream is closed, all other operations will return
   * IO_ERROR_CLOSED. Closing a stream multiple times will not
   * return an error.
   * 
   * Closing a stream will automatically flush any outstanding buffers
   * in the stream.
   * 
   * Streams will be automatically closed when the last reference
   * is dropped, but you might want to call this function to make sure
   * resources are released as early as possible.
   * 
   * Some streams might keep the backing store of the stream (e.g. a file
   * descriptor) open after the stream is closed. See the documentation for
   * the individual stream for details.
   * 
   * On failure the first error that happened will be reported, but the
   * close operation will finish as much as possible. A stream that failed
   * to close will still return IO_ERROR_CLOSED for all operations.
   * Still, it is important to check and report the error to the user,
   * otherwise there might be a loss of data as all data might not be written.
   * 
   * If @a cancellable is not <tt>0</tt>, then the operation can be cancelled by
   * triggering the cancellable object from another thread. If the operation
   * was cancelled, the error IO_ERROR_CANCELLED will be returned.
   * Cancelling a close will still leave the stream closed, but some streams
   * can use a faster close that doesn't block to e.g. check errors.
   * 
   * The default implementation of this method just calls close on the
   * individual input/output streams.
   * 
   * @newin{2,22}
   * @param cancellable Optional Cancellable object, <tt>0</tt> to ignore.
   * @return <tt>true</tt> on success, <tt>false</tt> on failure.
   */
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  bool close(const Glib::RefPtr<Cancellable>& cancellable);
#else
  bool close(const Glib::RefPtr<Cancellable>& cancellable, std::auto_ptr<Glib::Error>& error);
#endif //GLIBMM_EXCEPTIONS_ENABLED


#ifdef GLIBMM_EXCEPTIONS_ENABLED
bool close();
#else
bool close(std::auto_ptr<Glib::Error>& error);
#endif //GLIBMM_EXCEPTIONS_ENABLED

  void close_async(const SlotAsyncReady&slot, const Glib::RefPtr<Cancellable>& cancellable, int io_priority=Glib::PRIORITY_DEFAULT);
  void close_async(const SlotAsyncReady& slot, int io_priority = Glib::PRIORITY_DEFAULT);
  
  
  /** Closes a stream.
   * 
   * @newin{2,22}
   * @param result A AsyncResult.
   * @return <tt>true</tt> if stream was successfully closed, <tt>false</tt> otherwise.
   */
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  bool close_finish(const Glib::RefPtr<AsyncResult>& result);
#else
  bool close_finish(const Glib::RefPtr<AsyncResult>& result, std::auto_ptr<Glib::Error>& error);
#endif //GLIBMM_EXCEPTIONS_ENABLED

  
  /** Checks if a stream is closed.
   * 
   * @newin{2,22}
   * @return <tt>true</tt> if the stream is closed.
   */
  bool is_closed() const;
  
  /** Checks if a stream has pending actions.
   * 
   * @newin{2,22}
   * @return <tt>true</tt> if @a stream has pending actions.
   */
  bool has_pending() const;
  
  /** Sets @a stream to have actions pending. If the pending flag is
   * already set or @a stream is closed, it will return <tt>false</tt> and set
   *  @a error.
   * 
   * @newin{2,22}
   * @return <tt>true</tt> if pending was previously unset and is now set.
   */
#ifdef GLIBMM_EXCEPTIONS_ENABLED
  bool set_pending();
#else
  bool set_pending(std::auto_ptr<Glib::Error>& error);
#endif //GLIBMM_EXCEPTIONS_ENABLED

  
  /** Clears the pending flag on @a stream.
   * 
   * @newin{2,22}
   */
  void clear_pending();


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
   * @relates Gio::IOStream
   */
  Glib::RefPtr<Gio::IOStream> wrap(GIOStream* object, bool take_copy = false);
}


#endif /* _GIOMM_IOSTREAM_H */

