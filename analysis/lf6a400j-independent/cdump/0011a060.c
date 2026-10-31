
/* WARNING: Removing unreachable block (ram,0x0011a172) */
/* WARNING: Removing unreachable block (ram,0x0011a176) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011a060(ushort param_1,ushort param_2,ushort param_3,ushort param_4,ushort param_5,
                 ushort param_6,ushort param_7,ushort param_8,ushort param_9,char param_10,
                 undefined2 *param_11,short *param_12)

{
  bool bVar1;
  short sVar2;
  
  bVar1 = param_6 <= param_5;
  sVar2 = 0;
  if (bVar1) {
    sVar2 = _DAT_fffee008;
    if (_DAT_fffee008 == -1) {
      _DAT_fffee008 = -1;
    }
    else {
      _DAT_fffee008 = _DAT_fffee008 + 1;
    }
  }
  else {
    _DAT_fffee008 = 0;
  }
  *param_12 = sVar2;
  if ((param_1 < 0xfa) || (param_2 < 0x7ae)) {
    if ((0x666 < param_3) || ((param_4 < 0x2580 || (bVar1)))) {
      if (bVar1) {
        if (param_7 < 0x42) {
          *param_11 = 5;
        }
        else if (((param_8 < 0xe6) || (param_7 < 0x96)) || (param_9 < 0x640)) {
          if (param_10 == '\0') {
            *param_11 = 0x1a;
          }
          else {
            *param_11 = 0x34;
          }
        }
        else {
          *param_11 = 0x4f;
        }
      }
      else {
        *param_11 = 0x14;
      }
    }
    else {
      *param_11 = 0x1a;
    }
  }
  else {
    *param_11 = 0x21;
  }
  return;
}

