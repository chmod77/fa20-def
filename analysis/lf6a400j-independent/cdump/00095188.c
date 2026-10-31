
void FUN_00095188(uint param_1,ushort param_2,uint param_3,uint param_4,char param_5,char param_6,
                 char param_7,undefined1 *param_8,undefined1 *param_9)

{
  uint uVar1;
  undefined *puVar2;
  
  if ((param_3 & 0xff) < (param_1 & 0xff)) {
    param_1 = param_3;
  }
  puVar2 = &T_02D3D4;
  uVar1 = LK_133B38((uint)&T_02D3D4,param_4);
  *param_9 = (char)uVar1;
  if (param_2 != 0) {
    puVar2 = &DAT_00010000 + -(int)(uint)param_2;
    if ((undefined *)(uint)param_2 < &DAT_00010001) {
      if (&DAT_0000ffff < puVar2) {
        puVar2 = (undefined *)0xffffffff;
      }
    }
    else {
      puVar2 = (undefined *)0x0;
    }
  }
  if (((param_5 == '\0') || (param_6 != '\0')) || (param_7 != '\0')) {
    if (param_2 == 0) {
      *param_8 = (char)param_1;
    }
    else {
      *param_8 = (char)(((uint)puVar2 & 0xffff) * (param_1 & 0xff) >> 0x10);
    }
  }
  else if ((uVar1 & 0xff) < (param_3 & 0xff)) {
    *param_8 = (char)uVar1;
  }
  else {
    *param_8 = (char)param_3;
  }
  return;
}

