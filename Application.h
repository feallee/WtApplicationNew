/**
 * @brief �ṩ�ӿ��Թ���Ӧ�ó�����������Ӧ�ó��򡢴���ί�ж����͹�������ȹ��ܡ�
 * @copyright Copyright(C) 2023 We as Top team. All rights reserved.
 * @section �޶���־
 * ����         ����                ����
 * -------------------------------------------------------------------------
 * 2023/11/30   feallee@hotmail.com ���档
 */

#ifndef __APPLICATION_H_
#define __APPLICATION_H_
#include "config.h"
/*APP ENTRY*/
/// @brief Ӧ�ó���������͡�
typedef struct
{
    /// @brief ��ں�����
    ActionType Action;
} Application_EntryType;
/// @brief ��Ӧ�ó���ע���Զ�ִ����ں�����
/// @param action ��ں�����
/// @param level ִ�����ȼ��𡣹� 8 ������ִ��˳��1->2->3->4->5->6->7->8��
#define APPLICATION_REGISTER_ENTRY(action, level) const static Application_EntryType mApplication_Entry_##action __attribute__((used, __section__(".application_entry." level))) = {action}
/// @brief ��Ӧ�ó���ע�����ȼ���Ϊ 1 ���Զ�ִ����ں�����
/// @param action ��ں�����
#define APPLICATION_REGISTER_ENTRY1(action) APPLICATION_REGISTER_ENTRY(action, "1")
/// @brief ��Ӧ�ó���ע�����ȼ���Ϊ 2 ���Զ�ִ����ں�����
/// @param action ��ں�����
#define APPLICATION_REGISTER_ENTRY2(action) APPLICATION_REGISTER_ENTRY(action, "2")
/// @brief ��Ӧ�ó���ע�����ȼ���Ϊ 3 ���Զ�ִ����ں�����
/// @param action ��ں�����
#define APPLICATION_REGISTER_ENTRY3(action) APPLICATION_REGISTER_ENTRY(action, "3")
/// @brief ��Ӧ�ó���ע�����ȼ���Ϊ 4 ���Զ�ִ����ں�����
/// @param action ��ں�����
#define APPLICATION_REGISTER_ENTRY4(action) APPLICATION_REGISTER_ENTRY(action, "4")
/// @brief ��Ӧ�ó���ע�����ȼ���Ϊ 5 ���Զ�ִ����ں�����
/// @param action ��ں�����
#define WAPPLICATION_REGISTER_ENTRY5(action) APPLICATION_REGISTER_ENTRY(action, "5")
/// @brief ��Ӧ�ó���ע�����ȼ���Ϊ 6 ���Զ�ִ����ں�����
/// @param action ��ں�����
#define APPLICATION_REGISTER_ENTRY6(action) APPLICATION_REGISTER_ENTRY(action, "6")
/// @brief ��Ӧ�ó���ע�����ȼ���Ϊ 7 ���Զ�ִ����ں�����
/// @param action ��ں�����
#define APPLICATION_REGISTER_ENTRY7(action) APPLICATION_REGISTER_ENTRY(action, "7")
/// @brief ��Ӧ�ó���ע�����ȼ���Ϊ 8 ���Զ�ִ����ں�����
/// @param action ��ں�����
#define APPLICATION_REGISTER_ENTRY8(action) APPLICATION_REGISTER_ENTRY(action, "8")

/*APP COMMAND*/
/// @brief Ӧ���������͡�
typedef struct
{
    /// @brief �������ơ�
    char *Name;
    /// @brief �������
    Action1Type Action;
} Application_CommandType;
/// @brief ��Ӧ�ó���ע���������
/// @param name �������ơ�
/// @param action �������
/// @param level ����𡣹� 8 ������1,2,3,4,5,6,7,8��
#define APPLICATION_REGISTER_COMMAND(name, action, level) const static Application_CommandType mApplication_Command_##action __attribute__((used, __section__(".application_command." level))) = {name, action}
/// @brief ��Ӧ�ó���ע�ἶ��Ϊ 1 ���������
/// @param name �������ơ�
/// @param action �������
#define APPLICATION_REGISTER_COMMAND1(name, action) APPLICATION_REGISTER_COMMAND(name, action, "1")
/// @brief ��Ӧ�ó���ע�ἶ��Ϊ 2 ���������
/// @param name �������ơ�
/// @param action �������
#define APPLICATION_REGISTER_COMMAND2(name, action) APPLICATION_REGISTER_COMMAND(name, action, "2")
/// @brief ��Ӧ�ó���ע�ἶ��Ϊ 3 ���������
/// @param name �������ơ�
/// @param action �������
#define APPLICATION_REGISTER_COMMAND3(name, action) APPLICATION_REGISTER_COMMAND(name, action, "3")
/// @brief ��Ӧ�ó���ע�ἶ��Ϊ 4 ���������
/// @param name �������ơ�
/// @param action �������
#define APPLICATION_REGISTER_COMMAND4(name, action) APPLICATION_REGISTER_COMMAND(name, action, "4")
/// @brief ��Ӧ�ó���ע�ἶ��Ϊ 5 ���������
/// @param name �������ơ�
/// @param action �������
#define APPLICATION_REGISTER_COMMAND5(name, action) APPLICATION_REGISTER_COMMAND(name, action, "5")
/// @brief ��Ӧ�ó���ע�ἶ��Ϊ 6 ���������
/// @param name �������ơ�
/// @param action �������
#define APPLICATION_REGISTER_COMMAND6(name, action) APPLICATION_REGISTER_COMMAND(name, action, "6")
/// @brief ��Ӧ�ó���ע�ἶ��Ϊ 7 ���������
/// @param name �������ơ�
/// @param action �������
#define APPLICATION_REGISTER_COMMAND7(name, action) APPLICATION_REGISTER_COMMAND(name, action, "7")
/// @brief ��Ӧ�ó���ע�ἶ��Ϊ 8 ���������
/// @param name �������ơ�
/// @param action �������
#define APPLICATION_REGISTER_COMMAND8(name, action) APPLICATION_REGISTER_COMMAND(name, action, "8")
/// @brief ������������ִ�������(ָ�����)��
/// @param name �������ơ�
/// @param parameter �����С�
/// @return ���������Ƿ�ɹ�ִ�С�
bool Application_Execute(uint8_t level, const char *name, void *parameter);

/*APP INVOKER*/
/// @brief ί��Ӧ�ó������ڵ��̵߳��ö��������������ҵ�ǰ�߳�(���ж�)���ʺϴ���ʱʹ�á�
/// @param action ����������
void Application_Invoke(ActionType action);
#endif
