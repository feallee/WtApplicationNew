/**
 * @brief 应用程序命令管理模块。
 * @copyright Copyright(C) 2023 We As Top team. All rights reserved.
 * @section 修订日志
 * 日期         作者                内容
 * -------------------------------------------------------------------------
 * 2024/4/26   feallee@hotmail.com 初版。
 */

#ifndef __WT_COMMAND_H_
#define __WT_COMMAND_H_

/// @brief 应用程序命令源类型。
typedef enum
{
     /// @brief 命令来自控制台。
     WT_COMMAND_SOURCE_CON,
     /// @brief 命令来自网络。
     WT_COMMAND_SOURCE_GSM,
     /// @brief 命令来自蓝牙。
     WT_COMMAND_SOURCE_BT,
     /// @brief 命令来自WIFI。
     WT_COMMAND_SOURCE_WIFI,
     /// @brief 命令来自NFC。
     WT_COMMAND_SOURCE_NFC,
     /// @brief 命令来自键盘。
     WT_COMMAND_SOURCE_KB,
     /// TODO 在这里定义其它命令源。前面的命令源也可以删除。
} WtEntry_SourceType;

/// @brief 应用程序命令分组类型。
typedef enum
{
     /// @brief 应用程序命令分组 1。
     WT_COMMAND_GROUP_1 = 1,
     /// @brief 应用程序命令分组 2。
     WT_COMMAND_GROUP_2,
     /// @brief 应用程序命令分组 3。
     WT_COMMAND_GROUP_3,
     /// @brief 应用程序命令分组 4。
     WT_COMMAND_GROUP_4,
     /// @brief 应用程序命令分组 5。
     WT_COMMAND_GROUP_5,
     /// @brief 应用程序命令分组 6。
     WT_COMMAND_GROUP_6,
     /// @brief 应用程序命令分组 7。
     WT_COMMAND_GROUP_7,
     /// @brief 应用程序命令分组 8。
     WT_COMMAND_GROUP_8,
} WtCommand_GroupType;

/// @brief 应用程序命令动作类型。
/// @brief 应用程序命令控制块类型。
typedef struct
{
     /// @brief 应用程序命令动作。
     void (*Action)(WtEntry_SourceType sender, void *parameter);
     /// @brief 应用程序命令名称。
     char *Name;
} WtCommand_Type;

/// @brief 注册应用程序命令(分组 1)。
/// @param action 应用程序命令动作。
/// @param name 应用程序命令名称。
#define WT_COMMAND_REGISTER1(name, action) const static WtCommand_Type mWtCommand_##action __attribute__((used, __section__(".WtCommand.11"))) = {action, name}

/// @brief 注册应用程序命令(分组 2)。
/// @param action 应用程序命令动作。
/// @param name 应用程序命令名称。
#define WT_COMMAND_REGISTER2(name, action) const static WtCommand_Type mWtCommand_##action __attribute__((used, __section__(".WtCommand.21"))) = {action, name}

/// @brief 注册应用程序命令(分组 3)。
/// @param action 应用程序命令动作。
/// @param name 应用程序命令名称。
#define WT_COMMAND_REGISTER3(name, action) const static WtCommand_Type mWtCommand_##action __attribute__((used, __section__(".WtCommand.31"))) = {action, name}

/// @brief 注册应用程序命令(分组 4)。
/// @param action 应用程序命令动作。
/// @param name 应用程序命令名称。
#define WT_COMMAND_REGISTER4(name, action) const static WtCommand_Type mWtCommand_##action __attribute__((used, __section__(".WtCommand.41"))) = {action, name}

/// @brief 注册应用程序命令(分组 5)。
/// @param action 应用程序命令动作。
/// @param name 应用程序命令名称。
#define WT_COMMAND_REGISTER5(name, action) const static WtCommand_Type mWtCommand_##action __attribute__((used, __section__(".WtCommand.51"))) = {action, name}

/// @brief 注册应用程序命令(分组 6)。
/// @param action 应用程序命令动作。
/// @param name 应用程序命令名称。
#define WT_COMMAND_REGISTER6(name, action) const static WtCommand_Type mWtCommand_##action __attribute__((used, __section__(".WtCommand.61"))) = {action, name}

/// @brief 注册应用程序命令(分组 7)。
/// @param action 应用程序命令动作。
/// @param name 应用程序命令名称。
#define WT_COMMAND_REGISTER7(name, action) const static WtCommand_Type mWtCommand_##action __attribute__((used, __section__(".WtCommand.71"))) = {action, name}

/// @brief 注册应用程序命令(分组 8)。
/// @param action 应用程序命令动作。
/// @param name 应用程序命令名称。
#define WT_COMMAND_REGISTER8(name, action) const static WtCommand_Type mWtCommand_##action __attribute__((used, __section__(".WtCommand.81"))) = {action, name}

/// @brief 执行指定命令分组和命令名称的应用程序命令。如果命令名称相同，则执行全部匹配的命令。
/// @param group 命令分组。
/// @param name 命令名称。
/// @param sender 命令源。
/// @param parameter  命令参数。
/// @return 返回执行应用程序命令的数量。没有匹配命令名称返回 0。
extern int WtCommand_Execute(WtCommand_GroupType group, const char *name, WtEntry_SourceType sender, void *parameter);

#endif
