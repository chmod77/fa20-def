
void FUN_001320a8(char param_1,char param_2,char param_3,char param_4,uint param_5,uint param_6,
                 char param_7,undefined1 *param_8)

{
  uint uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined *puVar4;
  
  puVar4 = (undefined *)(param_6 & 0xffff);
  iVar3 = (int)puVar4 - (param_5 & 0xffff);
  uVar1 = 0xffffffff;
  if ((iVar3 < (int)&DAT_0000c000) && (uVar1 = 0, -0x4001 < iVar3)) {
    uVar1 = iVar3 + 0x4000;
  }
  if ((((param_1 == '\0') || (param_2 == '\0')) || (param_3 == '\0')) ||
     (((param_4 == '\0' || (puVar4 < &UNK_0000471b)) ||
      (((undefined *)0x7800 < puVar4 || (uVar2 = 1, &UNK_00004aac < (undefined *)(uVar1 & 0xffff))))
      ))) {
    uVar2 = DAT_fffee594;
  }
  if (param_7 != '\0') {
    uVar2 = 0;
  }
  *param_8 = uVar2;
  DAT_fffee594 = uVar2;
  return;
}

