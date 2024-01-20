/*
 * Shell folder identifier functions
 *
 * Copyright (C) 2010-2024, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include <common.h>
#include <memory.h>
#include <types.h>

#include "libfwsi_libcerror.h"
#include "libfwsi_shell_folder_identifier.h"

uint8_t libfwsi_shell_folder_identifier_applications[ 16 ] = {
	0x9b, 0xd4, 0x34, 0x42, 0x45, 0x02, 0xf3, 0x4d, 0xb7, 0x80, 0x38, 0x93, 0x94, 0x34, 0x56, 0xe1 };

uint8_t libfwsi_shell_folder_identifier_briefcase[ 16 ] = {
	0x20, 0xd9, 0xbb, 0x85, 0xa0, 0x42, 0x69, 0x10, 0xa2, 0xe4, 0x08, 0x00, 0x2b, 0x30, 0x30, 0x9d };

uint8_t libfwsi_shell_folder_identifier_computer_and_devices[ 16 ] = {
	0x0d, 0x1a, 0x2c, 0xf0, 0x21, 0xbe, 0x50, 0x43, 0x88, 0xb0, 0x73, 0x67, 0xfc, 0x96, 0xef, 0x3c };

uint8_t libfwsi_shell_folder_identifier_common_places[ 16 ] = {
	0x80, 0xa6, 0x3c, 0x32, 0x4d, 0xc2, 0x99, 0x40, 0xb9, 0x4d, 0x44, 0x6d, 0xd2, 0xd7, 0x24, 0x9e };

uint8_t libfwsi_shell_folder_identifier_control_panel[ 16 ] = {
	0x20, 0x20, 0xec, 0x21, 0xea, 0x3a, 0x69, 0x10, 0xa2, 0xdd, 0x08, 0x00, 0x2b, 0x30, 0x30, 0x9d };

uint8_t libfwsi_shell_folder_identifier_control_panel_desktop[ 16 ] = {
	0x94, 0xe6, 0x99, 0x53, 0xe5, 0x6c, 0x6c, 0x4d, 0x8f, 0xce, 0x1d, 0x88, 0x70, 0xfd, 0xcb, 0xa0 };

uint8_t libfwsi_shell_folder_identifier_control_panel_vista[ 16 ] = {
	0x68, 0x06, 0xee, 0x26, 0x0a, 0xa0, 0xd7, 0x44, 0x93, 0x71, 0xbe, 0xb0, 0x64, 0xc9, 0x86, 0x83 };

/* Unknown found in Windows 8.1:
 * File Explorer.lnk
 */
uint8_t libfwsi_shell_folder_identifier_file_explorer[ 16 ] = {
	0xd8, 0x5f, 0x20, 0x52, 0xfb, 0x5d, 0x7d, 0x44, 0x80, 0x1a, 0xd0, 0xb5, 0x2f, 0x2e, 0x83, 0xe1 };

uint8_t libfwsi_shell_folder_identifier_games_explorer[ 16 ] = {
	0xdf, 0x8f, 0x22, 0xed, 0xa8, 0x9e ,0x70, 0x48, 0x83, 0xb1, 0x96, 0xb0, 0x2c, 0xfe, 0x0d, 0x52 };

uint8_t libfwsi_shell_folder_identifier_internet_explorer[ 16 ] = {
	0x80, 0x53, 0x1c, 0x87, 0xa0, 0x42, 0x69, 0x10, 0xa2, 0xea, 0x08, 0x00, 0x2b, 0x30, 0x30, 0x9d };

uint8_t libfwsi_shell_folder_identifier_help_and_support[ 16 ] = {
	0xf1, 0xa1, 0x59, 0x25, 0xd7, 0x21, 0xd4, 0x11, 0xbd, 0xaf, 0x00, 0xc0, 0x4f, 0x60, 0xb9, 0xf0 };

uint8_t libfwsi_shell_folder_identifier_my_computer[ 16 ] = {
	0xe0, 0x4f, 0xd0, 0x20, 0xea, 0x3a, 0x69, 0x10, 0xa2, 0xd8, 0x08, 0x00, 0x2b, 0x30, 0x30, 0x9d };

uint8_t libfwsi_shell_folder_identifier_my_documents[ 16 ] = {
	0xba, 0x8f, 0x0d, 0x45, 0x25, 0xad, 0xd0, 0x11, 0x98, 0xa8, 0x08, 0x00, 0x36, 0x1b, 0x11, 0x03 };

uint8_t libfwsi_shell_folder_identifier_my_network_places[ 16 ] = {
	0x60, 0x2c, 0x8d, 0x20, 0xea, 0x3a, 0x69, 0x10, 0xa2, 0xd7, 0x08, 0x00, 0x2b, 0x30, 0x30, 0x9d };

uint8_t libfwsi_shell_folder_identifier_network_and_sharing_center[ 16 ] = {
	0xc9, 0x8f, 0x90, 0x8e, 0xcc, 0xbe, 0xf6, 0x40, 0x91, 0x5b, 0xf4, 0xca, 0x0e, 0x70, 0xd0, 0x3d };

