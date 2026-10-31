
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0006ee52(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  uint uVar8;
  undefined2 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar11 = 0;
  do {
    if (0x66 < (uVar11 & 0xffff)) {
      return;
    }
    uVar11 = uVar11 & 0xffff;
    for (uVar12 = 0; (uVar12 & 0xffff) < 8; uVar12 = uVar12 + 1) {
      uVar10 = (uint)*(byte *)(uVar11 - 0xc8f5);
      uVar8 = __shl_r0_by_r1(1,uVar12 & 0xffff);
      sVar2 = _DAT_ffff2fb2;
      sVar3 = _DAT_ffff2fb4;
      sVar4 = _DAT_ffff2fb8;
      uVar5 = _DAT_ffff2fba;
      uVar6 = _DAT_ffff2fbc;
      uVar7 = _DAT_ffff2fc0;
      if ((uVar8 & uVar10) != 0) {
        uVar8 = uVar12 + uVar11 * 8;
        sVar1 = (&DAT_0001b2d8)[uVar8 & 0xffff];
        if (((((_DAT_ffff2fb2 != sVar1) && (_DAT_ffff2fb4 != sVar1)) && (_DAT_ffff2fb6 != sVar1)) &&
            ((_DAT_ffff2fb8 != sVar1 && (sVar1 != 0)))) &&
           (((_DAT_ffff2fb2 == 0 || ((_DAT_ffff2fb4 == 0 || (_DAT_ffff2fb6 == 0)))) ||
            (_DAT_ffff2fb8 == 0)))) {
          uVar9 = (undefined2)uVar8;
          sVar2 = sVar1;
          uVar5 = uVar9;
          if ((((_DAT_ffff3520 == sVar1) || (_DAT_ffff3524 == sVar1)) || (_DAT_ffff3528 == sVar1))
             || (_DAT_ffff352c == sVar1)) {
            if (((_DAT_ffff3520 != sVar1) &&
                (sVar2 = _DAT_ffff2fb2, sVar3 = sVar1, uVar5 = _DAT_ffff2fba, uVar6 = uVar9,
                _DAT_ffff3524 != sVar1)) &&
               (sVar3 = _DAT_ffff2fb4, sVar4 = sVar1, uVar6 = _DAT_ffff2fbc, uVar7 = uVar9,
               _DAT_ffff3528 == sVar1)) {
LAB_0006ef74:
              sVar2 = _DAT_ffff2fb2;
              sVar3 = _DAT_ffff2fb4;
              _DAT_ffff2fb6 = sVar1;
              sVar4 = _DAT_ffff2fb8;
              uVar5 = _DAT_ffff2fba;
              uVar6 = _DAT_ffff2fbc;
              _DAT_ffff2fbe = uVar9;
              uVar7 = _DAT_ffff2fc0;
            }
          }
          else if (((_DAT_ffff3520 != 0) || (_DAT_ffff2fb2 != 0)) &&
                  ((_DAT_ffff3524 != 0 ||
                   (sVar2 = _DAT_ffff2fb2, sVar3 = sVar1, uVar5 = _DAT_ffff2fba, uVar6 = uVar9,
                   _DAT_ffff2fb4 != 0)))) {
            if ((_DAT_ffff3528 == 0) && (_DAT_ffff2fb6 == 0)) goto LAB_0006ef74;
            sVar2 = _DAT_ffff2fb2;
            sVar3 = _DAT_ffff2fb4;
            uVar5 = _DAT_ffff2fba;
            uVar6 = _DAT_ffff2fbc;
            if ((_DAT_ffff352c == 0) && (sVar4 = sVar1, uVar7 = uVar9, _DAT_ffff2fb8 != 0)) {
              sVar4 = _DAT_ffff2fb8;
              uVar7 = _DAT_ffff2fc0;
            }
          }
        }
      }
      _DAT_ffff2fc0 = uVar7;
      _DAT_ffff2fbc = uVar6;
      _DAT_ffff2fba = uVar5;
      _DAT_ffff2fb8 = sVar4;
      _DAT_ffff2fb4 = sVar3;
      _DAT_ffff2fb2 = sVar2;
    }
    uVar11 = uVar11 + 1;
  } while( true );
}

