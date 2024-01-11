/* 
 esp100.cpp - esp3d command class

 copyrigtht (c) 2024 by Yang_Han. All rights reserved.

*/

#include "../../include/esp3d_config.h"
#if defined(WIFI_FEATURE)
#include "../../modules/authentication/authentication_service.h"
#include "../../modules/wifi/wificonfig.h"
#include "../esp3d_commands.h"
#include "../esp3d_settings.h"
// TODO 这里还没有搞清楚怎么写，先搞清楚有哪些可以include的头文件，然后再来写这个文件
// 姑且可以只加入一个，然后自己去做参数的判断。
#define COMMAND_ID 512
// STA SSID