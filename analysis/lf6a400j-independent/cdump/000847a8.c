
/* WARNING: Removing unreachable block (ram,0x0008480e) */

void FUN_000847a8(ushort param_1,ushort param_2,char param_3,char param_4,char param_5,char param_6,
                 uint param_7,uint param_8,short param_9,short *param_10)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  
  bVar2 = true;
  if ((param_3 == '\0') && ((param_4 == '\0' || (param_5 == '\0')))) {
    bVar2 = false;
  }
  if ((int)-(param_7 & 0xffff) < -32000) {
    sVar4 = 0;
  }
  else {
    sVar4 = (short)-(param_7 & 0xffff) + 32000;
  }
  DAT_fffebb3f = (param_8 & 0xffff) < 0x10000;
  bVar1 = false;
  if ((0xfffe < param_1) && (0xfffe < param_2)) {
    bVar1 = true;
  }
  if (((!bVar1) || (!bVar2)) || (cVar3 = '\x01', param_6 == '\0')) {
    cVar3 = DAT_fffebb3d;
  }
  if (((!bVar1) || (!bVar2)) && ((param_6 != '\0' && (DAT_fffebb3f)))) {
    cVar3 = '\0';
  }
  DAT_fffebb3d = cVar3;
  if (cVar3 == '\0') {
    *param_10 = param_9;
  }
  else {
    *param_10 = sVar4;
  }
  DAT_fffebb3c = 0xfffe < param_1;
  DAT_fffebb3e = 0xfffe < param_2;
  return;
}

