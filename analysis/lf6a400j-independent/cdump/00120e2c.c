
/* WARNING: Removing unreachable block (ram,0x00120e8a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00120e2c(uint param_1,uint param_2,uint param_3,uint param_4,byte param_5,char param_6,
                 char param_7,char param_8,undefined4 param_9,ushort *param_10,ushort *param_11)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  
  uVar1 = LK_133E10((uint)&T_02FF54,param_2);
  uVar2 = LK_1351FC((uint)&T_02FF60,param_4);
  bVar5 = (uVar2 & 0xffff) <= (param_3 & 0xffff);
  if (param_6 == '\0') {
    uVar3 = 0x32;
  }
  else {
    uVar3 = 1;
  }
  DAT_fffee1be = bVar5;
  *param_10 = uVar3;
  DAT_fffee1bf = (uVar1 & 0xffff) <= (param_1 & 0xffff);
  if ((((!(bool)DAT_fffee1bf) || (!bVar5)) || ((param_7 == '\0' && (param_6 == '\0')))) ||
     (uVar4 = _DAT_fffee1bc, param_5 < 2)) {
    uVar4 = 0;
  }
  if ((((bool)DAT_fffee1bf) && (bVar5)) &&
     (((0xe < param_5 || ((param_6 == '\0' && (param_7 != '\0')))) && (param_8 == '\0')))) {
    uVar4 = 0xffff;
    if (_DAT_fffee1bc != 0xffff) {
      uVar4 = _DAT_fffee1bc + 1;
    }
    if (0xfffe < uVar4) {
      uVar4 = 0xffff;
    }
  }
  *param_11 = uVar4;
  *(bool *)param_9 = uVar3 <= uVar4;
  _DAT_fffee1bc = uVar4;
  return;
}

