
/* WARNING: Removing unreachable block (ram,0x00126eec) */
/* WARNING: Removing unreachable block (ram,0x00126f12) */
/* WARNING: Removing unreachable block (ram,0x00126f22) */

void FUN_00126ea8(byte param_1,ushort param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 undefined1 *param_7)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  
  iVar3 = (param_3 & 0xffff) - (param_6 & 0xffff);
  sVar4 = 0x7fff;
  if ((iVar3 < 0x8000) && (sVar4 = (short)iVar3, iVar3 < -0x8000)) {
    sVar4 = -0x8000;
  }
  bVar1 = false;
  if ((0x4b < param_2) && (param_1 != 0)) {
    bVar1 = true;
  }
  uVar2 = 0;
  if (DAT_fffee30c <= param_1) {
    uVar2 = DAT_fffee30d;
  }
  if (bVar1) {
    uVar5 = (param_4 & 0xffff) * (param_5 & 0xff);
    uVar2 = 0xff;
    if (uVar5 < 0x7f8001) {
      uVar2 = (undefined1)(uVar5 >> 0xf);
    }
  }
  else if (((bVar1) && (0xa9 < sVar4)) || ((param_1 != 0 && (0x1c2 < param_2)))) {
    uVar2 = 0;
  }
  if ((param_1 != 0) && (0x4b >= param_2)) {
    uVar2 = 0;
  }
  *param_7 = uVar2;
  DAT_fffee30d = uVar2;
  DAT_fffee30c = param_1;
  return;
}

