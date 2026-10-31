
void FUN_0011b98c(char param_1,char param_2,char param_3,byte param_4,char param_5,char param_6,
                 char param_7,ushort param_8,short param_9,ushort param_10,undefined4 param_11,
                 byte param_12,ushort param_13,ushort param_14,char param_15,undefined1 *param_16,
                 undefined2 *param_17,undefined2 *param_18,undefined2 *param_19,undefined2 *param_20
                 ,undefined2 *param_21)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar1 = false;
  if ((param_1 != '\0') && (param_2 != '\0')) {
    bVar1 = true;
  }
  *param_17 = 0x7d;
  *param_20 = 0;
  *param_21 = 0xb800;
  *param_18 = 0xf00;
  *param_19 = 0xa00;
  bVar2 = false;
  if (((((param_5 != '\0') && (param_6 == '\0')) && (param_7 != '\0')) &&
      ((0xa00 < param_8 && (param_9 != 0)))) && (0xb800 < param_10)) {
    bVar2 = true;
  }
  if (((!bVar1) || (param_3 == '\0')) ||
     ((!bVar2 ||
      (((DAT_fffee05e <= param_12 || (param_13 < 0x7e)) || (uVar3 = 1, 0xeff < param_14)))))) {
    uVar3 = DAT_fffee05d;
  }
  if (((param_15 != '\0') || (!bVar1)) ||
     ((bVar1 && (((param_3 == '\0' || (DAT_fffee05c < param_4)) || (!bVar2)))))) {
    uVar3 = 0;
  }
  *param_16 = uVar3;
  DAT_fffee05c = param_4;
  DAT_fffee05e = param_12;
  DAT_fffee05d = uVar3;
  return;
}

