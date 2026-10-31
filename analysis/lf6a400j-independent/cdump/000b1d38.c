
void FUN_000b1d38(uint param_1,char param_2,byte param_3,byte param_4,byte param_5,
                 undefined2 *param_6,byte *param_7)

{
  uint uVar1;
  byte bVar2;
  float fVar3;
  
  bVar2 = DAT_fffec684;
  if (param_2 != '\0') {
    fVar3 = (float)param_4 * (float)param_3 * (float)param_5 * 2.4029212e-08;
    if (0.3984375 < fVar3) {
      fVar3 = 0.3984375;
    }
    uVar1 = 0xff;
    if (fVar3 <= 0.3984375) {
      uVar1 = (uint)(fVar3 * 640.0);
    }
    bVar2 = (byte)uVar1;
    if (0xbf < (uVar1 & 0xff)) {
      bVar2 = 0xc0;
    }
  }
  *param_7 = bVar2;
  uVar1 = 0;
  if (bVar2 != 0) {
    uVar1 = __sdiv32_r1_by_r0((param_1 & 0xff) << 8,(uint)bVar2);
  }
  if ((uVar1 & 0xffff) < 0x133) {
    *param_6 = (short)uVar1;
  }
  else {
    *param_6 = 0x133;
  }
  DAT_fffec685 = param_2;
  DAT_fffec684 = bVar2;
  return;
}

