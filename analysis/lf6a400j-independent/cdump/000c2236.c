
/* WARNING: Removing unreachable block (ram,0x000c2274) */
/* WARNING: Removing unreachable block (ram,0x000c2286) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c2236(char param_1,char param_2,char param_3)

{
  undefined4 unaff_r12;
  undefined4 unaff_r14;
  
  _DAT_d6046259 = unaff_r14;
  _DAT_d604625d = unaff_r12;
  if (((param_1 == '\0') && (param_2 == '\0')) && (param_3 == '\0')) {
    *_DAT_d6046265 = (_DAT_d6046261 & 0xff) != 0;
  }
  else {
    *_DAT_d6046265 = 0;
  }
  return;
}

