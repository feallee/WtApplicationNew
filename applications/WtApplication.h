/**
 * @brief �ṩ�ӿ��Թ���Ӧ�ó�����������Ӧ�ó��򡢴���ί�ж����͹�������ȹ��ܡ�
 * @copyright Copyright(C) 2023 We as Top team. All rights reserved.
 * @section �޶���־
 * ����         ����                ����
 * -------------------------------------------------------------------------
 * 2024/03/29   feallee@hotmail.com ������ں���������� Sleep �� Wakeup �ӿڡ�
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
    const WtActionType Entry;
    /// @brief ������
    int32_t Type;
} WtApplication_EntryType;
/// @brief ��Ӧ�ó���ע���Զ�ִ����ں�����
/// @param entry ��ں�����������Ϊ NULL��
/// @param level ִ�����ȼ��𡣹� 8 ������ִ��˳��1->2->3->4->5->6->7->8��
#define WT_APPLICATION_REGISTER_ENTRY(entry, type, level) const static WtApplication_EntryType mApp_Entry_##level##_##entry __attribute__((used, __section__(".app_entry." #level))) = {entry, type}
/// @brief ��Ӧ�ó���ע�����ȼ���Ϊ 1 ���Զ�ִ����ں�����
/// @param entry ��ں�����������Ϊ NULL��
#define WT_APPLICATION_REGISTER_ENTRY1(entry, type) WT_APPLICATION_REGISTER_ENTRY(entry, type, 1)
/// @brief ��Ӧ�ó���ע�����ȼ���Ϊ 2 ���Զ�ִ����ں�����
/// @param entry ��ں�����������Ϊ NULL��
#define WT_APPLICATION_REGISTER_ENTRY2(entry, type) WT_APPLICATION_REGISTER_ENTRY(entry, type, 2)
/// @brief ��Ӧ�ó���ע�����ȼ���Ϊ 3 ���Զ�ִ����ں�����
/// @param entry ��ں�����������Ϊ NULL��
#define WT_APPLICATION_REGISTER_ENTRY3(entry, type) WT_APPLICATION_REGISTER_ENTRY(entry, type, 3)
/// @brief ��Ӧ�ó���ע�����ȼ���Ϊ 4 ���Զ�ִ����ں�����
/// @param entry ��ں�����������Ϊ NULL��
#define WT_APPLICATION_REGISTER_ENTRY4(entry, type) WT_APPLICATION_REGISTER_ENTRY(entry, type, 4)
/// @brief ��Ӧ�ó���ע�����ȼ���Ϊ 5 ���Զ�ִ����ں�����
/// @param entry ��ں�����������Ϊ NULL��
#define WT_APPLICATION_REGISTER_ENTRY5(entry, type) WT_APPLICATION_REGISTER_ENTRY(entry, type, 5)
/// @brief ��Ӧ�ó���ע�����ȼ���Ϊ 6 ���Զ�ִ����ں�����
/// @param entry ��ں�����������Ϊ NULL��
#define WT_APPLICATION_REGISTER_ENTRY6(entry, type) WT_APPLICATION_REGISTER_ENTRY(entry, type, 6)
/// @brief ��Ӧ�ó���ע�����ȼ���Ϊ 7 ���Զ�ִ����ں�����
/// @param entry ��ں�����������Ϊ NULL��
#define WT_APPLICATION_REGISTER_ENTRY7(entry, type) WT_APPLICATION_REGISTER_ENTRY(entry, type, 7)
/// @brief ��Ӧ�ó���ע�����ȼ���Ϊ 8 ���Զ�ִ����ں�����
/// @param entry ��ں�����������Ϊ NULL��
#define WT_APPLICATION_REGISTER_ENTRY8(entry, type) WT_APPLICATION_REGISTER_ENTRY(entry, type, 8)
/// @brief ����Ӧ�ó���
void WtApplication_Sleep(void);
/// @brief ����Ӧ�ó���
void WtApplication_Wakeup(void);

/*APP COMMAND*/
/// @brief Ӧ�ó���������ƿ����͡�
typedef struct
{
    /// @brief �������
    const WtCommandType Command;
    /// @brief �������ơ�
    const char *Name;
} WtApplication_CommandType;
/// @brief ��Ӧ�ó���ע���������
/// @param name �������ơ�������Ϊ NULL�Ҳ������ظ���
/// @param command �������������Ϊ NULL��
/// @param group ������顣�� 8 �����飺1,2,3,4,5,6,7,8��
#define WT_APPLICATION_REGISTER_COMMAND(command, name, group) const static WtApplication_CommandType mApp_Command_##group##_##command __attribute__((used, __section__(".app_command." #group))) = {command, name}
/// @brief ��Ӧ�ó���ע�����Ϊ 1 ���������
/// @param name �������ơ�������Ϊ NULL�Ҳ������ظ���
/// @param command �������������Ϊ NULL��
#define WT_APPLICATION_REGISTER_COMMAND1(command, name) WT_APPLICATION_REGISTER_COMMAND(command, name, 11)
/// @brief ��Ӧ�ó���ע�����Ϊ 2 ���������
/// @param name �������ơ�������Ϊ NULL�Ҳ������ظ���
/// @param command �������������Ϊ NULL��
#define WT_APPLICATION_REGISTER_COMMAND2(command, name) WT_APPLICATION_REGISTER_COMMAND(command, name, 21)
/// @brief ��Ӧ�ó���ע�����Ϊ 3 ���������
/// @param name �������ơ�������Ϊ NULL�Ҳ������ظ���
/// @param command �������������Ϊ NULL��
#define WT_APPLICATION_REGISTER_COMMAND3(command, name) WT_APPLICATION_REGISTER_COMMAND(command, name, 31)
/// @brief ��Ӧ�ó���ע�����Ϊ 4 ���������
/// @param name �������ơ�������Ϊ NULL�Ҳ������ظ���
/// @param command �������������Ϊ NULL��
#define WT_APPLICATION_REGISTER_COMMAND4(command, name) WT_APPLICATION_REGISTER_COMMAND(command, name, 41)
/// @brief ��Ӧ�ó���ע�����Ϊ 5 ���������
/// @param name �������ơ�������Ϊ NULL�Ҳ������ظ���
/// @param command �������������Ϊ NULL��
#define WT_APPLICATION_REGISTER_COMMAND5(command, name) WT_APPLICATION_REGISTER_COMMAND(command, name, 51)
/// @brief ��Ӧ�ó���ע�����Ϊ 6 ���������
/// @param name �������ơ�������Ϊ NULL�Ҳ������ظ���
/// @param command �������������Ϊ NULL��
#define WT_APPLICATION_REGISTER_COMMAND6(command, name) WT_APPLICATION_REGISTER_COMMAND(command, name, 61)
/// @brief ��Ӧ�ó���ע�����Ϊ 7 ���������
/// @param name �������ơ�������Ϊ NULL�Ҳ������ظ���
/// @param command �������������Ϊ NULL��
#define WT_APPLICATION_REGISTER_COMMAND7(command, name) WT_APPLICATION_REGISTER_COMMAND(command, name, 71)
/// @brief ��Ӧ�ó���ע�����Ϊ 8 ���������
/// @param name �������ơ�������Ϊ NULL�Ҳ������ظ���
/// @param command �������������Ϊ NULL��
#define WT_APPLICATION_REGISTER_COMMAND8(command, name) WT_APPLICATION_REGISTER_COMMAND(command, name, 81)
/// @brief ��ȡӦ�ó������
/// @param group ���顣
/// @param name �������ơ�������Ϊ NULL��
/// @return ����Ӧ�ó���������û��ƥ�䷵�� NULL��
const WtApplication_CommandType *WtApplication_GetCommand(const char *name, uint8_t group);

/*APP INVOKER*/
/// @brief ��Ӧ�ó���ί��ִ����������Ӷ����������ڵ�ǰ�߳�(���ж�)���ʺϴ���������ʱʹ�á�
/// @param action ����������
/// @return �����Ƿ�ɹ�������С�
bool WtApplication_Invoke(const WtActionType action);
#endif