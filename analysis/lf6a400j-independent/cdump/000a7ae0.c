
void FUN_000a7ae0(char param_1,ushort param_2,char param_3,short param_4,undefined1 *param_5)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = param_1 != '\0';
  bVar1 = param_2 < 0x65;
  if ((((DAT_fffec438 == '\0') || (bVar2)) || (bVar1)) || (-0xee < param_4)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 3;
  }
  if (((DAT_fffec438 != '\0') && (!bVar2)) && ((!bVar1 && (0xed < param_4)))) {
    uVar3 = 2;
  }
  if (((DAT_fffec438 == '\0') || (bVar2)) || ((bVar1 || (param_3 != '\0')))) {
    *param_5 = uVar3;
  }
  else {
    *param_5 = 1;
  }
  DAT_fffec438 = param_1;
  return;
}

