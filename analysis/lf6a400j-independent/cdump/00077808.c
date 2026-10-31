
/* WARNING: Removing unreachable block (ram,0x0007785c) */
/* WARNING: Removing unreachable block (ram,0x00077862) */
/* WARNING: Removing unreachable block (ram,0x00077b7e) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00077808(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  undefined *puVar5;
  
  puVar5 = (undefined *)((uint)DAT_ffff6793 * 0x100 + (uint)DAT_ffff6794);
  if (puVar5 == &DAT_0000f190) {
    if (_DAT_ffff7b96 == 0x14) {
      for (bVar4 = 0; bVar4 < 0x11; bVar4 = bVar4 + 1) {
      }
      if ((DAT_ffff8574 != '\x03') && (DAT_ffff8574 != '\x05')) {
        DAT_ffff6b91 = 0x7f;
        DAT_ffff6b92 = 0x2e;
        DAT_ffff6b93 = 0x33;
        _DAT_ffff7b98 = 3;
        return 0x33;
      }
      bVar1 = true;
      if (((int)(char)DAT_ffff19f9 & 0x80U) == 0) {
        _DAT_ffff35e0 = (ushort)DAT_ffff6795 * 0x100 + (ushort)DAT_ffff6796;
        _DAT_ffff35e2 = (ushort)DAT_ffff6797 * 0x100 + (ushort)DAT_ffff6798;
        _DAT_ffff35e4 = (ushort)DAT_ffff6799 * 0x100 + (ushort)DAT_ffff679a;
        _DAT_ffff35e6 = (ushort)DAT_ffff679b * 0x100 + (ushort)DAT_ffff679c;
        _DAT_ffff35e8 = (ushort)DAT_ffff679d * 0x100 + (ushort)DAT_ffff679e;
        _DAT_ffff35ea = (ushort)DAT_ffff679f * 0x100 + (ushort)DAT_ffff67a0;
        _DAT_ffff35ec = (ushort)DAT_ffff67a1 * 0x100 + (ushort)DAT_ffff67a2;
        _DAT_ffff35ee = (ushort)DAT_ffff67a3 * 0x100 + (ushort)DAT_ffff67a4;
        _DAT_ffff35f0 = (ushort)DAT_ffff67a5 * 0x100 + 0xff;
        FUN_001403b4(0x70,9);
        DAT_ffff19f9 = DAT_ffff19f9 | 0x80;
        _DAT_ffff3932 = 0;
        _DAT_ffff3934 = 0;
        DAT_ffff36ad = DAT_ffff36ad & 0xbf;
        _DAT_ffff350a = 0;
        _DAT_ffff350c = 0;
        FUN_001403b4(5,2);
      }
      iVar2 = FUN_00140424(0x70,9);
      if ((iVar2 == 0) && (((int)(char)DAT_ffff19f9 & 0x80U) != 0)) {
        if ((DAT_ffff1cd2 & 1) == 0) {
          DAT_ffff6b91 = 0x6e;
          DAT_ffff6b92 = DAT_ffff6793;
          DAT_ffff6b93 = DAT_ffff6794;
        }
        else {
          DAT_ffff6b91 = 0x7f;
          DAT_ffff6b92 = 0x2e;
          DAT_ffff6b93 = 0x72;
        }
        _DAT_ffff7b98 = 3;
        bVar1 = false;
        DAT_ffff19f9 = DAT_ffff19f9 & 0x7f;
      }
      if (!bVar1) {
        uVar3 = (uint)DAT_ffff8723;
        DAT_ffff8723 = (char)(uVar3 & 0x7f);
        return uVar3 & 0x7f;
      }
      uVar3 = (uint)DAT_ffff8723;
      DAT_ffff8572 = 0x2e;
      DAT_ffff8723 = (char)(uVar3 | 0x80);
      return uVar3 | 0x80;
    }
  }
  else if (puVar5 == &UNK_00002001) {
    if (_DAT_ffff7b96 == 4) {
      if (DAT_ffff8574 != '\x05') {
        DAT_ffff6b91 = 0x7f;
        DAT_ffff6b92 = 0x2e;
        DAT_ffff6b93 = 0x33;
        _DAT_ffff7b98 = 3;
        return 0x33;
      }
      DAT_ffff312e = DAT_ffff6795;
      goto LAB_00077b4e;
    }
  }
  else if (puVar5 == &UNK_00002002) {
    if (_DAT_ffff7b96 == 4) {
      if (DAT_ffff8574 != '\x05') {
        DAT_ffff6b91 = 0x7f;
        DAT_ffff6b92 = 0x2e;
        DAT_ffff6b93 = 0x33;
        _DAT_ffff7b98 = 3;
        return 0x33;
      }
      DAT_ffff312f = DAT_ffff6795;
      goto LAB_00077b4e;
    }
  }
  else if (puVar5 == &UNK_00002003) {
    if (_DAT_ffff7b96 == 4) {
      if (DAT_ffff8574 != '\x05') {
        DAT_ffff6b91 = 0x7f;
        DAT_ffff6b92 = 0x2e;
        DAT_ffff6b93 = 0x33;
        _DAT_ffff7b98 = 3;
        return 0x33;
      }
      DAT_ffff0456 = DAT_ffff6795;
      goto LAB_00077b4e;
    }
  }
  else if (puVar5 == &UNK_00002004) {
    if (_DAT_ffff7b96 == 4) {
      if (DAT_ffff8574 != '\x05') {
        DAT_ffff6b91 = 0x7f;
        DAT_ffff6b92 = 0x2e;
        DAT_ffff6b93 = 0x33;
        _DAT_ffff7b98 = 3;
        return 0x33;
      }
      DAT_fffef594 = DAT_ffff6795;
LAB_00077b4e:
      DAT_ffff6b91 = 0x6e;
      DAT_ffff6b92 = DAT_ffff6793;
      DAT_ffff6b93 = DAT_ffff6794;
      _DAT_ffff7b98 = 3;
      return (int)(char)DAT_ffff6794;
    }
  }
  else {
    if (puVar5 != &UNK_00002006) {
      DAT_ffff6b91 = 0x7f;
      DAT_ffff6b92 = 0x2e;
      DAT_ffff6b93 = 0x31;
      _DAT_ffff7b98 = 3;
      return 0x31;
    }
    if (_DAT_ffff7b96 == 4) {
      if (DAT_ffff8574 != '\x05') {
        DAT_ffff6b91 = 0x7f;
        DAT_ffff6b92 = 0x2e;
        DAT_ffff6b93 = 0x33;
        _DAT_ffff7b98 = 3;
        return 0x33;
      }
      DAT_fffef504 = DAT_ffff6795;
      goto LAB_00077b4e;
    }
  }
  _DAT_ffff7b98 = 3;
  DAT_ffff6b93 = 0x13;
  DAT_ffff6b92 = 0x2e;
  DAT_ffff6b91 = 0x7f;
  return 0x13;
}

