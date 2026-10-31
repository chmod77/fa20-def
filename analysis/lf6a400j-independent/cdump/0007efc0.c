
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007efc0(ushort param_1,uint param_2,ushort param_3,undefined2 *param_4)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = (((float)param_1 * 0.39999998) / 6e+07) * 14187.0 * (float)param_3 * 0.03492459;
  if (255.9961 < fVar3) {
    fVar3 = 255.9961;
  }
  iVar2 = -1;
  if (fVar3 <= 255.9961) {
    iVar2 = (int)(fVar3 * 256.0);
  }
  if (DAT_fffeba48 == '\0') {
    DAT_fffeba49 = '\0';
    DAT_fffeba48 = '\x01';
  }
  uVar1 = LK_133BCC((uint)&T_02C1AC,param_2);
  if (DAT_fffeba49 == '\0') {
    _DAT_ffff19a2 = (undefined2)iVar2;
  }
  else {
    FUN_0016b4d8(&DAT_ffff19a2,iVar2,(uVar1 & 0xff) << 8);
  }
  DAT_fffeba49 = 1;
  *param_4 = _DAT_ffff19a2;
  return;
}

