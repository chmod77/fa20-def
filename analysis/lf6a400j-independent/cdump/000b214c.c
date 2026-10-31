
void FUN_000b214c(char param_1,char param_2,char param_3,uint param_4,byte param_5,byte param_6,
                 byte param_7,undefined1 *param_8,undefined1 *param_9)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  ushort uVar5;
  float fVar6;
  
  uVar1 = LK_133BCC((uint)&T_02E180,param_4);
  fVar6 = (float)param_7 * (float)(uVar1 & 0xff) * (float)param_5 * (float)param_6 * 2.4029212e-08 *
          0.0039215684;
  if (0.3984375 < fVar6) {
    fVar6 = 0.3984375;
  }
  uVar1 = 0xff;
  if (fVar6 <= 0.3984375) {
    uVar1 = (uint)(fVar6 * 640.0);
  }
  cVar3 = '\x01';
  if (param_2 == DAT_fffec695) {
    cVar3 = DAT_fffec696;
  }
  uVar1 = uVar1 & 0xff;
  uVar5 = (short)uVar1 - (ushort)DAT_fffec694;
  if ((short)uVar5 < 0) {
    uVar5 = -uVar5;
    if ((short)uVar5 < 0) {
      uVar5 = 0;
    }
  }
  else if ((short)uVar5 < 0) {
    uVar5 = 0;
  }
  if ((uVar5 & 0xff) == 0) {
    cVar3 = '\0';
  }
  if (uVar1 < DAT_fffec694) {
    uVar4 = 0;
    if (0xfe < DAT_fffec694) {
      uVar4 = (int)(char)DAT_fffec694 + 1;
    }
    if (uVar1 <= (uVar4 & 0xff)) goto LAB_000b2238;
  }
  else {
    uVar2 = (int)(char)DAT_fffec694 - 1U & 0xff;
    uVar4 = (int)(char)DAT_fffec694 - 1U;
    if (uVar2 < DAT_fffec694) {
      uVar2 = 0xff;
      uVar4 = uVar2;
    }
    if (uVar2 <= uVar1) goto LAB_000b2238;
  }
  uVar4 = uVar1;
LAB_000b2238:
  if (cVar3 == '\0') {
    uVar4 = uVar1;
  }
  DAT_fffec694 = (byte)uVar4;
  *param_9 = DAT_fffec694;
  if (0xbf < (uVar4 & 0xff)) {
    DAT_fffec694 = 0xc0;
  }
  if ((param_3 == '\0') && (param_1 != '\0')) {
    *param_8 = DAT_fffec694;
  }
  else {
    *param_8 = 0;
  }
  DAT_fffec696 = cVar3;
  DAT_fffec695 = param_2;
  return;
}

