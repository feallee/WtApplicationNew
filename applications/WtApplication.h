/**
 * @brief �ṩ�ӿ��Թ���Ӧ�ó�����������Ӧ�ó��򡢴���ί�ж����͹�������ȹ��ܡ�
 * @copyright Copyright(C) 2023 We as Top team. All rights reserved.
 * @section �޶���־
 * ����         ����                ����
 * -------------------------------------------------------------------------
 * 2023/11/30   feallee@hotmail.com ���档
 */

#ifndef __WT_APPLICATION_H_
#define __WT_APPLICATION_H_
#include <WtDefine.h>
/*APP ENTRY*/
/// @brief Ӧ�ó�����ڿ��ƿ����͡�
typedef struct
{
    /// @brief ��ں�����
    WtActionType Entry;
} WtApplication_EntryType;
/// @brief ��Ӧ�ó���ע���Զ�ִ����ں�����
/// @param entry ��ں�����������Ϊ NULL��
/// @param level ִ�����ȼ��𡣹� 8 ������ִ��˳��1->2->3->4->5->6->7->8��
#define WT_APPLICATION_REGISTER_ENTRY(entry, level) const static WtApplication_EntryType mApp_Entry_##entry##_##level __attribute__((used, __section__(".app_entry." #level))) = {entry}
/// @brief ��Ӧ�ó���ע�����ȼ���Ϊ 1 ���Զ�ִ����ں�����
/// @param entry ��ں�����������Ϊ NULL��
#define WT_APPLICATION_REGISTER_ENTRY1(entry) WT_APPLICATION_REGISTER_ENTRY(entry, 1)
/// @brief ��Ӧ�ó���ע�����ȼ���Ϊ 2 ���Զ�ִ����ں�����
/// @param entry ��ں�����������Ϊ NULL��
#define WT_APPLICATION_REGISTER_ENTRY2(entry) WT_APPLICATION_REGISTER_ENTRY(entry, 2)
/// @brief ��Ӧ�ó���ע�����ȼ���Ϊ 3 ���Զ�ִ����ں�����
/// @param entry ��ں�����������Ϊ NULL��
#define WT_APPLICATION_REGISTER_ENTRY3(entry) WT_APPLICATION_REGISTER_ENTRY(entry, 3)
/// @brief ��Ӧ�ó���ע�����ȼ���Ϊ 4 ���Զ�ִ����ں�����
/// @param entry ��ں�����������Ϊ NULL��
#define WT_APPLICATION_REGISTER_ENTRY4(entry) WT_APPLICATION_REGISTER_ENTRY(entry, 4)
/// @brief ��Ӧ�ó���ע�����ȼ���Ϊ 5 ���Զ�ִ����ں�����
/// @param entry ��ں�����������Ϊ NULL��
#define WT_APPLICATION_REGISTER_ENTRY5(entry) WT_APPLICATION_REGISTER_ENTRY(entry, 5)
/// @brief ��Ӧ�ó���ע�����ȼ���Ϊ 6 ���Զ�ִ����ں�����
/// @param entry ��ں�����������Ϊ NULL��
#define WT_APPLICATION_REGISTER_ENTRY6(entry) WT_APPLICATION_REGISTER_ENTRY(entry, 6)
/// @brief ��Ӧ�ó���ע�����ȼ���Ϊ 7 ���Զ�ִ����ں�����
/// @param entry ��ں�����������Ϊ NULL��
#define WT_APPLICATION_REGISTER_ENTRY7(entry) WT_APPLICATION_REGISTER_ENTRY(entry, 7)
/// @brief ��Ӧ�ó���ע�����ȼ���Ϊ 8 ���Զ�ִ����ں�����
/// @param entry ��ں�����������Ϊ NULL��
#define WT_APPLICATION_REGISTER_ENTRY8(entry) WT_APPLICATION_REGISTER_ENTRY(entry, 8)

