
void FUN_00120770(ushort param_1,char param_2,undefined1 *param_3)

{
  int iVar1;
  
  if (param_2 == '\0') {
    param_1 = param_1 & 0xff;
    iVar1 = (int)(short)(DAT_fffee189 - param_1);
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    else if (iVar1 < 0) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = (int)DAT_fffee188;
  }
  *param_3 = (char)iVar1;
  DAT_fffee189 = (char)param_1;
  DAT_fffee188 = (char)iVar1;
  return;
}

