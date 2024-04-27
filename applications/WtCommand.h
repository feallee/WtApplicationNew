/**
 * @brief Ӧ�ó����������ģ�顣
 * @copyright Copyright(C) 2023 We As Top team. All rights reserved.
 * @section �޶���־
 * ����         ����                ����
 * -------------------------------------------------------------------------
 * 2024/4/26   feallee@hotmail.com ���档
 */

#ifndef __WT_COMMAND_H_
#define __WT_COMMAND_H_

/// @brief Ӧ�ó�������Դ���͡�
typedef enum
{
     /// @brief �������Կ���̨��
     WT_COMMAND_SOURCE_CON,
     /// @brief �����������硣
     WT_COMMAND_SOURCE_GSM,
     /// @brief ��������������
     WT_COMMAND_SOURCE_BT,
     /// @brief ��������WIFI��
     WT_COMMAND_SOURCE_WIFI,
     /// @brief ��������NFC��
     WT_COMMAND_SOURCE_NFC,
     /// @brief �������Լ��̡�
     WT_COMMAND_SOURCE_KB,
     /// TODO �����ﶨ����������Դ��ǰ�������ԴҲ����ɾ����
} WtEntry_SourceType;

/// @brief Ӧ�ó���������ƿ����͡�
typedef struct
{
     /// @brief Ӧ�ó����������
     void (*Action)(WtEntry_SourceType sender, void *parameter);
     /// @brief Ӧ�ó����������ơ�
     char *Name;
} WtCommand_Type;

/// @brief ע��Ӧ�ó�������(����1)��
/// @param action Ӧ�ó����������
/// @param name Ӧ�ó����������ơ�
#define WT_COMMAND_REGISTER1(action, name) const static WtCommand_Type mWtCommand_##action __attribute__((used, __section__(".WtCommand.10"))) = {action, name}

/// @brief ע��Ӧ�ó�������(����2)��
/// @param action Ӧ�ó����������
/// @param name Ӧ�ó����������ơ�
#define WT_COMMAND_REGISTER2(action, name) const static WtCommand_Type mWtCommand_##action __attribute__((used, __section__(".WtCommand.20"))) = {action, name}

/// @brief ע��Ӧ�ó�������(����3)��
/// @param action Ӧ�ó����������
/// @param name Ӧ�ó����������ơ�
#define WT_COMMAND_REGISTER3(action, name) const static WtCommand_Type mWtCommand_##action __attribute__((used, __section__(".WtCommand.30"))) = {action, name}

/// @brief ע��Ӧ�ó�������(����4)��
/// @param action Ӧ�ó����������
/// @param name Ӧ�ó����������ơ�
#define WT_COMMAND_REGISTER4(action, name) const static WtCommand_Type mWtCommand_##action __attribute__((used, __section__(".WtCommand.40"))) = {action, name}

/// @brief ע��Ӧ�ó�������(����5)��
/// @param action Ӧ�ó����������
/// @param name Ӧ�ó����������ơ�
#define WT_COMMAND_REGISTER5(action, name) const static WtCommand_Type mWtCommand_##action __attribute__((used, __section__(".WtCommand.50"))) = {action, name}

/// @brief ע��Ӧ�ó�������(����6)��
/// @param action Ӧ�ó����������
/// @param name Ӧ�ó����������ơ�
#define WT_COMMAND_REGISTER6(action, name) const static WtCommand_Type mWtCommand_##action __attribute__((used, __section__(".WtCommand.60"))) = {action, name}

/// @brief ע��Ӧ�ó�������(����7)��
/// @param action Ӧ�ó����������
/// @param name Ӧ�ó����������ơ�
#define WT_COMMAND_REGISTER7(action, name) const static WtCommand_Type mWtCommand_##action __attribute__((used, __section__(".WtCommand.70"))) = {action, name}

/// @brief ע��Ӧ�ó�������(����8)��
/// @param action Ӧ�ó����������
/// @param name Ӧ�ó����������ơ�
#define WT_COMMAND_REGISTER8(action, name) const static WtCommand_Type mWtCommand_##action __attribute__((used, __section__(".WtCommand.80"))) = {action, name}

/// @brief ִ��Ӧ�ó�������(����1)��
/// @param name �������ơ�
/// @param sender ����Դ��
/// @param parameter  ���������
/// @return ����ִ��Ӧ�ó��������������û��ƥ���������Ʒ���0��
int WtCommand_Execute1(const char *name, WtEntry_SourceType sender, void *parameter);

/// @brief ִ��Ӧ�ó�������(����2)��
/// @param name �������ơ�
/// @param sender ����Դ��
/// @param parameter  ���������
/// @return ����ִ��Ӧ�ó��������������û��ƥ���������Ʒ���0��
int WtCommand_Execute2(const char *name, WtEntry_SourceType sender, void *parameter);

/// @brief ִ��Ӧ�ó�������(����3)��
/// @param name �������ơ�
/// @param sender ����Դ��
/// @param parameter  ���������
/// @return ����ִ��Ӧ�ó��������������û��ƥ���������Ʒ���0��
int WtCommand_Execute3(const char *name, WtEntry_SourceType sender, void *parameter);

/// @brief ִ��Ӧ�ó�������(����4)��
/// @param name �������ơ�
/// @param sender ����Դ��
/// @param parameter  ���������
/// @return ����ִ��Ӧ�ó��������������û��ƥ���������Ʒ���0��
int WtCommand_Execute4(const char *name, WtEntry_SourceType sender, void *parameter);

/// @brief ִ��Ӧ�ó�������(����5)��
/// @param name �������ơ�
/// @param sender ����Դ��
/// @param parameter  ���������
/// @return ����ִ��Ӧ�ó��������������û��ƥ���������Ʒ���0��
int WtCommand_Execute5(const char *name, WtEntry_SourceType sender, void *parameter);

/// @brief ִ��Ӧ�ó�������(����6)��
/// @param name �������ơ�
/// @param sender ����Դ��
/// @param parameter  ���������
/// @return ����ִ��Ӧ�ó��������������û��ƥ���������Ʒ���0��
int WtCommand_Execute6(const char *name, WtEntry_SourceType sender, void *parameter);

/// @brief ִ��Ӧ�ó�������(����7)��
/// @param name �������ơ�
/// @param sender ����Դ��
/// @param parameter  ���������
/// @return ����ִ��Ӧ�ó��������������û��ƥ���������Ʒ���0��
int WtCommand_Execute7(const char *name, WtEntry_SourceType sender, void *parameter);

/// @brief ִ��Ӧ�ó�������(����8)��
/// @param name �������ơ�
/// @param sender ����Դ��
/// @param parameter  ���������
/// @return ����ִ��Ӧ�ó��������������û��ƥ���������Ʒ���0��
int WtCommand_Execute8(const char *name, WtEntry_SourceType sender, void *parameter);

#endif
