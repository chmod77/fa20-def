
void FUN_00086ac8(uint param_1,byte param_2,undefined2 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  
  uVar1 = (uint)param_2 + (uint)DAT_fffebbc9 + (uint)DAT_fffebbc8;
  if ((uVar1 < (uint)param_2 + (uint)DAT_fffebbc9) || (0xff < uVar1)) {
    uVar1 = 0xff;
  }
  DAT_fffebbc8 = DAT_fffebbc9;
  uVar2 = uVar1 + 1;
  if (0xfe < (uVar1 & 0xff)) {
    uVar2 = 0xff;
  }
  uVar2 = uVar2 & 0xff;
  if (uVar2 == 1) {
    uVar2 = 0x9c4;
  }
  else if (uVar2 == 2) {
    uVar2 = 100;
  }
  else if (uVar2 == 3) {
    uVar2 = 0x32;
  }
  else if (uVar2 == 4) {
    uVar2 = 0x21;
  }
  puVar3 = (undefined *)(uVar2 * (param_1 & 0xff));
  if (&DAT_0000ffff < puVar3) {
    puVar3 = &DAT_0000ffff;
  }
  *param_3 = (short)puVar3;
  DAT_fffebbc9 = param_2;
  return;
}

