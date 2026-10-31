
void FUN_0010d63c(ushort param_1,ushort param_2,byte param_3,char param_4,char *param_5)

{
  DAT_fffedcce = 0x4b0e < param_1;
  DAT_fffedccf = DAT_fffedcce;
  if ((bool)DAT_fffedcce) {
    if (0x47ff < param_2) {
      DAT_fffedccf = ' ';
      DAT_fffedccd = -0x80;
      DAT_fffedcce = true;
      goto LAB_0010d682;
    }
    DAT_fffedcce = true;
    DAT_fffedccf = ' ';
  }
  DAT_fffedccd = '\0';
LAB_0010d682:
  if (((param_4 == '\0') || (param_1 < 0x4b0f)) || (0xfe < param_3)) {
    DAT_fffedccc = '\0';
  }
  else {
    DAT_fffedccc = '\x04';
  }
  *param_5 = DAT_fffedccd + DAT_fffedccf + DAT_fffedccc + DAT_fffedcce + '@';
  return;
}

