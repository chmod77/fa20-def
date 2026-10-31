
void FUN_000cb430(char param_1,undefined1 param_2,ushort param_3,undefined1 *param_4)

{
  bool bVar1;
  
  bVar1 = (undefined1 *)((int)(uint)param_3 >> 3) < &LAB_00001388;
  if ((param_1 != '\0') && (bVar1)) {
    *param_4 = 2;
    return;
  }
  if ((param_1 != '\0') && (!bVar1)) {
    *param_4 = 0;
    return;
  }
  *param_4 = param_2;
  return;
}

