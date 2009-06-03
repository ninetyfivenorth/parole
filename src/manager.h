/*
 * * Copyright (C) 2009 Ali <aliov@xfce.org>
 *
 * Licensed under the GNU General Public License Version 2
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef __PAROLE_MANAGER_H
#define __PAROLE_MANAGER_H

#include <glib-object.h>

G_BEGIN_DECLS

#define PAROLE_TYPE_MANAGER        (parole_manager_get_type () )
#define PAROLE_MANAGER(o)          (G_TYPE_CHECK_INSTANCE_CAST ((o), PAROLE_TYPE_MANAGER, ParoleManager))
#define PAROLE_IS_MANAGER(o)       (G_TYPE_CHECK_INSTANCE_TYPE ((o), PAROLE_TYPE_MANAGER))

typedef struct ParoleManagerPrivate ParoleManagerPrivate;

typedef struct
{
    GObject         		 parent;
    ParoleManagerPrivate     	*priv;
    
} ParoleManager;

typedef struct
{
    GObjectClass 		 parent_class;
    
} ParoleManagerClass;

GType        			 parole_manager_get_type        (void) G_GNUC_CONST;
ParoleManager       	        *parole_manager_new             (void);

G_END_DECLS

#endif /* __PAROLE_MANAGER_H */
