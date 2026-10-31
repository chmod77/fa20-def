
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012046c(byte param_1,char param_2,uint param_3,undefined2 *param_4)

{
  uint uVar1;
  undefined2 uVar2;
  
  uVar2 = _DAT_fffee178;
  if (DAT_fffee17b == '\0') {
    uVar2 = 400;
  }
  if ((DAT_fffee17a < param_1) && (param_2 == '\0')) {
    uVar1 = LK_133E10((uint)&T_02FEC4,param_3);
    uVar2 = (short)uVar1;
  }
  else if ((param_2 != '\0') && (DAT_fffee17a < param_1)) {
    uVar2 = 400;
  }
  *param_4 = uVar2;
  _DAT_fffee178 = uVar2;
  DAT_fffee17a = param_1;
  DAT_fffee17b = 1;
  return;
}

