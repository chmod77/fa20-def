
/* WARNING: Removing unreachable block (ram,0x0011dbc4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011dbac(uint param_1,uint param_2,char param_3,uint *param_4,char *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar3 = _DAT_fffee0dc;
  uVar2 = _DAT_fffee0d8;
  uVar1 = _DAT_fffee0d4;
  _DAT_fffee0dc = _DAT_fffee0e0;
  _DAT_fffee0d8 = uVar3;
  _DAT_fffee0d4 = uVar2;
  uVar4 = 0;
  if (param_1 <= _DAT_fffee0d0) {
    uVar4 = _DAT_fffee0d0 - param_1;
  }
  _DAT_fffee0d0 = uVar1;
  if ((0x1b87 < param_1) || (5 < uVar4)) {
    DAT_fffee0e4 = '\0';
  }
  if ((param_3 == '\x01') || (param_3 == '\x02')) {
    DAT_fffee0e4 = '\x01';
  }
  if (DAT_fffee0e4 == '\0') {
    *param_4 = param_1;
  }
  else {
    *param_4 = param_2;
  }
  *param_5 = DAT_fffee0e4;
  _DAT_fffee0e0 = param_1;
  return;
}

