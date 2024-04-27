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

/// @brief Ӧ�ó�������������͡�
typedef enum
{
     /// @brief Ӧ�ó���������� 1��
     WT_COMMAND_GROUP_1 = 1,
     /// @brief Ӧ�ó���������� 2��
     WT_COMMAND_GROUP_2,
     /// @brief Ӧ�ó���������� 3��
     WT_COMMAND_GROUP_3,
     /// @brief Ӧ�ó���������� 4��
     WT_COMMAND_GROUP_4,
     /// @brief Ӧ�ó���������� 5��
     WT_COMMAND_GROUP_5,
     /// @brief Ӧ�ó���������� 6��
     WT_COMMAND_GROUP_6,
     /// @brief Ӧ�ó���������� 7��
     WT_COMMAND_GROUP_7,
     /// @brief Ӧ�ó���������� 8��
     WT_COMMAND_GROUP_8,
} WtCommand_GroupType;

/// @brief Ӧ�ó�����������͡�
/// @brief Ӧ�ó���������ƿ����͡�
typedef struct
{
     /// @brief Ӧ�ó����������
     void (*Action)(WtEntry_SourceType sender, void *parameter);
     /// @brief Ӧ�ó����������ơ�
     char *Name;
} WtCommand_Type;

/// @brief ע��Ӧ�ó�������(���� 1)��
/// @param action Ӧ�ó����������
/// @param name Ӧ�ó����������ơ�
#define WT_COMMAND_REGISTER1(name, action) const static WtCommand_Type mWtCommand_##action __attribute__((used, __section__(".WtCommand.11"))) = {action, name}

/// @brief ע��Ӧ�ó�������(���� 2)��
/// @param action Ӧ�ó����������
/// @param name Ӧ�ó����������ơ�
#define WT_COMMAND_REGISTER2(name, action) const static WtCommand_Type mWtCommand_##action __attribute__((used, __section__(".WtCommand.21"))) = {action, name}

/// @brief ע��Ӧ�ó�������(���� 3)��
/// @param action Ӧ�ó����������
/// @param name Ӧ�ó����������ơ�
#define WT_COMMAND_REGISTER3(name, action) const static WtCommand_Type mWtCommand_##action __attribute__((used, __section__(".WtCommand.31"))) = {action, name}

/// @brief ע��Ӧ�ó�������(���� 4)��
/// @param action Ӧ�ó����������
/// @param name Ӧ�ó����������ơ�
#define WT_COMMAND_REGISTER4(name, action) const static WtCommand_Type mWtCommand_##action __attribute__((used, __section__(".WtCommand.41"))) = {action, name}

/// @brief ע��Ӧ�ó�������(���� 5)��
/// @param action Ӧ�ó����������
/// @param name Ӧ�ó����������ơ�
#define WT_COMMAND_REGISTER5(name, action) const static WtCommand_Type mWtCommand_##action __attribute__((used, __section__(".WtCommand.51"))) = {action, name}

/// @brief ע��Ӧ�ó�������(���� 6)��
/// @param action Ӧ�ó����������
/// @param name Ӧ�ó����������ơ�
#define WT_COMMAND_REGISTER6(name, action) const static WtCommand_Type mWtCommand_##action __attribute__((used, __section__(".WtCommand.61"))) = {action, name}

/// @brief ע��Ӧ�ó�������(���� 7)��
/// @param action Ӧ�ó����������
/// @param name Ӧ�ó����������ơ�
#define WT_COMMAND_REGISTER7(name, action) const static WtCommand_Type mWtCommand_##action __attribute__((used, __section__(".WtCommand.71"))) = {action, name}

/// @brief ע��Ӧ�ó�������(���� 8)��
/// @param action Ӧ�ó����������
/// @param name Ӧ�ó����������ơ�
#define WT_COMMAND_REGISTER8(name, action) const static WtCommand_Type mWtCommand_##action __attribute__((used, __section__(".WtCommand.81"))) = {action, name}

/// @brief ִ��ָ�����������������Ƶ�Ӧ�ó�������������������ͬ����ִ��ȫ��ƥ������
/// @param group ������顣
/// @param name �������ơ�
/// @param sender ����Դ��
/// @param parameter  ���������
/// @return ����ִ��Ӧ�ó��������������û��ƥ���������Ʒ��� 0��
extern int WtCommand_Execute(WtCommand_GroupType group, const char *name, WtEntry_SourceType sender, void *parameter);

#endif
