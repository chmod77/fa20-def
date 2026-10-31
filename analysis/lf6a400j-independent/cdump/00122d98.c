
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00122d98(byte param_1,undefined2 param_2,short *param_3,uint param_4,uint param_5,
                 undefined4 param_6,undefined2 *param_7)

{
  int iVar1;
  byte bVar3;
  undefined *puVar2;
  uint uVar4;
  
  if (param_1 < 200) {
    if (param_1 < 0xa0) {
      if (param_1 < 0x78) {
        if (param_1 < 0x60) {
          if (param_1 < 0x50) {
            if (param_1 < 0x40) {
              if (param_1 < 0x30) {
                if (param_1 < 0x28) {
                  if (param_1 < 0x20) {
                    if (param_1 < 0x18) {
                      bVar3 = 3;
                    }
                    else {
                      bVar3 = 3;
                    }
                  }
                  else {
                    bVar3 = 3;
                  }
                }
                else {
                  bVar3 = 3;
                }
              }
              else {
                bVar3 = 3;
              }
            }
            else {
              bVar3 = 2;
            }
          }
          else {
            bVar3 = 2;
          }
        }
        else {
          bVar3 = 2;
        }
      }
      else {
        bVar3 = 2;
      }
    }
    else {
      bVar3 = 2;
    }
  }
  else {
    bVar3 = 2;
  }
  if (bVar3 < 2) {
    bVar3 = 1;
  }
  iVar1 = 10;
  if (10 < bVar3) {
    bVar3 = 10;
  }
  if (bVar3 == 1) {
    iVar1 = (int)*param_3;
  }
  else if (bVar3 == 2) {
    iVar1 = (int)param_3[1];
  }
  else if (bVar3 == 3) {
    iVar1 = (int)param_3[2];
  }
  else if (bVar3 == 4) {
    iVar1 = (int)param_3[3];
  }
  else if (bVar3 == 5) {
    iVar1 = (int)param_3[4];
  }
  else if (bVar3 == 6) {
    iVar1 = (int)param_3[5];
  }
  else if (bVar3 == 7) {
    iVar1 = (int)param_3[6];
  }
  else if (bVar3 == 8) {
    iVar1 = (int)param_3[7];
  }
  else if (bVar3 == 9) {
    iVar1 = (int)param_3[8];
  }
  else if (bVar3 == 10) {
    iVar1 = (int)param_3[9];
  }
  uVar4 = (param_5 & 0xffff) * (param_4 & 0xffff);
  if (uVar4 < 0x1fffe01) {
    puVar2 = (undefined *)(uVar4 >> 9);
  }
  else {
    puVar2 = &DAT_0000ffff;
  }
  if (DAT_fffee270 == '\0') {
    DAT_fffee271 = '\0';
    DAT_fffee270 = '\x01';
  }
  if (DAT_fffee271 == '\0') {
    _DAT_ffff19f4 = (undefined2)iVar1;
  }
  else {
    _DAT_ffff19f4 = param_2;
    FUN_0016b4d8(&DAT_ffff19f4,iVar1,puVar2);
  }
  DAT_fffee271 = 1;
  *param_7 = _DAT_ffff19f4;
  return;
}

