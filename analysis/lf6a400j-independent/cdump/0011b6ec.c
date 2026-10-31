
/* WARNING: Removing unreachable block (ram,0x0011b770) */

void FUN_0011b6ec(char param_1,char param_2,char param_3,undefined4 param_4,undefined4 param_5,
                 ushort param_6,char param_7,undefined1 *param_8,undefined2 *param_9,
                 undefined2 *param_10)

{
  bool bVar1;
  undefined1 uVar2;
  
  bVar1 = false;
  if ((param_1 != '\0') && (param_2 != '\0')) {
    bVar1 = true;
  }
  *param_9 = 0x1e00;
  *param_10 = 0xffff;
  if (((!bVar1) || (param_3 == '\0')) || (uVar2 = 0, param_6 < 0x1e00)) {
    uVar2 = DAT_fffee048;
  }
  if ((param_7 != '\0') || (!bVar1)) {
    uVar2 = 0;
  }
  *param_8 = uVar2;
  DAT_fffee048 = uVar2;
  return;
}

