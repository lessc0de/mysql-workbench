/* 
 * Copyright (c) 2008, 2013, Oracle and/or its affiliates. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; version 2 of the
 * License.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301  USA
 */

#pragma once

namespace MySQL {
  namespace Forms {

    public class RadioButtonWrapper : public ButtonWrapper
    {
    protected:
      RadioButtonWrapper(mforms::RadioButton *button);

      static bool create(mforms::RadioButton *backend, int);
      static void set_active(mforms::RadioButton *backend, bool flag);
      static bool get_active(mforms::RadioButton *backend);

    public:
      static void init();
    };

  };
};
