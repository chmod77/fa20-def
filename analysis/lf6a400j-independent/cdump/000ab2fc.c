
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ab2fc(char param_1,byte param_2,char param_3,uint param_4,char param_5,short param_6,
                 undefined2 *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = (undefined *)((param_4 & 0xffff) << 2);
  if ((param_4 & 0xffff) < (uint)((int)(uint)_DAT_fffec4a4 >> 2)) {
    puVar2 = (undefined *)((uint)_DAT_fffec4a4 - (int)param_6);
    if ((int)puVar2 < (int)&DAT_00010000) {
      if ((int)puVar2 < 0) {
        puVar2 = (undefined *)0x0;
      }
    }
    else {
      puVar2 = &DAT_0000ffff;
    }
    if (puVar1 < (undefined *)((uint)puVar2 & 0xffff)) goto LAB_000ab37c;
  }
  else {
    puVar2 = (undefined *)((uint)_DAT_fffec4a4 + (int)param_6);
    if ((int)puVar2 < (int)&DAT_00010000) {
      if ((int)puVar2 < 0) {
        puVar2 = (undefined *)0x0;
      }
    }
    else {
      puVar2 = &DAT_0000ffff;
    }
    if ((undefined *)((uint)puVar2 & 0xffff) < puVar1) goto LAB_000ab37c;
  }
  puVar2 = puVar1;
  if (&DAT_0000ffff < puVar1) {
    puVar2 = &DAT_0000ffff;
  }
LAB_000ab37c:
  if (((((DAT_fffec4a6 == '\0') || (param_1 != '\0')) || (param_2 < DAT_fffec4a7)) ||
      ((param_3 == '\0' || (param_5 != '\0')))) && (puVar2 = puVar1, &DAT_0000ffff < puVar1)) {
    puVar2 = &DAT_0000ffff;
  }
  *param_7 = (short)puVar2;
  DAT_fffec4a7 = param_2;
  _DAT_fffec4a4 = (short)puVar2;
  DAT_fffec4a6 = 1;
  return;
}

