/*
 * Copyright (c) 2020-2021 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 *
 * This software is available to you under a choice of one of two
 * licenses.  You may choose to be licensed under the terms of the GNU
 * General Public License (GPL) Version 2, available from the file
 * COPYING in the main directory of this source tree, or the
 * OpenIB.org BSD license below:
 *
 *     Redistribution and use in source and binary forms, with or
 *     without modification, are permitted provided that the following
 *     conditions are met:
 *
 *      - Redistributions of source code must retain the above
 *        copyright notice, this list of conditions and the following
 *        disclaimer.
 *
 *      - Redistributions in binary form must reproduce the above
 *        copyright notice, this list of conditions and the following
 *        disclaimer in the documentation and/or other materials
 *        provided with the distribution.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
 

/***
         *** This file was generated at "2021-09-30 13:17:36"
         *** by:
         ***    > /mswg/release/tools/a-me/last_stable/adabe_plugins/adb2c/adb2pack.py --input adb/prm/switch/ext/reg_access_switch.adb --file-prefix reg_access_switch --prefix reg_access_switch_ --no-adb-utils
         ***/
#ifndef REG_ACCESS_SWITCH_LAYOUTS_H
#define REG_ACCESS_SWITCH_LAYOUTS_H


#ifdef __cplusplus
extern "C" {
#endif

#include "adb_to_c_utils.h"
/* Description -   */
/* Size in bytes - 260 */
struct reg_access_switch_command_payload_ext {
/*---------------- DWORD[0] (Offset 0x0) ----------------*/
	/* Description - Command data. It may be a request or a response data. */
	/* 0x0.0 - 0x100.31 */
	u_int32_t data[65];
};

/* Description -   */
/* Size in bytes - 260 */
struct reg_access_switch_crspace_access_payload_ext {
/*---------------- DWORD[0] (Offset 0x0) ----------------*/
	/* Description - Starting address */
	/* 0x0.0 - 0x0.31 */
	u_int32_t address;
/*---------------- DWORD[1] (Offset 0x4) ----------------*/
	/* Description - CrSpace data */
	/* 0x4.0 - 0x100.31 */
	u_int32_t data[64];
};

/* Description -   */
/* Size in bytes - 32 */
struct reg_access_switch_device_info_ext {
/*---------------- DWORD[0] (Offset 0x0) ----------------*/
	/* Description - Device index
The first device should number 0 */
	/* 0x0.0 - 0x0.7 */
	u_int8_t device_index;
	/* Description - The flash ID that the device is using. */
	/* 0x0.16 - 0x0.23 */
	u_int8_t flash_id;
	/* Description - If set to '1', the fields related to the device are valid since the 
line-card is powered on and plugged and matching the INI ver
sion. 
Note: this bit is not an indication to validity of the fields related 
to the specific FW capabilities and version. */
	/* 0x0.28 - 0x0.28 */
	u_int8_t lc_pwr_on;
	/* Description - Thermal Shutdown. If set, the device was shut down due to 
thermal event. */
	/* 0x0.29 - 0x0.29 */
	u_int8_t thermal_sd;
	/* Description - If set to '1', the device is the flash owner. Otherwise, a shared 
flash is used by this device (another device is the flash owner). */
	/* 0x0.30 - 0x0.30 */
	u_int8_t flash_owner;
	/* Description - If set, the device uses a flash */
	/* 0x0.31 - 0x0.31 */
	u_int8_t uses_flash;
/*---------------- DWORD[1] (Offset 0x4) ----------------*/
	/* Description - 0: Amos Gearbox
1: Abir Gearbox */
	/* 0x4.0 - 0x4.15 */
	u_int16_t device_type;
	/* Description - Major FW version number. Valid only after the FW is burnt. Oth
erwise, the value should be '0'. */
	/* 0x4.16 - 0x4.31 */
	u_int16_t fw_major;
/*---------------- DWORD[2] (Offset 0x8) ----------------*/
	/* Description - Sub-minor FW version number. Valid only after the FW is 
burnt. Otherwise, the value should be '0'. */
	/* 0x8.0 - 0x8.15 */
	u_int16_t fw_sub_minor;
	/* Description - Minor FW version number. Valid only after the FW is burnt. 
Otherwise, the value should be '0'. */
	/* 0x8.16 - 0x8.31 */
	u_int16_t fw_minor;
/*---------------- DWORD[3] (Offset 0xc) ----------------*/
	/* Description - Maximum write size (in D-Words) that the device supports for 
its PRM commands. */
	/* 0xc.0 - 0xc.7 */
	u_int8_t max_cmd_write_size_supp;
	/* Description - Maximum read size (in D-Words) that the device supports for 
its PRM commands. */
	/* 0xc.8 - 0xc.15 */
	u_int8_t max_cmd_read_size_supp;
/*---------------- DWORD[4] (Offset 0x10) ----------------*/
	/* Description - Device type ASCII name. Up to 8 chars
 */
	/* 0x10.24 - 0x18.23 */
	u_int8_t device_type_name[8];
};

/* Description -   */
/* Size in bytes - 260 */
struct reg_access_switch_prm_register_payload_ext {
/*---------------- DWORD[0] (Offset 0x0) ----------------*/
	/* Description - Register ID */
	/* 0x0.0 - 0x0.15 */
	u_int16_t register_id;
	/* Description - 0: Query
1: Write */
	/* 0x0.22 - 0x0.23 */
	u_int8_t method;
	/* Description - Return code of the Downstream Device to the register 
that was sent.
0x0: OK - Operation was successfully executed
0x1: BUSY 
0x4: NOT_SUPP_REG - The Switch register requested 
is not supported on that device
0x7: BAD_PARAM - Incomplete or erroneous parameter 
set
0x70: INTERNAL_ERR - Internal error */
	/* 0x0.24 - 0x0.31 */
	u_int8_t status;
/*---------------- DWORD[1] (Offset 0x4) ----------------*/
	/* Description - Register data */
	/* 0x4.0 - 0x100.31 */
	u_int32_t register_data[64];
};

/* Description -   */
/* Size in bytes - 32 */
struct reg_access_switch_slot_info_ext {
/*---------------- DWORD[0] (Offset 0x0) ----------------*/
	/* Description - If set, the FW has completed the MDDC.device_enable com
mand */
	/* 0x0.27 - 0x0.27 */
	u_int8_t active;
	/* Description - If set, the LC is powered on, matching the INI version and a 
new FW version can be burnt (if necessary)
0: Not ready
1: Ready
2: Error
3: Reserved */
	/* 0x0.28 - 0x0.29 */
	u_int8_t lc_ready;
	/* Description - If set, Shift Register is valid (after being provisioned) and data 
can be sent from the switch ASIC to the line-card CPLD over 
Shift-Register. */
	/* 0x0.30 - 0x0.30 */
	u_int8_t sr_valid;
	/* Description - If set, the INI file is ready and the card is provisioned */
	/* 0x0.31 - 0x0.31 */
	u_int8_t provisioned;
/*---------------- DWORD[1] (Offset 0x4) ----------------*/
	/* Description - User-configured version number of the current INI file.
Valid only when active or lc_ready are '1'. */
	/* 0x4.0 - 0x4.15 */
	u_int16_t ini_file_version;
	/* Description - HW revision of the line-card as it appears in the current INI file.
Valid only when active or lc_ready are '1'. */
	/* 0x4.16 - 0x4.31 */
	u_int16_t hw_revision;
/*---------------- DWORD[2] (Offset 0x8) ----------------*/
	/* Description - Card type
0x00: Buffalo 4x400G
0x01: Buffalo 8x200G
0x02: Buffalo 16x100G */
	/* 0x8.0 - 0x8.7 */
	u_int8_t card_type;
};

/* Description -   */
/* Size in bytes - 32 */
struct reg_access_switch_slot_name_ext {
/*---------------- DWORD[0] (Offset 0x0) ----------------*/
	/* Description - Slot's ASCII name. Up to 20 chars
 */
	/* 0x0.24 - 0x14.23 */
	u_int8_t slot_ascii_name[20];
};

/* Description -   */
/* Size in bytes - 32 */
union reg_access_switch_mddq_data_auto_ext {
/*---------------- DWORD[0] (Offset 0x0) ----------------*/
	/* Description -  */
	/* 0x0.0 - 0x1c.31 */
	struct reg_access_switch_slot_info_ext slot_info_ext;
	/* Description -  */
	/* 0x0.0 - 0x1c.31 */
	struct reg_access_switch_device_info_ext device_info_ext;
	/* Description -  */
	/* 0x0.0 - 0x1c.31 */
	struct reg_access_switch_slot_name_ext slot_name_ext;
};

/* Description -   */
/* Size in bytes - 260 */
union reg_access_switch_mddt_reg_payload_auto_ext {
/*---------------- DWORD[0] (Offset 0x0) ----------------*/
	/* Description -  */
	/* 0x0.0 - 0x100.31 */
	struct reg_access_switch_prm_register_payload_ext prm_register_payload_ext;
	/* Description -  */
	/* 0x0.0 - 0x100.31 */
	struct reg_access_switch_command_payload_ext command_payload_ext;
	/* Description -  */
	/* 0x0.0 - 0x100.31 */
	struct reg_access_switch_crspace_access_payload_ext crspace_access_payload_ext;
};

/* Description -   */
/* Size in bytes - 24 */
struct reg_access_switch_icam_reg_ext {
/*---------------- DWORD[0] (Offset 0x0) ----------------*/
	/* Description - Access Register ID groups 
0: REG_IDs 0x3800 to 0x387F
1: REG_IDs 0x3880 to 0x38FF */
	/* 0x0.0 - 0x0.7 */
	u_int8_t access_reg_group;
/*---------------- DWORD[2] (Offset 0x8) ----------------*/
	/* Description - Supported infrastructure's access register bitmask. Based on 
access_reg_group index. 
When bit is set to '1', The register is supported in the device. 
For example, when access_reg_group == 1:
Bit 112: ICSR
Bit0 is at 08h.bit0
Bit 127 is at 14h.bit31 */
	/* 0x8.0 - 0x14.31 */
	u_int32_t infr_access_reg_cap_mask[4];
};

/* Description -   */
/* Size in bytes - 1040 */
struct reg_access_switch_icsr_ext {
/*---------------- DWORD[1] (Offset 0x4) ----------------*/
	/* Description - Base cr-space address for reading */
	/* 0x4.0 - 0x4.31 */
	u_int32_t base_address;
/*---------------- DWORD[2] (Offset 0x8) ----------------*/
	/* Description - Number of cr-space consecutive reads.
Each read is 4B (DWord)
Range 1..256 */
	/* 0x8.0 - 0x8.8 */
	u_int16_t num_reads;
/*---------------- DWORD[4] (Offset 0x10) ----------------*/
	/* Description - The cr-space read data */
	/* 0x10.0 - 0x40c.31 */
	u_int32_t data[256];
};

/* Description -   */
/* Size in bytes - 48 */
struct reg_access_switch_mddq_ext {
/*---------------- DWORD[0] (Offset 0x0) ----------------*/
	/* Description - Slot index
0: Reserved */
	/* 0x0.0 - 0x0.3 */
	u_int8_t slot_index;
	/* Description - 0: Reserved
1: slot_info
2: device_info - If there are no devices on the slot, data_valid 
will be '0'.
3: slot_name - Name of the slot (string) */
	/* 0x0.16 - 0x0.23 */
	u_int8_t query_type;
	/* Description - Slot info event enable
When set to '1', each change in the MDDQ.slot_info.provi
sioned / sr_valid / active / ready will generate an event. */
	/* 0x0.31 - 0x0.31 */
	u_int8_t sie;
/*---------------- DWORD[1] (Offset 0x4) ----------------*/
	/* Description - Request message sequential number. 
The first message number should be 0 */
	/* 0x4.0 - 0x4.7 */
	u_int8_t request_message_sequence;
	/* Description - Response message sequential number. 
For a specific request, the response message sequential num
ber is the following one. 
In addition, the last message should be 0. */
	/* 0x4.16 - 0x4.23 */
	u_int8_t response_message_sequence;
/*---------------- DWORD[2] (Offset 0x8) ----------------*/
	/* Description - Index related to the specific query_type. 
For query_type = 1,2,3 this field is neglected. */
	/* 0x8.0 - 0x8.7 */
	u_int8_t query_index;
	/* Description - If set, the data in the data field is valid and contain the informa
tion for the queried index. 
Note: This field is not reflecting any validity of the data while 
accessing a non-existing query entity. Querying with an out of 
range index will lead to BAD_PARAM status of the register. */
	/* 0x8.31 - 0x8.31 */
	u_int8_t data_valid;
/*---------------- DWORD[4] (Offset 0x10) ----------------*/
	/* Description - Properties of that field are based on query_type.
For slot information query_type data - see Table 530, 
"slot_info Register Layout," on page 710
For devices on slot query_type data - see Table 532, 
"device_info Register Layout," on page 711
For slot name query_type data - see Table 534, "slot_name 
Register Layout," on page 712 */
	/* 0x10.0 - 0x2c.31 */
	union reg_access_switch_mddq_data_auto_ext data;
};

/* Description -   */
/* Size in bytes - 272 */
struct reg_access_switch_mddt_reg_ext {
/*---------------- DWORD[0] (Offset 0x0) ----------------*/
	/* Description - Device index */
	/* 0x0.0 - 0x0.7 */
	u_int8_t device_index;
	/* Description - Slot index */
	/* 0x0.8 - 0x0.11 */
	u_int8_t slot_index;
/*---------------- DWORD[1] (Offset 0x4) ----------------*/
	/* Description - 0: PRM_Register
1: Command
2: CrSpace_access - [Internal] */
	/* 0x4.0 - 0x4.1 */
	u_int8_t type;
	/* Description - Write size in D-Words. */
	/* 0x4.16 - 0x4.23 */
	u_int8_t write_size;
	/* Description - Read size in D-Words. */
	/* 0x4.24 - 0x4.31 */
	u_int8_t read_size;
/*---------------- DWORD[3] (Offset 0xc) ----------------*/
	/* Description - Payload
For PRM Register type payload- See Table 522, "PRM 
Register Payload Layout," on page 707
For Command type payload - See Table 524, "Com
mand Payload Layout," on page 707
For CrSpace type payload - See Table 526, "CrSpace 
access Payload Layout," on page 708 */
	/* 0xc.0 - 0x10c.31 */
	union reg_access_switch_mddt_reg_payload_auto_ext payload;
};

/* Description -   */
/* Size in bytes - 1040 */
union reg_access_switch_reg_access_switch_Nodes {
/*---------------- DWORD[0] (Offset 0x0) ----------------*/
	/* Description -  */
	/* 0x0.0 - 0x10c.31 */
	struct reg_access_switch_mddt_reg_ext mddt_reg_ext;
	/* Description -  */
	/* 0x0.0 - 0x14.31 */
	struct reg_access_switch_icam_reg_ext icam_reg_ext;
	/* Description -  */
	/* 0x0.0 - 0x40c.31 */
	struct reg_access_switch_icsr_ext icsr_ext;
	/* Description -  */
	/* 0x0.0 - 0x2c.31 */
	struct reg_access_switch_mddq_ext mddq_ext;
};


/*================= PACK/UNPACK/PRINT FUNCTIONS ======================*/
/* command_payload_ext */
void reg_access_switch_command_payload_ext_pack(const struct reg_access_switch_command_payload_ext *ptr_struct, u_int8_t *ptr_buff);
void reg_access_switch_command_payload_ext_unpack(struct reg_access_switch_command_payload_ext *ptr_struct, const u_int8_t *ptr_buff);
void reg_access_switch_command_payload_ext_print(const struct reg_access_switch_command_payload_ext *ptr_struct, FILE *fd, int indent_level);
unsigned int reg_access_switch_command_payload_ext_size(void);
#define REG_ACCESS_SWITCH_COMMAND_PAYLOAD_EXT_SIZE    (0x104)
void reg_access_switch_command_payload_ext_dump(const struct reg_access_switch_command_payload_ext *ptr_struct, FILE *fd);
/* crspace_access_payload_ext */
void reg_access_switch_crspace_access_payload_ext_pack(const struct reg_access_switch_crspace_access_payload_ext *ptr_struct, u_int8_t *ptr_buff);
void reg_access_switch_crspace_access_payload_ext_unpack(struct reg_access_switch_crspace_access_payload_ext *ptr_struct, const u_int8_t *ptr_buff);
void reg_access_switch_crspace_access_payload_ext_print(const struct reg_access_switch_crspace_access_payload_ext *ptr_struct, FILE *fd, int indent_level);
unsigned int reg_access_switch_crspace_access_payload_ext_size(void);
#define REG_ACCESS_SWITCH_CRSPACE_ACCESS_PAYLOAD_EXT_SIZE    (0x104)
void reg_access_switch_crspace_access_payload_ext_dump(const struct reg_access_switch_crspace_access_payload_ext *ptr_struct, FILE *fd);
/* device_info_ext */
void reg_access_switch_device_info_ext_pack(const struct reg_access_switch_device_info_ext *ptr_struct, u_int8_t *ptr_buff);
void reg_access_switch_device_info_ext_unpack(struct reg_access_switch_device_info_ext *ptr_struct, const u_int8_t *ptr_buff);
void reg_access_switch_device_info_ext_print(const struct reg_access_switch_device_info_ext *ptr_struct, FILE *fd, int indent_level);
unsigned int reg_access_switch_device_info_ext_size(void);
#define REG_ACCESS_SWITCH_DEVICE_INFO_EXT_SIZE    (0x20)
void reg_access_switch_device_info_ext_dump(const struct reg_access_switch_device_info_ext *ptr_struct, FILE *fd);
/* prm_register_payload_ext */
void reg_access_switch_prm_register_payload_ext_pack(const struct reg_access_switch_prm_register_payload_ext *ptr_struct, u_int8_t *ptr_buff);
void reg_access_switch_prm_register_payload_ext_unpack(struct reg_access_switch_prm_register_payload_ext *ptr_struct, const u_int8_t *ptr_buff);
void reg_access_switch_prm_register_payload_ext_print(const struct reg_access_switch_prm_register_payload_ext *ptr_struct, FILE *fd, int indent_level);
unsigned int reg_access_switch_prm_register_payload_ext_size(void);
#define REG_ACCESS_SWITCH_PRM_REGISTER_PAYLOAD_EXT_SIZE    (0x104)
void reg_access_switch_prm_register_payload_ext_dump(const struct reg_access_switch_prm_register_payload_ext *ptr_struct, FILE *fd);
/* slot_info_ext */
void reg_access_switch_slot_info_ext_pack(const struct reg_access_switch_slot_info_ext *ptr_struct, u_int8_t *ptr_buff);
void reg_access_switch_slot_info_ext_unpack(struct reg_access_switch_slot_info_ext *ptr_struct, const u_int8_t *ptr_buff);
void reg_access_switch_slot_info_ext_print(const struct reg_access_switch_slot_info_ext *ptr_struct, FILE *fd, int indent_level);
unsigned int reg_access_switch_slot_info_ext_size(void);
#define REG_ACCESS_SWITCH_SLOT_INFO_EXT_SIZE    (0x20)
void reg_access_switch_slot_info_ext_dump(const struct reg_access_switch_slot_info_ext *ptr_struct, FILE *fd);
/* slot_name_ext */
void reg_access_switch_slot_name_ext_pack(const struct reg_access_switch_slot_name_ext *ptr_struct, u_int8_t *ptr_buff);
void reg_access_switch_slot_name_ext_unpack(struct reg_access_switch_slot_name_ext *ptr_struct, const u_int8_t *ptr_buff);
void reg_access_switch_slot_name_ext_print(const struct reg_access_switch_slot_name_ext *ptr_struct, FILE *fd, int indent_level);
unsigned int reg_access_switch_slot_name_ext_size(void);
#define REG_ACCESS_SWITCH_SLOT_NAME_EXT_SIZE    (0x20)
void reg_access_switch_slot_name_ext_dump(const struct reg_access_switch_slot_name_ext *ptr_struct, FILE *fd);
/* mddq_data_auto_ext */
void reg_access_switch_mddq_data_auto_ext_pack(const union reg_access_switch_mddq_data_auto_ext *ptr_struct, u_int8_t *ptr_buff);
void reg_access_switch_mddq_data_auto_ext_unpack(union reg_access_switch_mddq_data_auto_ext *ptr_struct, const u_int8_t *ptr_buff);
void reg_access_switch_mddq_data_auto_ext_print(const union reg_access_switch_mddq_data_auto_ext *ptr_struct, FILE *fd, int indent_level);
unsigned int reg_access_switch_mddq_data_auto_ext_size(void);
#define REG_ACCESS_SWITCH_MDDQ_DATA_AUTO_EXT_SIZE    (0x20)
void reg_access_switch_mddq_data_auto_ext_dump(const union reg_access_switch_mddq_data_auto_ext *ptr_struct, FILE *fd);
/* mddt_reg_payload_auto_ext */
void reg_access_switch_mddt_reg_payload_auto_ext_pack(const union reg_access_switch_mddt_reg_payload_auto_ext *ptr_struct, u_int8_t *ptr_buff);
void reg_access_switch_mddt_reg_payload_auto_ext_unpack(union reg_access_switch_mddt_reg_payload_auto_ext *ptr_struct, const u_int8_t *ptr_buff);
void reg_access_switch_mddt_reg_payload_auto_ext_print(const union reg_access_switch_mddt_reg_payload_auto_ext *ptr_struct, FILE *fd, int indent_level);
unsigned int reg_access_switch_mddt_reg_payload_auto_ext_size(void);
#define REG_ACCESS_SWITCH_MDDT_REG_PAYLOAD_AUTO_EXT_SIZE    (0x104)
void reg_access_switch_mddt_reg_payload_auto_ext_dump(const union reg_access_switch_mddt_reg_payload_auto_ext *ptr_struct, FILE *fd);
/* icam_reg_ext */
void reg_access_switch_icam_reg_ext_pack(const struct reg_access_switch_icam_reg_ext *ptr_struct, u_int8_t *ptr_buff);
void reg_access_switch_icam_reg_ext_unpack(struct reg_access_switch_icam_reg_ext *ptr_struct, const u_int8_t *ptr_buff);
void reg_access_switch_icam_reg_ext_print(const struct reg_access_switch_icam_reg_ext *ptr_struct, FILE *fd, int indent_level);
unsigned int reg_access_switch_icam_reg_ext_size(void);
#define REG_ACCESS_SWITCH_ICAM_REG_EXT_SIZE    (0x18)
void reg_access_switch_icam_reg_ext_dump(const struct reg_access_switch_icam_reg_ext *ptr_struct, FILE *fd);
/* icsr_ext */
void reg_access_switch_icsr_ext_pack(const struct reg_access_switch_icsr_ext *ptr_struct, u_int8_t *ptr_buff);
void reg_access_switch_icsr_ext_unpack(struct reg_access_switch_icsr_ext *ptr_struct, const u_int8_t *ptr_buff);
void reg_access_switch_icsr_ext_print(const struct reg_access_switch_icsr_ext *ptr_struct, FILE *fd, int indent_level);
unsigned int reg_access_switch_icsr_ext_size(void);
#define REG_ACCESS_SWITCH_ICSR_EXT_SIZE    (0x410)
void reg_access_switch_icsr_ext_dump(const struct reg_access_switch_icsr_ext *ptr_struct, FILE *fd);
/* mddq_ext */
void reg_access_switch_mddq_ext_pack(const struct reg_access_switch_mddq_ext *ptr_struct, u_int8_t *ptr_buff);
void reg_access_switch_mddq_ext_unpack(struct reg_access_switch_mddq_ext *ptr_struct, const u_int8_t *ptr_buff);
void reg_access_switch_mddq_ext_print(const struct reg_access_switch_mddq_ext *ptr_struct, FILE *fd, int indent_level);
unsigned int reg_access_switch_mddq_ext_size(void);
#define REG_ACCESS_SWITCH_MDDQ_EXT_SIZE    (0x30)
void reg_access_switch_mddq_ext_dump(const struct reg_access_switch_mddq_ext *ptr_struct, FILE *fd);
/* mddt_reg_ext */
void reg_access_switch_mddt_reg_ext_pack(const struct reg_access_switch_mddt_reg_ext *ptr_struct, u_int8_t *ptr_buff);
void reg_access_switch_mddt_reg_ext_unpack(struct reg_access_switch_mddt_reg_ext *ptr_struct, const u_int8_t *ptr_buff);
void reg_access_switch_mddt_reg_ext_print(const struct reg_access_switch_mddt_reg_ext *ptr_struct, FILE *fd, int indent_level);
unsigned int reg_access_switch_mddt_reg_ext_size(void);
#define REG_ACCESS_SWITCH_MDDT_REG_EXT_SIZE    (0x110)
void reg_access_switch_mddt_reg_ext_dump(const struct reg_access_switch_mddt_reg_ext *ptr_struct, FILE *fd);
/* reg_access_switch_Nodes */
void reg_access_switch_reg_access_switch_Nodes_pack(const union reg_access_switch_reg_access_switch_Nodes *ptr_struct, u_int8_t *ptr_buff);
void reg_access_switch_reg_access_switch_Nodes_unpack(union reg_access_switch_reg_access_switch_Nodes *ptr_struct, const u_int8_t *ptr_buff);
void reg_access_switch_reg_access_switch_Nodes_print(const union reg_access_switch_reg_access_switch_Nodes *ptr_struct, FILE *fd, int indent_level);
unsigned int reg_access_switch_reg_access_switch_Nodes_size(void);
#define REG_ACCESS_SWITCH_REG_ACCESS_SWITCH_NODES_SIZE    (0x410)
void reg_access_switch_reg_access_switch_Nodes_dump(const union reg_access_switch_reg_access_switch_Nodes *ptr_struct, FILE *fd);


#ifdef __cplusplus
}
#endif

#endif // REG_ACCESS_SWITCH_LAYOUTS_H
