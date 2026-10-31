
void FUN_001298c4(char param_1,char param_2,undefined1 param_3,char param_4,char param_5,
                 ushort param_6,char param_7,ushort param_8,ushort *param_9)

{
  ushort uVar1;
  byte bVar2;
  
  bVar2 = DAT_fffee3d0;
  if (((param_6 < 0xb001) && (param_7 != '\0')) && (bVar2 = 0xff, DAT_fffee3d0 != 0xff)) {
    bVar2 = DAT_fffee3d0 + 1;
  }
  uVar1 = param_8;
  if (((param_1 == '\0') && (param_5 != '\0')) &&
     ((9 < bVar2 && ((DAT_fffee3d1 == '\0' && (uVar1 = 0xffff, param_8 != 0xffff)))))) {
    uVar1 = param_8 + 1;
  }
  if ((param_2 == '\x01') && (param_4 == '\x01')) {
    *param_9 = uVar1 >> 1;
  }
  else {
    *param_9 = uVar1;
  }
  DAT_fffee3d1 = param_3;
  DAT_fffee3d0 = bVar2;
  return;
}

