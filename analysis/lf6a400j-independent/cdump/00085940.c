
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00085940(uint param_1,byte param_2,uint param_3,ushort param_4,uint param_5,
                 undefined2 *param_6,byte *param_7,short *param_8)

{
  int iVar1;
  short sVar2;
  byte bVar4;
  undefined *puVar3;
  uint uVar5;
  
  iVar1 = ((param_3 & 0xffff) * (param_1 & 0xffff) >> 0xf) - ((param_3 & 0xffff) * 32000 >> 0x10);
  sVar2 = -1;
  if ((iVar1 < (int)&DAT_0000c180) && (sVar2 = 0, -0x3e81 < iVar1)) {
    sVar2 = (short)iVar1 + 16000;
  }
  *param_8 = sVar2;
  if (param_2 < 200) {
    if (param_2 < 0xa0) {
      if (param_2 < 0x78) {
        if (param_2 < 0x60) {
          if (param_2 < 0x50) {
            if (param_2 < 0x40) {
              if (param_2 < 0x30) {
                if (param_2 < 0x28) {
                  if (param_2 < 0x20) {
                    if (param_2 < 0x18) {
                      bVar4 = 3;
                    }
                    else {
                      bVar4 = 3;
                    }
                  }
                  else {
                    bVar4 = 3;
                  }
                }
                else {
                  bVar4 = 3;
                }
              }
              else {
                bVar4 = 3;
              }
            }
            else {
              bVar4 = 2;
            }
          }
          else {
            bVar4 = 2;
          }
        }
        else {
          bVar4 = 2;
        }
      }
      else {
        bVar4 = 2;
      }
    }
    else {
      bVar4 = 2;
    }
  }
  else {
    bVar4 = 2;
  }
  if (bVar4 < 2) {
    bVar4 = 1;
  }
  iVar1 = 10;
  if (10 < bVar4) {
    bVar4 = 10;
  }
  *param_7 = bVar4;
  if (bVar4 == 1) {
    iVar1 = (int)_DAT_fffebb8c;
  }
  else if (bVar4 == 2) {
    iVar1 = (int)_DAT_fffebb92;
  }
  else if (bVar4 == 3) {
    iVar1 = (int)_DAT_fffebb8a;
  }
  else if (bVar4 == 4) {
    iVar1 = (int)_DAT_fffebb88;
  }
  else if (bVar4 == 5) {
    iVar1 = (int)_DAT_fffebb86;
  }
  else if (bVar4 == 6) {
    iVar1 = (int)_DAT_fffebb82;
  }
  else if (bVar4 == 7) {
    iVar1 = (int)_DAT_fffebb90;
  }
  else if (bVar4 == 8) {
    iVar1 = (int)_DAT_fffebb84;
  }
  else if (bVar4 == 9) {
    iVar1 = (int)_DAT_fffebb80;
  }
  else if (bVar4 == 10) {
    iVar1 = (int)_DAT_fffebb8e;
  }
  _DAT_fffebb8e = _DAT_fffebb80;
  _DAT_fffebb80 = _DAT_fffebb84;
  _DAT_fffebb84 = _DAT_fffebb90;
  _DAT_fffebb90 = _DAT_fffebb82;
  _DAT_fffebb82 = _DAT_fffebb86;
  _DAT_fffebb86 = _DAT_fffebb88;
  _DAT_fffebb88 = _DAT_fffebb8a;
  _DAT_fffebb8a = _DAT_fffebb92;
  uVar5 = (param_5 & 0xffff) * (uint)param_4;
  _DAT_fffebb92 = _DAT_fffebb8c;
  if (uVar5 < 0x1fffe01) {
    puVar3 = (undefined *)(uVar5 >> 9);
  }
  else {
    puVar3 = &DAT_0000ffff;
  }
  if (DAT_fffebb94 == '\0') {
    DAT_fffebb95 = '\0';
    DAT_fffebb94 = '\x01';
  }
  if (DAT_fffebb95 == '\0') {
    _DAT_ffff19a6 = (undefined2)iVar1;
  }
  else {
    FUN_0016b4d8(&DAT_ffff19a6,iVar1,puVar3,param_4,&DAT_fffebb80);
  }
  DAT_fffebb95 = 1;
  *param_6 = _DAT_ffff19a6;
  _DAT_fffebb8c = sVar2;
  return;
}

