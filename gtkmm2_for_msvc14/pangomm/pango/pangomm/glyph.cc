// Generated by gtkmmproc -- DO NOT MODIFY!


#include <glibmm.h>

#include <pangomm/glyph.h>
#include <pangomm/private/glyph_p.h>


/*
 * Copyright 2001      Free Software Foundation
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

namespace Pango
{

GlyphInfo::GlyphInfo()
{
  gobject_.glyph = 0;
}


GlyphGeometry::GlyphGeometry()
{
  gobject_.width = gobject_.x_offset = gobject_.y_offset = 0;
}

GlyphGeometry::GlyphGeometry(const PangoGlyphGeometry* src)
{
  gobject_.width = src->width;
  gobject_.x_offset = src->x_offset;
  gobject_.y_offset = src->y_offset;
}


/*GlyphVisAttr::GlyphVisAttr()
{
  gobject_.is_cluster_start = 0;
}

GlyphVisAttr::GlyphVisAttr(const PangoGlyphVisAttr* src)
{
  gobject_.is_cluster_start = src->is_cluster_start;
}*/

} //namespace Pango


namespace Glib
{

Pango::GlyphInfo& wrap(PangoGlyphInfo* object)
{
  return *reinterpret_cast<Pango::GlyphInfo*>(object);
}

const Pango::GlyphInfo& wrap(const PangoGlyphInfo* object)
{
  return *reinterpret_cast<const Pango::GlyphInfo*>(object);
}

Pango::GlyphGeometry& wrap(PangoGlyphGeometry* object)
{
  return *reinterpret_cast<Pango::GlyphGeometry*>(object);
}

const Pango::GlyphGeometry& wrap(const PangoGlyphGeometry* object)
{
  return *reinterpret_cast<const Pango::GlyphGeometry*>(object);
}

/*Pango::GlyphVisAttr& wrap(PangoGlyphVisAttr* object)
{
  return *reinterpret_cast<Pango::GlyphVisAttr*>(object);
}

const Pango::GlyphVisAttr& wrap(const PangoGlyphVisAttr* object)
{
  return *reinterpret_cast<const Pango::GlyphVisAttr*>(object);
}*/

} //namespace Glib

namespace
{
} // anonymous namespace


namespace Pango
{


 Glyph GlyphInfo::get_glyph() const
{
  return gobj()->glyph;
}
 
 GlyphGeometry GlyphInfo::get_geometry() const
{
  return GlyphGeometry(&(gobj()->geometry));
}
 
 GlyphVisAttr GlyphInfo::get_attr() const
{
  return gobj()->attr;
}
 

} // namespace Pango


namespace Pango
{


 GlyphUnit GlyphGeometry::get_width() const
{
  return gobj()->width;
}
 
 GlyphUnit GlyphGeometry::get_x_offset() const
{
  return gobj()->x_offset;
}
 
 GlyphUnit GlyphGeometry::get_y_offset() const
{
  return gobj()->y_offset;
}
 

} // namespace Pango


