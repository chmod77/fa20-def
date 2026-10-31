
/* WARNING: Removing unreachable block (ram,0x0014a39e) */
/* WARNING: Removing unreachable block (ram,0x0014a3b0) */
/* WARNING: Removing unreachable block (ram,0x0014a3a2) */
/* WARNING: Removing unreachable block (ram,0x0014a3b8) */
/* WARNING: Removing unreachable block (ram,0x0014a3cc) */
/* WARNING: Removing unreachable block (ram,0x0014a334) */
/* WARNING: Removing unreachable block (ram,0x0014a346) */
/* WARNING: Removing unreachable block (ram,0x0014a338) */
/* WARNING: Removing unreachable block (ram,0x0014a34e) */
/* WARNING: Removing unreachable block (ram,0x0014a362) */
/* WARNING: Removing unreachable block (ram,0x0014a36a) */
/* WARNING: Removing unreachable block (ram,0x0014a3d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014a294(byte param_1)

{
  if (param_1 < 0xc) {
    for (; (DAT_fffff819 & 0x20) != 0; DAT_fffff819 = DAT_fffff819 & 0xdf) {
    }
    DAT_fffff819 = DAT_fffff819 | 0x20;
    do {
    } while (((int)(char)param_1 & 0x80U) == 0);
    DAT_fffff818 = param_1 & 0x7f;
    return;
  }
  if (param_1 < 0x18) {
    for (; (DAT_fffff839 & 0x20) != 0; DAT_fffff839 = DAT_fffff839 & 0xdf) {
    }
    do {
    } while (((int)(char)(param_1 - 0xc) & 0x80U) == 0);
    DAT_fffff839 = DAT_fffff839 | 0x20;
    DAT_fffff838 = param_1 - 0xc & 0x7f;
    return;
  }
  if (param_1 < 0x20) {
    if ((DAT_fffff858 & 0x30) == 0) {
      for (; (DAT_fffff859 & 0x20) != 0; DAT_fffff859 = DAT_fffff859 & 0xdf) {
      }
      DAT_fffff859 = DAT_fffff859 | 0x20;
      do {
      } while (((int)(char)(param_1 - 0x18) & 0x80U) == 0);
      DAT_fffff858 = param_1 - 0x18 & 0x7f;
      return;
    }
  }
  else {
    if (param_1 < 0x28) {
      do {
      } while( true );
    }
    if (param_1 < 0x30) {
      do {
      } while( true );
    }
  }
  return;
}

