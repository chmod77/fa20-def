
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002804(void)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  
  pcVar6 = (code *)0x0;
  uVar5 = 0;
  while ((uVar3 = uVar5 & 0xff, uVar3 < 0x1e &&
         (uVar5 = uVar5 & 0xff, (&DAT_00007634)[uVar5 * 8] != DAT_ffff6792))) {
    uVar5 = uVar5 + 1;
  }
  if (0x1d < uVar3) goto LAB_0000295c;
  if (DAT_ffff8573 == '\x01') {
    uVar5 = uVar5 & 0xff;
    bVar1 = ((int)(char)(&DAT_00007635)[uVar5 * 8] & 0x80U) != 0;
  }
  else if (DAT_ffff8573 == '\x02') {
    uVar5 = uVar5 & 0xff;
    bVar1 = ((&DAT_00007635)[uVar5 * 8] & 0x40) != 0;
  }
  else if (DAT_ffff8573 == '\x03') {
    uVar5 = uVar5 & 0xff;
    bVar1 = ((&DAT_00007635)[uVar5 * 8] & 0x20) != 0;
  }
  else if (DAT_ffff8573 == '@') {
    uVar5 = uVar5 & 0xff;
    bVar1 = ((&DAT_00007635)[uVar5 * 8] & 0x10) != 0;
  }
  else if (DAT_ffff8573 == 'B') {
    uVar5 = uVar5 & 0xff;
    bVar1 = ((&DAT_00007635)[uVar5 * 8] & 8) != 0;
  }
  else {
    bVar1 = true;
    if (DAT_ffff8573 == 'C') {
      uVar5 = uVar5 & 0xff;
      bVar1 = ((&DAT_00007635)[uVar5 * 8] & 4) != 0;
    }
  }
  if ((DAT_ffffab9d == '\x01') &&
     (uVar5 = uVar5 & 0xff, ((int)(char)(&DAT_00007636)[uVar5 * 8] & 0x80U) == 0)) {
    bVar1 = true;
  }
  if (bVar1) {
LAB_0000295a:
    pcVar6 = (code *)0x0;
  }
  else {
    if (_DAT_ffff8ece == 0x7df) {
      uVar5 = uVar5 & 0xff;
      iVar4 = uVar5 * 8;
      if (((&DAT_00007635)[iVar4] & 2) == 0) goto LAB_00002936;
    }
    else {
LAB_00002936:
      if ((_DAT_ffff8ece != 0x7e0) ||
         (iVar4 = (uVar5 & 0xff) * 8, ((&DAT_00007635)[iVar4] & 1) == 0)) goto LAB_0000295a;
    }
    pcVar6 = *(code **)((int)&PTR_thunk_FUN_00070788_00007638 + iVar4);
  }
LAB_0000295c:
  if (pcVar6 == (code *)0x0) {
    if (DAT_ffffab31 != '\0') {
      _DAT_ffff8578 = 300;
      DAT_ffff857c = 1;
      DAT_ffff857d = '\x01';
    }
  }
  else if ((DAT_ffffab31 != '\0') || ((DAT_ffff8727 & 0x40) != 0)) {
    (*pcVar6)();
  }
  if (((DAT_ffff8723 & 0x40) == 0) && (((int)(char)DAT_ffff8723 & 0x80U) != 0)) {
    DAT_ffff6b91 = 0x7f;
    DAT_ffff6b92 = DAT_ffff8572;
    DAT_ffff6b93 = 0x78;
    _DAT_ffff7b98 = 3;
    _DAT_ffff8570 = 0;
    DAT_ffffab32 = 1;
  }
  else if (((int)(char)DAT_ffff8723 & 0x80U) == 0) {
    DAT_ffffab32 = DAT_ffffab31 == '\x01';
    if ((bool)DAT_ffffab32) {
      DAT_ffffab31 = '\0';
      _DAT_ffff8570 = 0;
      DAT_ffffab32 = DAT_ffff857d == '\0';
      DAT_ffff857d = '\0';
    }
  }
  else {
    DAT_ffffab32 = 4999 < _DAT_ffff8570;
    if ((bool)DAT_ffffab32) {
      DAT_ffff6b91 = 0x7f;
      DAT_ffff6b92 = DAT_ffff8572;
      DAT_ffff6b93 = 0x78;
      _DAT_ffff7b98 = 3;
      _DAT_ffff8570 = 0;
    }
    _DAT_ffff8570 = FUN_00001540(_DAT_ffff8570 + 1);
  }
  bVar2 = DAT_ffff8723 | 0x40;
  if (((int)(char)DAT_ffff8723 & 0x80U) == 0) {
    bVar2 = DAT_ffff8723 & 0xbf;
  }
  DAT_ffff8723 = bVar2;
  if ((_DAT_fffff75e & 0x10) == 0) {
    DAT_ffffab98 = DAT_ffffab98 & 0xbf;
  }
  return;
}

