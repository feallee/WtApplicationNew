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

/// @brief 应用程序命令控制块类型。
typedef struct
{
     /// @brief 应用程序命令动作。
     void (*Action)(WtEntry_SourceType sender, void *parameter);
     /// @brief 应用程序命令名称。
     char *Name;
} WtCommand_Type;

/// @brief 注册应用程序命令(分组1)。
/// @param action 应用程序命令动作。
/// @param name 应用程序命令名称。
#define WT_COMMAND_REGISTER1(action, name) const static WtCommand_Type mWtCommand_##action __attribute__((used, __section__(".WtCommand.10"))) = {action, name}

/// @brief 注册应用程序命令(分组2)。
/// @param action 应用程序命令动作。
/// @param name 应用程序命令名称。
#define WT_COMMAND_REGISTER2(action, name) const static WtCommand_Type mWtCommand_##action __attribute__((used, __section__(".WtCommand.20"))) = {action, name}

/// @brief 注册应用程序命令(分组3)。
/// @param action 应用程序命令动作。
/// @param name 应用程序命令名称。
#define WT_COMMAND_REGISTER3(action, name) const static WtCommand_Type mWtCommand_##action __attribute__((used, __section__(".WtCommand.30"))) = {action, name}

/// @brief 注册应用程序命令(分组4)。
/// @param action 应用程序命令动作。
/// @param name 应用程序命令名称。
#define WT_COMMAND_REGISTER4(action, name) const static WtCommand_Type mWtCommand_##action __attribute__((used, __section__(".WtCommand.40"))) = {action, name}

/// @brief 注册应用程序命令(分组5)。
/// @param action 应用程序命令动作。
/// @param name 应用程序命令名称。
#define WT_COMMAND_REGISTER5(action, name) const static WtCommand_Type mWtCommand_##action __attribute__((used, __section__(".WtCommand.50"))) = {action, name}

/// @brief 注册应用程序命令(分组6)。
/// @param action 应用程序命令动作。
/// @param name 应用程序命令名称。
#define WT_COMMAND_REGISTER6(action, name) const static WtCommand_Type mWtCommand_##action __attribute__((used, __section__(".WtCommand.60"))) = {action, name}

/// @brief 注册应用程序命令(分组7)。
/// @param action 应用程序命令动作。
/// @param name 应用程序命令名称。
#define WT_COMMAND_REGISTER7(action, name) const static WtCommand_Type mWtCommand_##action __attribute__((used, __section__(".WtCommand.70"))) = {action, name}

/// @brief 注册应用程序命令(分组8)。
/// @param action 应用程序命令动作。
/// @param name 应用程序命令名称。
#define WT_COMMAND_REGISTER8(action, name) const static WtCommand_Type mWtCommand_##action __attribute__((used, __section__(".WtCommand.80"))) = {action, name}

/// @brief 执行应用程序命令(分组1)。
/// @param name 命令名称。
/// @param sender 命令源。
/// @param parameter  命令参数。
/// @return 返回执行应用程序命令的数量。没有匹配命令名称返回0。
int WtCommand_Execute1(const char *name, WtEntry_SourceType sender, void *parameter);

/// @brief 执行应用程序命令(分组2)。
/// @param name 命令名称。
/// @param sender 命令源。
/// @param parameter  命令参数。
/// @return 返回执行应用程序命令的数量。没有匹配命令名称返回0。
int WtCommand_Execute2(const char *name, WtEntry_SourceType sender, void *parameter);

/// @brief 执行应用程序命令(分组3)。
/// @param name 命令名称。
/// @param sender 命令源。
/// @param parameter  命令参数。
/// @return 返回执行应用程序命令的数量。没有匹配命令名称返回0。
int WtCommand_Execute3(const char *name, WtEntry_SourceType sender, void *parameter);

/// @brief 执行应用程序命令(分组4)。
/// @param name 命令名称。
/// @param sender 命令源。
/// @param parameter  命令参数。
/// @return 返回执行应用程序命令的数量。没有匹配命令名称返回0。
int WtCommand_Execute4(const char *name, WtEntry_SourceType sender, void *parameter);

/// @brief 执行应用程序命令(分组5)。
/// @param name 命令名称。
/// @param sender 命令源。
/// @param parameter  命令参数。
/// @return 返回执行应用程序命令的数量。没有匹配命令名称返回0。
int WtCommand_Execute5(const char *name, WtEntry_SourceType sender, void *parameter);

/// @brief 执行应用程序命令(分组6)。
/// @param name 命令名称。
/// @param sender 命令源。
/// @param parameter  命令参数。
/// @return 返回执行应用程序命令的数量。没有匹配命令名称返回0。
int WtCommand_Execute6(const char *name, WtEntry_SourceType sender, void *parameter);

/// @brief 执行应用程序命令(分组7)。
/// @param name 命令名称。
/// @param sender 命令源。
/// @param parameter  命令参数。
/// @return 返回执行应用程序命令的数量。没有匹配命令名称返回0。
int WtCommand_Execute7(const char *name, WtEntry_SourceType sender, void *parameter);

/// @brief 执行应用程序命令(分组8)。
/// @param name 命令名称。
/// @param sender 命令源。
/// @param parameter  命令参数。
/// @return 返回执行应用程序命令的数量。没有匹配命令名称返回0。
int WtCommand_Execute8(const char *name, WtEntry_SourceType sender, void *parameter);

#endif
