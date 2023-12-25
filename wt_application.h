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

/*APP HEADER*/
#include "wt_application_config.h"
/*APP TYPE*/
/// @brief Ӧ�ó���������͡�
typedef struct
{
    /// @brief ��ں�����
    void (*action)(void);
} wt_application_entry_type;

/// @brief Ӧ���������͡�
typedef struct
{
    /// @brief �������ơ�
    char *name;
    /// @brief �������
    /// @param line �����С�
    void (*action)(char *line);
} wt_application_command_type;

/*APP ENTRY*/
/// @brief ��Ӧ�ó���ע���Զ�ִ����ں�����
/// @param action ��ں�����
/// @param level ִ�����ȼ��𡣹� 8 ������ִ��˳��1->2->3->4->5->6->7->8��
#define __WT_APPLICATION_ENTRY(action, level) const static wt_application_entry_type __wt_app_entry_##action __attribute__((used, __section__(".wt_app_entry." level))) = {action}
/// @brief ��Ӧ�ó���ע�����ȼ���Ϊ 1 ���Զ�ִ����ں�����
/// @param action ��ں�����
#define WT_APPLICATION_ENTRY1(action) __WT_APPLICATION_ENTRY(action, "1")
/// @brief ��Ӧ�ó���ע�����ȼ���Ϊ 2 ���Զ�ִ����ں�����
/// @param action ��ں�����
#define WT_APPLICATION_ENTRY2(action) __WT_APPLICATION_ENTRY(action, "2")
/// @brief ��Ӧ�ó���ע�����ȼ���Ϊ 3 ���Զ�ִ����ں�����
/// @param action ��ں�����
#define WT_APPLICATION_ENTRY3(action) __WT_APPLICATION_ENTRY(action, "3")
/// @brief ��Ӧ�ó���ע�����ȼ���Ϊ 4 ���Զ�ִ����ں�����
/// @param action ��ں�����
#define WT_APPLICATION_ENTRY4(action) __WT_APPLICATION_ENTRY(action, "4")
/// @brief ��Ӧ�ó���ע�����ȼ���Ϊ 5 ���Զ�ִ����ں�����
/// @param action ��ں�����
#define WT_APPLICATION_ENTRY5(action) __WT_APPLICATION_ENTRY(action, "5")
/// @brief ��Ӧ�ó���ע�����ȼ���Ϊ 6 ���Զ�ִ����ں�����
/// @param action ��ں�����
#define WT_APPLICATION_ENTRY6(action) __WT_APPLICATION_ENTRY(action, "6")
/// @brief ��Ӧ�ó���ע�����ȼ���Ϊ 7 ���Զ�ִ����ں�����
/// @param action ��ں�����
#define WT_APPLICATION_ENTRY7(action) __WT_APPLICATION_ENTRY(action, "7")
/// @brief ��Ӧ�ó���ע�����ȼ���Ϊ 8 ���Զ�ִ����ں�����
/// @param action ��ں�����
#define WT_APPLICATION_ENTRY8(action) __WT_APPLICATION_ENTRY(action, "8")

/*APP INVOKER*/
/// @brief ί��Ӧ�ó������ڵ��̵߳��ö��������������ҵ�ǰ�߳�(���ж�)���ʺϴ���ʱʹ�á�
/// @param action ����������
void wt_application_invoke(void (*action)(void));

/*APP COMMAND*/
/// @brief ��Ӧ�ó���ע���������
/// @param name �������ơ�
/// @param action �������
/// @param level �����
#define __WT_APPLICATION_COMMAND(name, action, level) const static wt_application_command_type __wt_app_command_##action __attribute__((used, __section__(".wt_app_command." level))) = {name, action}
/// @brief ��Ӧ�ó���ע�ἶ��Ϊ 1 ���������
/// @param name �������ơ�
/// @param action �������
#define WT_APPLICATION_COMMAND1(name, action) __WT_APPLICATION_COMMAND(name, action, "1")
/// @brief ��Ӧ�ó���ע�ἶ��Ϊ 2 ���������
/// @param name �������ơ�
/// @param action �������
#define WT_APPLICATION_COMMAND2(name, action) __WT_APPLICATION_COMMAND(name, action, "2")
/// @brief ��Ӧ�ó���ע�ἶ��Ϊ 3 ���������
/// @param name �������ơ�
/// @param action �������
#define WT_APPLICATION_COMMAND3(name, action) __WT_APPLICATION_COMMAND(name, action, "3")
/// @brief ��Ӧ�ó���ע�ἶ��Ϊ 4 ���������
/// @param name �������ơ�
/// @param action �������
#define WT_APPLICATION_COMMAND4(name, action) __WT_APPLICATION_COMMAND(name, action, "4")
/// @brief ��Ӧ�ó���ע�ἶ��Ϊ 5 ���������
/// @param name �������ơ�
/// @param action �������
#define WT_APPLICATION_COMMAND5(name, action) __WT_APPLICATION_COMMAND(name, action, "5")
/// @brief ��Ӧ�ó���ע�ἶ��Ϊ 6 ���������
/// @param name �������ơ�
/// @param action �������
#define WT_APPLICATION_COMMAND6(name, action) __WT_APPLICATION_COMMAND(name, action, "6")
/// @brief ��Ӧ�ó���ע�ἶ��Ϊ 7 ���������
/// @param name �������ơ�
/// @param action �������
#define WT_APPLICATION_COMMAND7(name, action) __WT_APPLICATION_COMMAND(name, action, "7")
/// @brief ��Ӧ�ó���ע�ἶ��Ϊ 8 ���������
/// @param name �������ơ�
/// @param action �������
#define WT_APPLICATION_COMMAND8(name, action) __WT_APPLICATION_COMMAND(name, action, "8")
/// @brief ������������ִ�������(ָ�����)��
/// @param name �������ơ�
/// @param line �����С�
/// @return ���������Ƿ�ɹ�ִ�С�
bool wt_application_execute(uint8_t level, const char *name, char *line);
#endif