uint8_t libfwsi_shell_folder_identifier_network_connections[ 16 ] = {
	0xc7, 0xac, 0x07, 0x70, 0x02, 0x32, 0xd1, 0x11, 0xaa, 0xd2, 0x00, 0x80, 0x5f, 0xc1, 0x27, 0x0e };

uint8_t libfwsi_shell_folder_identifier_parential_controls[ 16 ] = {
	0x84, 0x8d, 0xae, 0x96, 0x50, 0xa2, 0x20, 0x45, 0x95, 0xa5, 0xa4, 0x7a, 0x7e, 0x3c, 0x54, 0x8b };

uint8_t libfwsi_shell_folder_identifier_printers_and_faxes[ 16 ] = {
	0x80, 0xa2, 0x27, 0x22, 0xea, 0x3a, 0x69, 0x10, 0xa2, 0xde, 0x08, 0x00, 0x2b, 0x30, 0x30, 0x9d };

uint8_t libfwsi_shell_folder_identifier_portable_devices[ 16 ] = {
	0x3c, 0x6d, 0x78, 0x35, 0x75, 0xb0, 0xb9, 0x49, 0x88, 0xdd, 0x02, 0x98, 0x76, 0xe1, 0x1c, 0x01 };

uint8_t libfwsi_shell_folder_identifier_programs_and_features[ 16 ] = {
	0x6a, 0xbe, 0x81, 0x7b, 0x2b, 0xce, 0x76, 0x46, 0xa2, 0x9e, 0xeb, 0x90, 0x7a, 0x51, 0x26, 0xc5 };

/* Unknown found in Vista:
 * Program Compatibility Wizard.lnk, Windows Catalog.lnk, Sample Music.lnk, Public.lnk
 */
uint8_t libfwsi_shell_folder_identifier_public[ 16 ] = {
	0x4d, 0xa5, 0x36, 0x43, 0x8b, 0x03, 0x85, 0x46, 0xab, 0x02, 0x99, 0xbb, 0x52, 0xd3, 0xfb, 0x8b };

/* Unknown found in Windows 2008:
 * RecentPlaces.lnk
 */
uint8_t libfwsi_shell_folder_identifier_recent_places[ 16 ] = {
	0x6d, 0x7a, 0x87, 0x22, 0xa1, 0x37, 0x1a, 0x46, 0x91, 0xb0, 0xdb, 0xda, 0x5a, 0xae, 0xbc, 0x99 };

uint8_t libfwsi_shell_folder_identifier_recycle_bin[ 16 ] = {
	0x40, 0xf0, 0x5f, 0x64, 0x81, 0x50, 0x1b, 0x10, 0x9f, 0x08, 0x00, 0xaa, 0x00, 0x2f, 0x95, 0x4e };

uint8_t libfwsi_shell_folder_identifier_run[ 16 ] = {
	0xf3, 0xa1, 0x59, 0x25, 0xd7, 0x21, 0xd4, 0x11, 0xbd, 0xaf, 0x00, 0xc0, 0x4f, 0x60, 0xb9, 0xf0 };

uint8_t libfwsi_shell_folder_identifier_search_folder[ 16 ] = {
	0x67, 0x1b, 0x73, 0x04, 0x33, 0xd9, 0x0a, 0x45, 0x90, 0xe6, 0x4a, 0xcd, 0x2e, 0x94, 0x08, 0xfe };

uint8_t libfwsi_shell_folder_identifier_search_home[ 16 ] = {
	0x2e, 0x81, 0x43, 0x93, 0x37, 0x1c, 0x49, 0x4a, 0xa1, 0x2e, 0x4b, 0x2d, 0x81, 0x0d, 0x95, 0x6b };

uint8_t libfwsi_shell_folder_identifier_shared_documents[ 16 ] = {
	0x47, 0x1a, 0x03, 0x59, 0x72, 0x3f, 0xa7, 0x44, 0x89, 0xc5, 0x55, 0x95, 0xfe, 0x6b, 0x30, 0xee };

uint8_t libfwsi_shell_folder_identifier_show_desktop[ 16 ] = {
	0x0d, 0xf9, 0x80, 0x30, 0xad, 0xd7, 0xd9, 0x11, 0xbd, 0x98, 0x00, 0x00, 0x94, 0x7b, 0x02, 0x57 };

uint8_t libfwsi_shell_folder_identifier_system[ 16 ] = {
	0xe4, 0xc0, 0x06, 0xbb, 0x93, 0xd2, 0x75, 0x4f, 0x8a, 0x90, 0xcb, 0x05, 0xb6, 0x47, 0x7e, 0xee };

uint8_t libfwsi_shell_folder_identifier_taskbar[ 16 ] = {
	0xf4, 0xb0, 0xd7, 0x05, 0x21, 0x21, 0xff, 0x4e, 0xbf, 0x6b, 0xed, 0x3f, 0x69, 0xb8, 0x94, 0xd9 };

