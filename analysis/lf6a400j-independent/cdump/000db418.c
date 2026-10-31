
void FUN_000db418(byte param_1,uint param_2,uint param_3,undefined2 *param_4,undefined1 *param_5)

{
  undefined1 uVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)((param_3 & 0xff) * (param_2 & 0xff) * (uint)param_1);
  if (puVar2 < (undefined *)0xff001) {
    uVar1 = (undefined1)((uint)puVar2 >> 0xc);
  }
  else {
    uVar1 = 0xff;
  }
  *param_5 = uVar1;
  *param_4 = (short)((uint)puVar2 >> 9);
  return;
}

