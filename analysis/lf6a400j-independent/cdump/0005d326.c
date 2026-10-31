
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0005d326(undefined4 param_1,char *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  char acStack_14 [12];
  
  pcVar2 = acStack_14;
  bVar4 = 4;
  if ((_DAT_fffef64c & 0x100) != 0) {
    bVar4 = 5;
  }
  if (DAT_fffef6a5 == '\0') {
    FUN_0005defe(param_1,acStack_14);
    FUN_0005de76(acStack_14,&DAT_fffef6ba,bVar4);
    DAT_fffef6a5 = '\x01';
  }
  else {
    pcVar2 = &DAT_fffef6ba;
  }
  uVar1 = 0;
  for (bVar3 = 0; bVar3 < bVar4; bVar3 = bVar3 + 1) {
    if (*pcVar2 != *param_2) {
      uVar1 = 1;
    }
    pcVar2 = pcVar2 + 1;
    param_2 = param_2 + 1;
  }
  return uVar1;
}

