
void FUN_0009d364(uint param_1,uint param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,char param_8,undefined1 *param_9)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *p2;
  short sVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  
  param_1 = param_1 & 0xffff;
  p2 = (undefined1 *)(param_2 & 0xffff);
  uVar1 = LK_138984((uint)&T_02D8FC,param_1,(uint)p2);
  if (param_3 == '\x01') {
    uVar2 = LK_138984((uint)&T_02D8D4,param_1,(uint)p2);
  }
  else if (param_3 == '\x02') {
    uVar2 = LK_138984((uint)&T_02D8E8,param_1,(uint)p2);
  }
  else {
    uVar2 = uVar1 & 0xff;
    if (param_3 != '\x03') {
      if (param_3 == '\x04') {
        uVar2 = LK_138984((uint)&T_02D910,param_1,(uint)p2);
      }
      else {
        uVar2 = 0;
        if (param_3 == '\x05') {
          uVar2 = LK_138984((uint)&T_02D924,param_1,(uint)p2);
        }
      }
    }
  }
  sVar4 = -(short)((ulonglong)((longlong)(int)((uVar1 & 0xff) * 0x17) * 0x2000000) >> 0x20);
  uVar5 = 0x80;
  if (-0x81 < sVar4) {
    uVar5 = (undefined1)sVar4;
  }
  sVar4 = -(short)((ulonglong)((longlong)(int)((uVar2 & 0xff) * 0x17) * 0x2000000) >> 0x20);
  uVar6 = 0x80;
  if (-0x81 < sVar4) {
    uVar6 = (undefined1)sVar4;
  }
  if (DAT_fffec024 == '\0') {
    uVar1 = 0x3800;
  }
  else {
    uVar1 = 0x3600;
  }
  DAT_fffec024 = uVar1 <= param_1;
  if (DAT_fffec025 == '\0') {
    puVar3 = &LAB_00004100;
  }
  else {
    puVar3 = (undefined1 *)0x3200;
  }
  DAT_fffec025 = puVar3 <= p2;
  if (param_4 == '\0') {
    if ((param_7 != '\0') || ((param_5 != '\0' && (param_8 != '\0')))) {
      *param_9 = uVar5;
      return;
    }
    if ((((bool)DAT_fffec024) && ((bool)DAT_fffec025)) && (param_6 == '\0')) {
      *param_9 = uVar6;
      return;
    }
  }
  *param_9 = 0;
  return;
}

