
/* WARNING: Removing unreachable block (ram,0x00099abc) */
/* WARNING: Removing unreachable block (ram,0x00099ac0) */
/* WARNING: Removing unreachable block (ram,0x00099b28) */
/* WARNING: Removing unreachable block (ram,0x00099b2c) */

void FUN_000999cc(char param_1,char param_2,char param_3,char param_4,uint param_5,char param_6,
                 byte param_7,ushort param_8,ushort param_9,char param_10,char *param_11)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  char cVar6;
  short sVar5;
  
  cVar6 = DAT_fffebfbc;
  if (((param_1 != '\0') && (param_4 != '\0')) && (param_6 == '\0')) {
    sVar4 = (param_8 & 0xff) - (param_9 & 0xff);
    sVar5 = 0x7f;
    if ((sVar4 < 0x80) && (sVar5 = -0x80, -0x81 < sVar4)) {
      sVar5 = sVar4;
    }
    cVar6 = (char)((uint)((char)sVar5 * 0xb4) >> 8);
    if ('\0' < cVar6) {
      cVar6 = '\0';
    }
    sVar4 = DAT_fffebfbc + 6;
    sVar5 = 0x7f;
    if ((sVar4 < 0x80) && (sVar5 = -0x80, -0x81 < sVar4)) {
      sVar5 = sVar4;
    }
    uVar2 = LK_134A08((uint)&T_02D614,param_5 & 0xffff);
    sVar4 = (short)(char)uVar2 + (short)cVar6;
    cVar6 = '\x7f';
    if ((sVar4 < 0x80) && (cVar6 = (char)sVar4, sVar4 < -0x80)) {
      cVar6 = -0x80;
    }
    if ((char)sVar5 <= cVar6) {
      cVar6 = (char)sVar5;
    }
  }
  if ((param_1 != '\0') && (param_3 == '\0')) {
    sVar5 = DAT_fffebfbc * 0x32 + -5;
    if (((short)(DAT_fffebfbc * 0x32) < 0) && (-1 < sVar5)) {
      sVar5 = -0x8000;
    }
    iVar3 = __sdiv32_r1_by_r0((int)sVar5,0x32);
    sVar5 = (short)iVar3;
    cVar6 = '\0';
    if (((0 < sVar5) && (cVar6 = '\x7f', sVar5 < 0x80)) && (cVar6 = (char)iVar3, sVar5 < -0x80)) {
      cVar6 = -0x80;
    }
  }
  if ((param_1 == '\0') || (param_6 == '\0')) {
    if ((param_1 != '\0') && ((param_6 == '\0' && (param_2 != '\0')))) {
      cVar6 = param_10;
    }
  }
  else {
    sVar5 = DAT_fffebfbc * 0x32 + -10;
    if (((short)(DAT_fffebfbc * 0x32) < 0) && (-1 < sVar5)) {
      sVar5 = -0x8000;
    }
    iVar3 = __sdiv32_r1_by_r0((int)sVar5,0x32);
    sVar5 = (short)iVar3;
    cVar6 = '\0';
    if (((0 < sVar5) && (cVar6 = '\x7f', sVar5 < 0x80)) && (cVar6 = (char)iVar3, sVar5 < -0x80)) {
      cVar6 = -0x80;
    }
  }
  bVar1 = false;
  if ((param_1 != '\0') && (0xc < param_7)) {
    bVar1 = true;
  }
  if (!bVar1) {
    cVar6 = '\0';
  }
  *param_11 = cVar6;
  DAT_fffebfbc = cVar6;
  return;
}

