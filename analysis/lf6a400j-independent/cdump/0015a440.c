
/* WARNING: Removing unreachable block (ram,0x0015a4f4) */
/* WARNING: Removing unreachable block (ram,0x0015a4c6) */
/* WARNING: Removing unreachable block (ram,0x0015a456) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0015a440(void)

{
  short sVar1;
  undefined2 uVar3;
  undefined4 uVar2;
  
  uVar3 = FUN_00001550(0xf0);
  DAT_fffff859 = DAT_fffff859 & 0xdf;
  _DAT_ffffecec = (undefined *)((uint)_DAT_ffffecec & 0xfffffff8);
  FUN_00001550(uVar3);
  DAT_ffff2e34 = *(char *)((int)&PTR_DAT_00162a38 + (uint)DAT_ffff2ca7) + '\x01';
  DAT_ffff2e11 = 0;
  DAT_ffff2e10 = 0;
  uVar3 = FUN_00001550(0xf0);
  if (DAT_ffff2efb == '\0') {
    if ((DAT_ffff2e34 == '\x01') || (DAT_ffff2e34 == '\x03')) {
      DAT_ffff2efc = '\0';
    }
    else {
      DAT_ffff2efc = '\x02';
    }
  }
  else if ((DAT_ffff2e34 == '\x01') || (DAT_ffff2e34 == '\x03')) {
    DAT_ffff2efc = '\x01';
  }
  else {
    DAT_ffff2efc = '\x03';
  }
  if (DAT_ffff2efa == '\0') {
    DAT_ffff2efa = -1;
    _DAT_ffffece0 = 0x114;
    if (((DAT_ffff2efc != '\x01') && (_DAT_ffffece0 = 0x11a, DAT_ffff2efc != '\x02')) &&
       (_DAT_ffffece0 = 0x112, DAT_ffff2efc == '\x03')) {
      _DAT_ffffece0 = 0x11c;
    }
    _DAT_ffffece0 = _DAT_ffffece0 + -0x8d2;
    _DAT_ffffece4 = (uint)DAT_ffff2e10 * 0x54 + -0xd1ca;
    _DAT_ffffecec = (undefined *)0xd0115;
  }
  else {
    sVar1 = 0x114;
    if (DAT_ffff2efc != '\x01') {
      sVar1 = 0x11a;
      if ((DAT_ffff2efc == '\x02') || (sVar1 = 0x112, DAT_ffff2efc != '\x03')) {
        _DAT_ffffece0 = sVar1 + -0x8d2;
        _DAT_ffffece4 = (uint)DAT_ffff2e10 * 0x54 + -0xd1ca;
        _DAT_ffffecec = (undefined *)((uint)_DAT_ffffecec | 5);
        goto LAB_0015a5c4;
      }
      sVar1 = 0x11c;
    }
    _DAT_ffffece0 = sVar1 + -0x8d2;
    _DAT_ffffece4 = (uint)DAT_ffff2e10 * 0x54 + -0xd1ca;
    _DAT_ffffecec = (undefined *)((uint)_DAT_ffffecec | 5);
  }
LAB_0015a5c4:
  _DAT_ffffece8 = 0x20;
  if ((DAT_ffff2efc == '\x02') || (DAT_ffff2efc == '\x03')) {
    DAT_fffff858 = 0x5d;
  }
  else {
    DAT_fffff858 = 0x59;
  }
  DAT_fffff859 = 0x3f;
  uVar2 = FUN_00001550(uVar3);
  return uVar2;
}

