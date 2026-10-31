
void FUN_000c9eac(undefined *param_1,uint param_2,uint param_3,char param_4,char param_5,
                 char param_6,short *param_7)

{
  undefined *puVar1;
  short sVar2;
  
  if ((param_5 == '\0') && (param_6 == '\0')) {
    param_1 = &DAT_00002710 + (param_2 & 0xff) * 0x10;
  }
  puVar1 = (undefined *)(((int)(param_3 & 0xffff) >> 3) + ((uint)param_1 & 0xffff));
  sVar2 = -1;
  if ((puVar1 < &UNK_000107d0) && (sVar2 = 0, (undefined *)((int)&DAT_000007cc + 3) < puVar1)) {
    sVar2 = (short)puVar1 + -2000;
  }
  if (param_4 == '\0') {
    *param_7 = 10000;
  }
  else {
    *param_7 = sVar2;
  }
  return;
}

