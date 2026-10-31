
/* WARNING: Removing unreachable block (ram,0x00100812) */

void FUN_001007ec(char param_1,uint param_2,char param_3,short param_4,undefined2 *param_5)

{
  undefined *puVar1;
  undefined2 uVar2;
  
  if (param_3 == '\0') {
    puVar1 = (undefined *)((int)param_4 + (param_2 & 0xffff));
    if ((int)puVar1 < (int)&DAT_00010000) {
      if ((int)puVar1 < 0) {
        puVar1 = (undefined *)0x0;
      }
    }
    else {
      puVar1 = &DAT_0000ffff;
    }
    if (0xd79 < ((uint)puVar1 & 0xffff)) {
      puVar1 = &UNK_00000d7a;
    }
    if (((uint)puVar1 & 0xffff) < 0x8cb) {
      uVar2 = 0x8ca;
    }
    else {
      uVar2 = SUB42(puVar1,0);
    }
  }
  else {
    uVar2 = 0;
  }
  if (param_1 == '\x01') {
    *param_5 = 0;
  }
  else {
    *param_5 = uVar2;
  }
  return;
}

