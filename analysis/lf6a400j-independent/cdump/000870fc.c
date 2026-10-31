
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000870fc(uint param_1,uint param_2,uint param_3,ushort param_4,byte param_5,uint param_6,
                 uint param_7,uint param_8,undefined1 *param_9,undefined2 *param_10,byte *param_11)

{
  bool bVar1;
  undefined1 *puVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  byte bVar7;
  undefined *puVar6;
  short sVar8;
  
  uVar4 = ((param_6 & 0xffff) * (uint)param_4 >> 0xf) - ((param_6 & 0xffff) * 32000 >> 0x10);
  puVar2 = (undefined1 *)0xffffffff;
  if (((int)uVar4 < (int)&DAT_0000c180) && (puVar2 = (undefined1 *)0x0, -0x3e81 < (int)uVar4)) {
    puVar2 = &LAB_00003e80 + (uVar4 & 0xffff);
  }
  iVar5 = ((param_1 & 0xffff) * ((uint)puVar2 & 0xffff) >> 0xd) - ((param_1 & 0xffff) * 500 >> 8);
  sVar8 = -1;
  if ((iVar5 < (int)&DAT_0000c180) && (sVar8 = 0, -0x3e81 < iVar5)) {
    sVar8 = (short)iVar5 + 16000;
  }
  if (param_5 < 200) {
    if (param_5 < 0xa0) {
      if (param_5 < 0x78) {
        if (param_5 < 0x60) {
          if (param_5 < 0x50) {
            if (param_5 < 0x40) {
              if (param_5 < 0x30) {
                if (param_5 < 0x28) {
                  if (param_5 < 0x20) {
                    if (param_5 < 0x18) {
                      bVar7 = 3;
                    }
                    else {
                      bVar7 = 3;
                    }
                  }
                  else {
                    bVar7 = 3;
                  }
                }
                else {
                  bVar7 = 3;
                }
              }
              else {
                bVar7 = 3;
              }
            }
            else {
              bVar7 = 2;
            }
          }
          else {
            bVar7 = 2;
          }
        }
        else {
          bVar7 = 2;
        }
      }
      else {
        bVar7 = 2;
      }
    }
    else {
      bVar7 = 2;
    }
  }
  else {
    bVar7 = 2;
  }
  if (bVar7 < 2) {
    bVar7 = 1;
  }
  iVar5 = 10;
  if (10 < bVar7) {
    bVar7 = 10;
  }
  *param_11 = bVar7;
  if (bVar7 == 1) {
    iVar5 = (int)_DAT_fffebbea;
  }
  else if (bVar7 == 2) {
    iVar5 = (int)_DAT_fffebbf0;
  }
  else if (bVar7 == 3) {
    iVar5 = (int)_DAT_fffebbfe;
  }
  else if (bVar7 == 4) {
    iVar5 = (int)_DAT_fffebbfc;
  }
  else if (bVar7 == 5) {
    iVar5 = (int)_DAT_fffebbfa;
  }
  else if (bVar7 == 6) {
    iVar5 = (int)_DAT_fffebbf6;
  }
  else if (bVar7 == 7) {
    iVar5 = (int)_DAT_fffebbee;
  }
  else if (bVar7 == 8) {
    iVar5 = (int)_DAT_fffebbf8;
  }
  else if (bVar7 == 9) {
    iVar5 = (int)_DAT_fffebbf4;
  }
  else if (bVar7 == 10) {
    iVar5 = (int)_DAT_fffebbec;
  }
  _DAT_fffebbec = _DAT_fffebbf4;
  _DAT_fffebbf4 = _DAT_fffebbf8;
  _DAT_fffebbf8 = _DAT_fffebbee;
  _DAT_fffebbee = _DAT_fffebbf6;
  _DAT_fffebbf6 = _DAT_fffebbfa;
  _DAT_fffebbfa = _DAT_fffebbfc;
  _DAT_fffebbfc = _DAT_fffebbfe;
  _DAT_fffebbfe = _DAT_fffebbf0;
  uVar4 = (param_8 & 0xffff) * (param_3 & 0xffff);
  _DAT_fffebbf0 = _DAT_fffebbea;
  if (uVar4 < 0x1fffe01) {
    puVar6 = (undefined *)(uVar4 >> 9);
  }
  else {
    puVar6 = &DAT_0000ffff;
  }
  if (DAT_fffebc01 == '\0') {
    DAT_fffebc00 = '\0';
    DAT_fffebc01 = '\x01';
  }
  if (DAT_fffebc00 == '\0') {
    _DAT_ffff19b0 = (undefined2)iVar5;
  }
  else {
    FUN_0016b4d8(&DAT_ffff19b0,iVar5,puVar6,param_4,&DAT_fffebbe8);
  }
  DAT_fffebc00 = 1;
  *param_10 = _DAT_ffff19b0;
  bVar1 = _DAT_fffebbf2 != 16000;
  if (bVar1) {
    iVar5 = (param_2 & 0xffff) * 0x8000 + -0x1f400000;
    if (_DAT_fffebbf2 - 16000 == 0) {
      if (iVar5 < 0) {
        _DAT_fffebbe8 = 0;
      }
      else {
        _DAT_fffebbe8 = 0xffff;
      }
    }
    else {
      iVar5 = __sdiv32_r1_by_r0(iVar5,_DAT_fffebbf2 - 16000);
      if (iVar5 < (int)&DAT_00010000) {
        if (iVar5 < 0) {
          iVar5 = 0;
        }
        _DAT_fffebbe8 = (ushort)iVar5;
      }
      else {
        _DAT_fffebbe8 = 0xffff;
      }
    }
  }
  uVar3 = 0x8000;
  if (bVar1) {
    uVar3 = _DAT_fffebbe8;
  }
  uVar4 = (uint)uVar3 * (param_7 & 0xffff);
  puVar6 = &DAT_0000ffff;
  if (uVar4 < 0x7fff8001) {
    puVar6 = (undefined *)(uVar4 >> 0xf);
  }
  uVar4 = ((uint)puVar6 & 0xffff) >> 7;
  if (uVar4 < 0x101) {
    if (0xff < uVar4) {
      uVar4 = 0xff;
    }
    *param_9 = (char)uVar4;
  }
  else {
    *param_9 = 0xff;
  }
  _DAT_fffebbea = sVar8;
  _DAT_fffebbf2 = _DAT_ffff19b0;
  return;
}

