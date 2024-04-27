/**
 * @brief Ӧ�ó�����ڹ���ģ�顣ִ�����ȼ�Ϊ: 1->2->3->4->5->6->7->8��
 * @copyright Copyright(C) 2023 We As Top team. All rights reserved.
 * @section �޶���־
 * ����         ����                ����
 * -------------------------------------------------------------------------
 * 2024/4/26   feallee@hotmail.com ���档
 */
#ifndef __WT_ENTRY_H_
#define __WT_ENTRY_H_

/// @brief Ӧ�ó������������͡�
typedef enum
{
    /// @brief �����顣
    WT_ENTRY_GROUP_STARTUP,
    /// @brief �����顣
    WT_ENTRY_GROUP_SLEEP,
    /// @brief �����顣
    WT_ENTRY_GROUP_WAKEUP,
    /// @brief �˳��顣
    WT_ENTRY_GROUP_EXIT,
    /// @brief �쳣�顣
    WT_ENTRY_GROUP_EXCEPTION,
    /// TODO �����ﶨ������������ǰ������Ҳ����ɾ����
} WtEntry_GroupType;

/// @brief Ӧ�ó�����ڿ��ƿ�����
typedef struct
{
    /// @brief ��ڶ�����
    void (*Action)(void *parameter);
    /// @brief ������
    WtEntry_GroupType Group;
} WtEntry_Type;

/// @brief ע��Ӧ�ó������(���ȼ� 1)��
/// @param action ��ڶ�����
/// @param group ������
#define WT_ENTRY_REGISTER1(group, action) const static WtEntry_Type mWtEntry1_##action __attribute__((used, __section__(".WtEntry.1"))) = {action, group}

/// @brief ע��Ӧ�ó������(���ȼ� 2)��
/// @param action ��ڶ�����
/// @param group ������
#define WT_ENTRY_REGISTER2(group, action) const static WtEntry_Type mWtEntry2_##action __attribute__((used, __section__(".WtEntry.2"))) = {action, group}

/// @brief ע��Ӧ�ó������(���ȼ� 3)��
/// @param action ��ڶ�����
/// @param group ������
#define WT_ENTRY_REGISTER3(group, action) const static WtEntry_Type mWtEntry3_##action __attribute__((used, __section__(".WtEntry.3"))) = {action, group}

/// @brief ע��Ӧ�ó������(���ȼ� 4)��
/// @param action ��ڶ�����
/// @param group ������
#define WT_ENTRY_REGISTER4(group, action) const static WtEntry_Type mWtEntry4_##action __attribute__((used, __section__(".WtEntry.4"))) = {action, group}

/// @brief ע��Ӧ�ó������(���ȼ� 5)��
/// @param action ��ڶ�����
/// @param group ������
#define WT_ENTRY_REGISTER5(group, action) const static WtEntry_Type mWtEntry5_##action __attribute__((used, __section__(".WtEntry.5"))) = {action, group}

/// @brief ע��Ӧ�ó������(���ȼ� 6)��
/// @param action ��ڶ�����
/// @param group ������
#define WT_ENTRY_REGISTER6(group, action) const static WtEntry_Type mWtEntry6_##action __attribute__((used, __section__(".WtEntry.6"))) = {action, group}

/// @brief ע��Ӧ�ó������(���ȼ� 7)��
/// @param action ��ڶ�����
/// @param group ������
#define WT_ENTRY_REGISTER7(group, action) const static WtEntry_Type mWtEntry7_##action __attribute__((used, __section__(".WtEntry.7"))) = {action, group}

/// @brief ע��Ӧ�ó������(���ȼ� 8)��
/// @param action ��ڶ�����
/// @param group ������
#define WT_ENTRY_REGISTER8(group, action) const static WtEntry_Type mWtEntry8_##action __attribute__((used, __section__(".WtEntry.8"))) = {action, group}

/// @brief ִ��Ӧ�ó�����ڡ�
/// @param group ������
/// @param parameter ��ڲ�����
/// @return ����ִ��ָ������Ӧ�ó���������������û���ҵ���ڷ��� 0��
extern int WtEntry_Execute(WtEntry_GroupType group, void *parameter);
#endif
