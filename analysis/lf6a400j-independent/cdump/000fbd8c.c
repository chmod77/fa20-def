
void FUN_000fbd8c(uint param_1,uint param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,char param_8,char param_9,undefined4 param_10,undefined1 *param_11,
                 undefined4 param_12,undefined2 *param_13,undefined2 *param_14,undefined1 *param_15)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  undefined1 uVar5;
  undefined *puVar4;
  
  bVar1 = false;
  if ((param_5 != '\0') && (param_8 != '\0')) {
    bVar1 = true;
  }
  *(bool *)param_10 = bVar1;
  uVar5 = 0;
  if ((param_6 != '\0') && (param_9 != '\0')) {
    uVar5 = 1;
  }
  *param_11 = uVar5;
  bVar2 = false;
  if (((param_3 != '\x02') && (param_4 == '\0')) && (param_7 == '\0')) {
    bVar2 = true;
  }
  uVar5 = 0;
  if (((bVar1) && (param_3 == '\0')) && (bVar2)) {
    uVar5 = 1;
  }
  *param_15 = uVar5;
  *(bool *)param_12 = bVar2;
  uVar3 = LK_138984((uint)&T_02F5DC,param_1 & 0xffff,param_2 & 0xffff);
  uVar3 = __udiv8_r1_by_r0(uVar3 & 0xff,1);
  uVar3 = uVar3 & 0xff;
  if (0xff < uVar3) {
    uVar3 = 0xff;
  }
  puVar4 = (undefined *)0x0;
  if ((uVar3 != 0) &&
     (puVar4 = (undefined *)__sdiv32_r1_by_r0((int)(undefined *)0x61a80,uVar3),
     &DAT_0000ffff < puVar4)) {
    puVar4 = &DAT_0000ffff;
  }
  *param_14 = (short)puVar4;
  *param_13 = (short)puVar4;
  return;
}

