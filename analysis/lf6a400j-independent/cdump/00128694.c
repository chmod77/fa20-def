
/* WARNING: Removing unreachable block (ram,0x001286b4) */

void FUN_00128694(char param_1,ushort param_2,uint param_3,undefined1 *param_4)

{
  uint uVar1;
  
  if ((param_1 != '\0') && (0x4b < param_2)) {
    uVar1 = LK_133BCC((uint)&T_030574,param_3);
    DAT_fffee364 = (char)uVar1;
  }
  *param_4 = DAT_fffee364;
  return;
}