uint8_t libfwsi_shell_folder_identifier_users_libraries[ 16 ] = {
	0x25, 0x48, 0x1e, 0x03, 0x94, 0x7b, 0xc3, 0x4d, 0xb1, 0x31, 0xe9, 0x46, 0xb4, 0x4c, 0x8d, 0xd5 };

uint8_t libfwsi_shell_folder_identifier_window_switcher[ 16 ] = {
	0x0e, 0xf9, 0x80, 0x30, 0xad, 0xd7, 0xd9, 0x11, 0xbd, 0x98, 0x00, 0x00, 0x94, 0x7b, 0x02, 0x57 };

uint8_t libfwsi_shell_folder_identifier_windows_update[ 16 ] = {
	0xdb, 0xf7, 0xee, 0x36, 0xad, 0x88, 0x81, 0x4e, 0xad, 0x49, 0x0e, 0x31, 0x3f, 0x0c, 0x35, 0xf8 };

uint8_t libfwsi_shell_folder_identifier_unknown[ 16 ] = {
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff };

/* The shell folder identifiers
 */
libfwsi_shell_folder_identifier_definition_t libfwsi_shell_folder_identifier_definitions[ ] = {
	{ libfwsi_shell_folder_identifier_applications,			"Applications" },
	{ libfwsi_shell_folder_identifier_briefcase,			"Briefcase" },
	{ libfwsi_shell_folder_identifier_computer_and_devices,		"Computer and Devices" },
	{ libfwsi_shell_folder_identifier_common_places,		"Common Places" },
	{ libfwsi_shell_folder_identifier_control_panel,		"Control Panel" },
	{ libfwsi_shell_folder_identifier_control_panel_desktop,	"Control Panel (Desktop and Start Menu)" },
	{ libfwsi_shell_folder_identifier_control_panel_vista,		"Control Panel" },
	{ libfwsi_shell_folder_identifier_file_explorer,		"File Explorer" },
	{ libfwsi_shell_folder_identifier_games_explorer,		"My Games (Games Explorer)" },
	{ libfwsi_shell_folder_identifier_help_and_support,		"Help and Support" },
	{ libfwsi_shell_folder_identifier_internet_explorer,		"Internet Explorer (Homepage)" },
	{ libfwsi_shell_folder_identifier_my_computer,			"My Computer" },
	{ libfwsi_shell_folder_identifier_my_documents,			"My Documents" },
	{ libfwsi_shell_folder_identifier_my_network_places,		"My Network Places" },
	{ libfwsi_shell_folder_identifier_network_and_sharing_center,	"Network and Sharing Center" },
	{ libfwsi_shell_folder_identifier_network_connections,		"Network Connections" },
	{ libfwsi_shell_folder_identifier_parential_controls,		"Parential Controls" },
	{ libfwsi_shell_folder_identifier_printers_and_faxes,		"Printers and Faxes" },
	{ libfwsi_shell_folder_identifier_portable_devices,		"Portable Devices" },
	{ libfwsi_shell_folder_identifier_programs_and_features,	"Programs and Features" },
	{ libfwsi_shell_folder_identifier_public,			"Public" },
	{ libfwsi_shell_folder_identifier_recent_places,		"Recent Places" },
	{ libfwsi_shell_folder_identifier_recycle_bin,			"Recycle Bin" },
	{ libfwsi_shell_folder_identifier_run,				"Run..." },
	{ libfwsi_shell_folder_identifier_shared_documents,		"Shared Documents Folder (Users Files)" },
	{ libfwsi_shell_folder_identifier_search_folder,		"Search Folder" },
	{ libfwsi_shell_folder_identifier_search_home,			"Search Home" },
	{ libfwsi_shell_folder_identifier_show_desktop,			"Show Desktop" },
	{ libfwsi_shell_folder_identifier_system,			"System" },
	{ libfwsi_shell_folder_identifier_taskbar,			"Taskbar" },
	{ libfwsi_shell_folder_identifier_users_libraries,		"Users Libraries" },
	{ libfwsi_shell_folder_identifier_window_switcher,		"Window Switcher" },
	{ libfwsi_shell_folder_identifier_windows_update,		"Windows Update" },

	{ libfwsi_shell_folder_identifier_unknown,			"Unknown" } };

/* Retrieves a string containing the name of the folder identifier
 */
const char *libfwsi_shell_folder_identifier_get_name(
             const uint8_t *shell_folder_identifier )
{
	int iterator = 0;

	if( shell_folder_identifier == NULL )
	{
		return( "Invalid shell folder identifier" );
	}
	while( memory_compare(
	        ( libfwsi_shell_folder_identifier_definitions[ iterator ] ).identifier,
	        libfwsi_shell_folder_identifier_unknown,
	        16 ) != 0 )
	{
		if( memory_compare(
		     ( libfwsi_shell_folder_identifier_definitions[ iterator ] ).identifier,
		     shell_folder_identifier,
		     16 ) == 0 )
		{
			break;
		}
		iterator++;
	}
	return(
	 ( libfwsi_shell_folder_identifier_definitions[ iterator ] ).name );
}

