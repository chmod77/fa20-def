
void FUN_0011fdd4(byte param_1,byte param_2,byte param_3,byte *param_4)

{
  if (((param_1 <= DAT_fffee152) && (param_2 <= DAT_fffee151)) &&
     ((param_2 == 0 || (param_3 <= DAT_fffee150)))) {
    param_3 = DAT_fffee150;
  }
  *param_4 = param_3;
  DAT_fffee152 = param_1;
  DAT_fffee151 = param_2;
  DAT_fffee150 = param_3;
  return;
}

