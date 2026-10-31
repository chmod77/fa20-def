
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00121968(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 char param_7,char param_8,uint param_9,uint param_10,undefined1 *param_11)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  
  bVar1 = param_8 != DAT_fffee212;
  if (bVar1) {
    uVar7 = (param_1 & 0xffff) - (param_2 & 0xffff);
    if ((int)uVar7 < 0) {
      uVar7 = -uVar7;
      if ((int)uVar7 < 0) {
        uVar7 = 0;
      }
    }
    else if ((int)uVar7 < 0) {
      uVar7 = 0;
    }
    DAT_fffee204 = 3 < (uVar7 & 0xffff);
  }
  bVar2 = _DAT_fffee210 < 0x14;
  if (DAT_fffee204 == '\0') {
    _DAT_fffee210 = 0;
  }
  else {
    _DAT_fffee210 = _DAT_fffee210 + 1;
    if (_DAT_fffee210 == 0) {
      _DAT_fffee210 = -1;
    }
  }
  if (bVar1) {
    uVar7 = (param_3 & 0xffff) - (param_4 & 0xffff);
    if ((int)uVar7 < 0) {
      uVar7 = -uVar7;
      if ((int)uVar7 < 0) {
        uVar7 = 0;
      }
    }
    else if ((int)uVar7 < 0) {
      uVar7 = 0;
    }
    DAT_fffee205 = 3 < (uVar7 & 0xffff);
  }
  bVar3 = _DAT_fffee20c < 0x14;
  if (DAT_fffee205 == '\0') {
    _DAT_fffee20c = 0;
  }
  else {
    _DAT_fffee20c = _DAT_fffee20c + 1;
    if (_DAT_fffee20c == 0) {
      _DAT_fffee20c = -1;
    }
  }
  if (bVar1) {
    uVar7 = (param_5 & 0xffff) - (param_6 & 0xffff);
    if ((int)uVar7 < 0) {
      uVar7 = -uVar7;
      if ((int)uVar7 < 0) {
        uVar7 = 0;
      }
    }
    else if ((int)uVar7 < 0) {
      uVar7 = 0;
    }
    DAT_fffee206 = 3 < (uVar7 & 0xffff);
  }
  bVar4 = _DAT_fffee20e < 0x14;
  if (DAT_fffee206 == '\0') {
    _DAT_fffee20e = 0;
  }
  else {
    _DAT_fffee20e = _DAT_fffee20e + 1;
    if (_DAT_fffee20e == 0) {
      _DAT_fffee20e = -1;
    }
  }
  if (bVar1) {
    uVar7 = (param_9 & 0xffff) - (param_10 & 0xffff);
    if ((int)uVar7 < 0) {
      uVar7 = -uVar7;
      if ((int)uVar7 < 0) {
        uVar7 = 0;
      }
    }
    else if ((int)uVar7 < 0) {
      uVar7 = 0;
    }
    DAT_fffee207 = 3 < (uVar7 & 0xffff);
  }
  bVar5 = _DAT_fffee20a < 0x14;
  if (DAT_fffee207 == '\0') {
    _DAT_fffee20a = 0;
  }
  else {
    _DAT_fffee20a = _DAT_fffee20a + 1;
    if (_DAT_fffee20a == 0) {
      _DAT_fffee20a = -1;
    }
  }
  bVar6 = false;
  if (bVar1) {
    _DAT_fffee208 = 0;
  }
  else {
    bVar6 = 0x13 < _DAT_fffee208;
    _DAT_fffee208 = _DAT_fffee208 + 1;
    if (_DAT_fffee208 == 0) {
      _DAT_fffee208 = -1;
    }
  }
  if (DAT_fffee204 == '\0' || bVar2) {
    if (DAT_fffee205 == '\0' || bVar3) {
      if (DAT_fffee206 == '\0' || bVar4) {
        if (DAT_fffee207 == '\0' || bVar5) {
          if (bVar6) {
            *param_11 = 5;
          }
          else if (param_7 == '\0') {
            *param_11 = 0x80;
          }
          else {
            *param_11 = 6;
          }
        }
        else {
          *param_11 = 4;
        }
      }
      else {
        *param_11 = 3;
      }
    }
    else {
      *param_11 = 2;
    }
  }
  else {
    *param_11 = 1;
  }
  DAT_fffee212 = param_8;
  return;
}

