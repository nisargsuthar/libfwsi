/*
 * Python object definition of the sequence and iterator object of extension blocks
 *
 * Copyright (C) 2010-2018, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _PYFWSI_EXTENSION_BLOCKS_H )
#define _PYFWSI_EXTENSION_BLOCKS_H

#include <common.h>
#include <types.h>

#include "pyfwsi_libfwsi.h"
#include "pyfwsi_python.h"

#if defined( __cplusplus )
extern "C" {
#endif

typedef struct pyfwsi_extension_blocks pyfwsi_extension_blocks_t;

struct pyfwsi_extension_blocks
{
	/* Python object initialization
	 */
	PyObject_HEAD

	/* The parent object
	 */
	PyObject *parent_object;

	/* The get item by index callback function
	 */
	PyObject* (*get_item_by_index)(
	             PyObject *parent_object,
	             int index );

	/* The current index
	 */
	int current_index;

	/* The number of items
	 */
	int number_of_items;
};

extern PyTypeObject pyfwsi_extension_blocks_type_object;

PyObject *pyfwsi_extension_blocks_new(
           PyObject *parent_object,
           PyObject* (*get_item_by_index)(
                        PyObject *parent_object,
                        int index ),
           int number_of_items );

int pyfwsi_extension_blocks_init(
     pyfwsi_extension_blocks_t *sequence_object );

void pyfwsi_extension_blocks_free(
      pyfwsi_extension_blocks_t *sequence_object );

Py_ssize_t pyfwsi_extension_blocks_len(
            pyfwsi_extension_blocks_t *sequence_object );

PyObject *pyfwsi_extension_blocks_getitem(
           pyfwsi_extension_blocks_t *sequence_object,
           Py_ssize_t item_index );

PyObject *pyfwsi_extension_blocks_iter(
           pyfwsi_extension_blocks_t *sequence_object );

PyObject *pyfwsi_extension_blocks_iternext(
           pyfwsi_extension_blocks_t *sequence_object );

#if defined( __cplusplus )
}
#endif

#endif /* !defined( _PYFWSI_EXTENSION_BLOCKS_H ) */

