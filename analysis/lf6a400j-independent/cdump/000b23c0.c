
/* WARNING: Removing unreachable block (ram,0x000b2448) */

void FUN_000b23c0(short param_1,uint param_2,char param_3,char param_4,char param_5,char param_6,
                 undefined2 *param_7)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)0x0;
  if ((param_5 != '\0') && (param_6 == '\0')) {
    puVar1 = (undefined4 *)&UNK_00000001;
  }
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)((int)param_1 + (param_2 & 0xffff));
  }
  if ((param_5 == '\0') || (param_6 == '\0')) {
    if ((param_5 == '\0') || (param_6 != '\0')) {
      if ((int)puVar1 < (int)&DAT_00010000) {
        if ((int)puVar1 < 0) {
          puVar1 = (undefined4 *)0x0;
        }
      }
      else {
        puVar1 = (undefined4 *)&DAT_0000ffff;
      }
    }
    else {
      puVar1 = &DAT_00003700;
    }
  }
  else {
    puVar1 = (undefined4 *)0x0;
  }
  if ((param_3 == '\0') && (param_4 == '\0')) {
    *param_7 = 0;
  }
  else if (((uint)puVar1 & 0xffff) < 0x3900) {
    *param_7 = (short)puVar1;
  }
  else {
    *param_7 = 0x3900;
  }
  return;
}

