#ifndef __WT_COMMAND_H_
#define __WT_COMMAND_H_
typedef struct
{
     void (*Action)(int sender, void *parameter);
     char *Name;
} WtCommand_Type;

#define WT_COMMAND_REGISTER(action, name) const static WtCommand_Type mWtCommand_##action __attribute__((used, __section__(".WtCommand.1"))) = {action, name}

int WtCommand_Execute(const char *name, int sender, void *parameter);
#endif
