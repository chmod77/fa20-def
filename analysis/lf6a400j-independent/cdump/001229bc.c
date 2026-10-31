
/* WARNING: Removing unreachable block (ram,0x001229da) */
/* WARNING: Removing unreachable block (ram,0x001229f6) */

void FUN_001229bc(ushort param_1,ushort param_2,char param_3,ushort *param_4)

{
  if (param_1 < 0xfff0) {
    param_3 = '\0';
  }
  else if (0xfff0 < param_2) {
    param_3 = '\x01';
  }
  if ((param_3 == '\0') || (param_1 < 0xfff0)) {
    *param_4 = param_1;
  }
  else {
    *param_4 = 0xfff0;
  }
  return;
}