/*APP COMMAND*/
/// @brief Ӧ�ó���������ƿ����͡�
typedef struct
{
    /// @brief �������ơ�
    const char *Name;
    /// @brief �������
    const WtCommandType Command;
} WtApplication_CommandType;
/// @brief ��Ӧ�ó���ע���������
/// @param name �������ơ�������Ϊ NULL�Ҳ������ظ���
/// @param command �������������Ϊ NULL��
/// @param group ������顣�� 8 �����飺1,2,3,4,5,6,7,8��
#define WT_APPLICATION_REGISTER_COMMAND(name, command, group) const static WtApplication_CommandType mApp_Command_##command##_##group __attribute__((used, __section__(".app_command." #group))) = {name, command}
/// @brief ��Ӧ�ó���ע�����Ϊ 1 ���������
/// @param name �������ơ�������Ϊ NULL�Ҳ������ظ���
/// @param command �������������Ϊ NULL��
#define WT_APPLICATION_REGISTER_COMMAND1(name, command) WT_APPLICATION_REGISTER_COMMAND(name, command, 11)
/// @brief ��Ӧ�ó���ע�����Ϊ 2 ���������
/// @param name �������ơ�������Ϊ NULL�Ҳ������ظ���
/// @param command �������������Ϊ NULL��
#define WT_APPLICATION_REGISTER_COMMAND2(name, command) WT_APPLICATION_REGISTER_COMMAND(name, command, 21)
/// @brief ��Ӧ�ó���ע�����Ϊ 3 ���������
/// @param name �������ơ�������Ϊ NULL�Ҳ������ظ���
/// @param command �������������Ϊ NULL��
#define WT_APPLICATION_REGISTER_COMMAND3(name, command) WT_APPLICATION_REGISTER_COMMAND(name, command, 31)
/// @brief ��Ӧ�ó���ע�����Ϊ 4 ���������
/// @param name �������ơ�������Ϊ NULL�Ҳ������ظ���
/// @param command �������������Ϊ NULL��
#define WT_APPLICATION_REGISTER_COMMAND4(name, command) WT_APPLICATION_REGISTER_COMMAND(name, command, 41)
/// @brief ��Ӧ�ó���ע�����Ϊ 5 ���������
/// @param name �������ơ�������Ϊ NULL�Ҳ������ظ���
/// @param command �������������Ϊ NULL��
#define WT_APPLICATION_REGISTER_COMMAND5(name, command) WT_APPLICATION_REGISTER_COMMAND(name, command, 51)
/// @brief ��Ӧ�ó���ע�����Ϊ 6 ���������
/// @param name �������ơ�������Ϊ NULL�Ҳ������ظ���
/// @param command �������������Ϊ NULL��
#define WT_APPLICATION_REGISTER_COMMAND6(name, command) WT_APPLICATION_REGISTER_COMMAND(name, command, 61)
/// @brief ��Ӧ�ó���ע�����Ϊ 7 ���������
/// @param name �������ơ�������Ϊ NULL�Ҳ������ظ���
/// @param command �������������Ϊ NULL��
#define WT_APPLICATION_REGISTER_COMMAND7(name, command) WT_APPLICATION_REGISTER_COMMAND(name, command, 71)
/// @brief ��Ӧ�ó���ע�����Ϊ 8 ���������
/// @param name �������ơ�������Ϊ NULL�Ҳ������ظ���
/// @param command �������������Ϊ NULL��
#define WT_APPLICATION_REGISTER_COMMAND8(name, command) WT_APPLICATION_REGISTER_COMMAND(name, command, 81)
/// @brief ��ȡӦ�ó������
/// @param group ���顣
/// @param name �������ơ�������Ϊ NULL��
/// @return ����Ӧ�ó���������û��ƥ�䷵�� NULL��
const WtApplication_CommandType *WtApplication_GetCommand(const char *name, uint8_t group);

/*APP INVOKER*/
/// @brief ��Ӧ�ó���ί��ִ����������Ӷ����������ڵ�ǰ�߳�(���ж�)���ʺϴ���������ʱʹ�á�
/// @param action ����������
/// @return �����Ƿ�ɹ�������С�
bool WtApplication_Invoke(WtActionType action);
#endif