/*
 * SNOOPY LOGGER
 *
 * File: configuration.h
 *
 * Copyright (c) 2014-2015 Bostjan Skufca <bostjan@a2o.si>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */



/*
 * Array holding Snoopy configuration data in one place
 */
typedef struct {
    int   initialized;

    int   configfile_enabled;
    char *configfile_path;
    int   configfile_found;
    int   configfile_parsed;

    int   error_logging_enabled;

    char *message_format;
    int   message_format_malloced;

    int   filtering_enabled;
    char *filter_chain;
    int   filter_chain_malloced;

    char *output;
    int   output_malloced;
    char *output_arg;
    int   output_arg_malloced;

    int   syslog_facility;
    int   syslog_level;
    int   syslog_ident_malloced;
    char *syslog_ident;
} snoopy_configuration_type;
extern   snoopy_configuration_type   snoopy_configuration;



/*
 * Functions to manage and utilise configuration
 */
void  snoopy_configuration_ctor ();
void  snoopy_configuration_dtor ();
void  snoopy_configuration_set_configfile_path_from_env ();
