
void FUN_0011fda4(byte param_1,byte param_2,byte *param_3)

{
  if ((DAT_fffee14d <= param_1) && ((param_1 != 0 || (DAT_fffee14c <= param_2)))) {
    param_2 = DAT_fffee14c;
  }
  *param_3 = param_2;
  DAT_fffee14d = param_1;
  DAT_fffee14c = param_2;
  return;
}

