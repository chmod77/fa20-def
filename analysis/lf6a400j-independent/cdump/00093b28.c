
/* WARNING: Removing unreachable block (ram,0x00093b58) */
/* WARNING: Removing unreachable block (ram,0x00093b9a) */
/* WARNING: Removing unreachable block (ram,0x00093bb8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00093b28(byte param_1,char param_2,char param_3,uint param_4,char param_5,char param_6,
                 undefined4 param_7,undefined2 *param_8)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined2 *puVar6;
  
  if (param_2 == '\0') {
    uVar4 = (uint)_DAT_fffebeae;
  }
  else {
    uVar3 = (param_4 & 0xffff) >> 7;
    uVar4 = uVar3 + (int)_DAT_fffebeae;
    if ((uVar4 & 0xffff) < uVar3) {
      uVar4 = 0xffffffff;
    }
  }
  puVar6 = (undefined2 *)&DAT_fffebeac;
  if (param_3 != '\0') {
    uVar4 = 0;
  }
  iVar2 = __sdiv32_r1_by_r0(uVar4 & 0xffff,2);
  *puVar6 = (short)iVar2;
  bVar1 = *(byte *)(puVar6 + 3);
  if (param_1 <= bVar1) {
    uVar5 = puVar6[2];
  }
  else {
    uVar5 = *puVar6;
  }
  if ((param_5 != '\0') || (param_6 != '\0')) {
    uVar5 = 0x100;
  }
  *param_8 = uVar5;
  if (param_1 <= bVar1) {
    puVar6[1] = (short)uVar4;
  }
  else {
    puVar6[1] = 0;
  }
  puVar6[2] = uVar5;
  *(byte *)(puVar6 + 3) = param_1;
  return;
}

