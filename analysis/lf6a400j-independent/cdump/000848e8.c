
/* WARNING: Removing unreachable block (ram,0x00084922) */

void FUN_000848e8(byte param_1,short param_2,uint param_3,ushort param_4,short *param_5)

{
  byte bVar1;
  short sVar2;
  
  if ((int)-(param_3 & 0xffff) < -32000) {
    sVar2 = 0;
  }
  else {
    sVar2 = (short)-(param_3 & 0xffff) + 32000;
  }
  if (DAT_fffebb42 == '\0') {
    bVar1 = 0xff;
  }
  else {
    bVar1 = 0xfd;
  }
  if (bVar1 <= param_1) {
    DAT_fffebb40 = '\x01';
  }
  else if (param_4 < 0x9ab0) {
    DAT_fffebb40 = '\0';
  }
  if (DAT_fffebb40 == '\0') {
    *param_5 = param_2;
  }
  else {
    *param_5 = sVar2;
  }
  DAT_fffebb41 = param_4 < 0x9ab0;
  DAT_fffebb42 = bVar1 <= param_1;
  return;
}

