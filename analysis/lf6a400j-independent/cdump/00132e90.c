
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00132e90(ushort param_1,ushort *param_2)

{
  if ((DAT_fffee606 != '\0') && (_DAT_fffee604 <= param_1)) {
    param_1 = _DAT_fffee604;
  }
  *param_2 = param_1;
  DAT_fffee606 = 1;
  _DAT_fffee604 = param_1;
  return;
}

