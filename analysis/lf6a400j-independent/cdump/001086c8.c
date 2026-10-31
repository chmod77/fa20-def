
/* WARNING: Removing unreachable block (ram,0x00108756) */
/* WARNING: Removing unreachable block (ram,0x0010875c) */
/* WARNING: Removing unreachable block (ram,0x00108760) */
/* WARNING: Removing unreachable block (ram,0x001086fa) */
/* WARNING: Removing unreachable block (ram,0x00108706) */
/* WARNING: Removing unreachable block (ram,0x0010870c) */
/* WARNING: Removing unreachable block (ram,0x00108710) */
/* WARNING: Removing unreachable block (ram,0x001086f6) */
/* WARNING: Removing unreachable block (ram,0x00108746) */
/* WARNING: Removing unreachable block (ram,0x0010874a) */

void FUN_001086c8(short param_1,char param_2,char param_3,undefined1 *param_4,byte *param_5)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  byte bVar4;
  
  if (DAT_fffedb63 == '\0') {
    sVar3 = -0x1080;
  }
  else {
    sVar3 = 0;
  }
  DAT_fffedb63 = param_1 <= sVar3;
  if (DAT_fffedb62 == '\0') {
    sVar3 = 0x1080;
  }
  else {
    sVar3 = 0;
  }
  DAT_fffedb62 = sVar3 <= param_1;
  bVar1 = true;
  if ((!(bool)DAT_fffedb62) && (!(bool)DAT_fffedb63)) {
    bVar1 = false;
  }
  bVar4 = DAT_fffedb61;
  if ((bVar1) && (bVar4 = 0xff, DAT_fffedb61 != 0xff)) {
    bVar4 = DAT_fffedb61 + 1;
  }
  bVar2 = false;
  if (((param_3 == '\0') && (param_2 != '\0')) && (bVar1)) {
    bVar2 = true;
  }
  if (!bVar2) {
    bVar4 = 0;
  }
  *param_5 = bVar4;
  if (10 < bVar4) {
    DAT_fffedb60 = 1;
  }
  *param_4 = DAT_fffedb60;
  DAT_fffedb61 = bVar4;
  return;
}

