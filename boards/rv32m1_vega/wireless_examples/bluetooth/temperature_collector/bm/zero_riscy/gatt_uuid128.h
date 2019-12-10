/* 
* Declare all custom 128-bit UUIDs here using the format:
*
*  UUID128(name, bytes)
*
* where: 
*	-name : an unique tag for the newly defined UUID;
		will be used to reference this UUID when defining
		services and characteristics in <<gatt_db.h>>
*	-bytes: 16 bytes representing the 128-bit value
*
* One definition per line. No semicolon required after each definition.
*
* example:
*  UUID128(uuid_service_robot_characteristics, 0x12, 0x34, 0x56, 0x78, 0x90, 0xAB, 0xCD, 0xEF, 0x12, 0x34, 0x56, 0x78, 0x90, 0xAB, 0xCD, 0xEF)
*  UUID128(uuid_char_robot_direction, 0x12, 0x34, 0x50, 0x00, 0x90, 0xAB, 0xCD, 0xEF, 0x12, 0x34, 0x56, 0x78, 0x90, 0xAB, 0xCD, 0xEF)
*	
*/
/* Services */

/* Temperature */ 
UUID128(uuid_service_temperature, 0xE0, 0x1C, 0x4B, 0x5E, 0x1E, 0xEB, 0xA1, 0x5C, 0xEE, 0xF4, 0x5E, 0xBA, 0x00, 0x02, 0xFF, 0x01)
