
void FUN_00124e28(ushort param_1,ushort param_2,char param_3,ushort *param_4)

{
  ushort uVar1;
  undefined1 *puVar2;
  
  if ((param_3 != '\0') &&
     (puVar2 = &DAT_ffff0600 + (uint)param_1 * 8, (int)puVar2 < (int)(uint)param_2)) {
    uVar1 = 0xffff;
    if ((int)puVar2 < (int)&DAT_00010000) {
      if ((int)puVar2 < 0) {
        puVar2 = (undefined1 *)0x0;
      }
      uVar1 = (ushort)puVar2;
    }
    *param_4 = uVar1;
    return;
  }
  *param_4 = param_2;
  return;
}

