
/* WARNING: Removing unreachable block (ram,0x000e0084) */

void FUN_000e0044(char param_1,char param_2,char param_3,ushort param_4,undefined1 *param_5,
                 char *param_6)

{
  char cVar1;
  undefined1 uVar2;
  short sVar3;
  
  sVar3 = (short)param_2 - (short)param_3;
  if (sVar3 < 0x80) {
    if (sVar3 < -0x80) {
      sVar3 = -0x80;
    }
  }
  else {
    sVar3 = 0x7f;
  }
  cVar1 = (char)sVar3;
  *param_6 = cVar1;
  uVar2 = 0;
  if (((param_1 != '\x04') && (-1 < cVar1)) && (param_4 < 0x25)) {
    uVar2 = 1;
  }
  *param_5 = uVar2;
  DAT_fffed190 = -1 < cVar1;
  return;
}

