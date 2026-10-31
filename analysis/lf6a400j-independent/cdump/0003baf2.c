
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003baf2(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  DAT_ffff2982 = DAT_ffff2982 | 8;
  _DAT_fffef482 = FUN_0016b4d8(&DAT_fffef482,(int)_DAT_fffef47e,0xffffffff);
  uVar3 = (uint)(_DAT_fffef482 >> 8);
  DAT_fffee6a4 = (undefined1)(_DAT_fffef482 >> 8);
  _DAT_fffef480 = _DAT_fffef482;
  if ((DAT_fffef32a & 4) != 0) {
    uVar3 = 0xffffffaa;
    _DAT_fffef480 = 0xaa00;
  }
  DAT_fffef643 = FUN_0016ba80(&PTR_DAT_001638a4,(int)(short)_DAT_fffef482,uVar3,FUN_0016ba80);
  if (((DAT_fffeeec2 & 2) == 0) || (DAT_ffff299c != '\0')) {
    if (DAT_ffff66b0 == '\x03') {
      _DAT_ffff2fd0 = FUN_0016bd34(_DAT_ffff2fd0 - 2);
    }
  }
  else {
    uVar1 = FUN_00001540(_DAT_ffff2fd0 + 1);
    _DAT_ffff2fd0 = FUN_0016bd78(uVar1,0xffff8000);
  }
  puVar4 = (undefined1 *)(int)(short)_DAT_ffff2fd0;
  if ((puVar4 < (undefined1 *)0xfb) || (puVar4 = &DAT_fffef49b, DAT_fffef49b == '\0')) {
    DAT_fffee6a5 = FUN_0016ba80(&PTR_DAT_001638a4,(int)(short)_DAT_fffef480,puVar4,FUN_0016ba80);
    DAT_fffef49b = '\x01';
  }
  uVar3 = (uint)DAT_fffee6a5 * 0x19a - 0xf84;
  if ((int)uVar3 < 0) {
    uVar3 = (uint)DAT_fffee6a5 * 0x19a - 0xe85;
  }
  uVar1 = FUN_0016b5d4((int)(char)(uVar3 >> 0x18) << 0x10 | uVar3 >> 8 & 0xffff);
  DAT_fffee6a6 = FUN_0000152c(uVar1,FUN_0000152c);
  v_Intake_Air_Temperature_2B23 = DAT_fffef643;
  if ((DAT_ffff2b22 & 1) == 0) {
    iVar2 = FUN_0016bd34(DAT_fffef643 - 10);
    iVar2 = __udiv32_r1_by_r0(iVar2 << 0x10,0xa0);
    _DAT_ffff2b24 = FUN_00001540(iVar2);
    DAT_ffff2b22 = DAT_ffff2b22 | 1;
  }
  else if (((DAT_fffeeec1 & 1) == 0) || ((DAT_fffef32a & 4) == 0)) {
    if (((DAT_fffeeec1 & 1) != 0) && ((DAT_fffef32a & 4) == 0)) {
      iVar2 = FUN_0016bd34(DAT_fffef643 - 10);
      iVar2 = __udiv32_r1_by_r0(iVar2 << 0x10,0xa0);
      _DAT_ffff2b24 = FUN_00001540(iVar2);
    }
  }
  else {
    _DAT_ffff2b24 = 0x6000;
  }
  if ((DAT_fffeeec2 & 2) == 0) {
    DAT_fffef48a = 0;
  }
  else {
    DAT_fffef48a = FUN_0000152c(DAT_fffef48a + 1,FUN_0000152c);
    if ((((DAT_fffeef76 & 8) == 0) || (0xfa < _DAT_ffff2fd0)) && (0x32 < DAT_fffef48a)) {
      DAT_fffee6fb = DAT_fffee6fb | 0x80;
    }
    else {
      DAT_fffee6a2 = DAT_fffee6a5;
    }
  }
  if ((DAT_ffffab40 & 0x40) == 0) {
    DAT_fffee756 = FUN_0016b608((int)(char)DAT_fffee6a5,(int)(char)DAT_fffee756);
    DAT_fffee6a7 = FUN_0016bd40((int)(char)DAT_fffee6a5,(int)(char)DAT_fffee6a7);
  }
  else {
    DAT_fffee756 = DAT_fffee6a5;
    DAT_fffee6a7 = DAT_fffee6a5;
  }
  if (((int)(char)DAT_fffee6fb & 0x80U) == 0) {
    DAT_ffff2fd6 = DAT_fffee6a2;
  }
  return;
}

