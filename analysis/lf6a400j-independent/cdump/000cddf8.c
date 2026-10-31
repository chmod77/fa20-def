
void FUN_000cddf8(uint param_1,uint param_2,uint param_3,uint param_4,char param_5,
                 undefined1 *param_6,undefined2 *param_7)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  
  uVar1 = LK_133E10((uint)&T_02EB78,param_2);
  *param_7 = (short)uVar1;
  uVar3 = (param_4 & 0xff) * 0x80;
  uVar1 = uVar3 + uVar1;
  if ((uVar1 & 0xffff) < uVar3) {
    uVar1 = 0xffffffff;
  }
  puVar2 = (undefined *)((param_3 & 0xffff) - 0x1e0);
  puVar4 = &DAT_0000ffff;
  if (((int)puVar2 < (int)&DAT_00010000) && (puVar4 = puVar2, (int)puVar2 < 0)) {
    puVar4 = (undefined *)0x0;
  }
  if (((param_1 & 0xffff) < ((uint)puVar4 & 0xffff)) &&
     (((param_1 & 0xffff) < (uVar1 & 0xffff) || (param_5 == '\0')))) {
    *param_6 = 1;
  }
  else {
    *param_6 = 0;
  }
  return;
}

