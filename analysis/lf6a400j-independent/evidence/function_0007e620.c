
void FUN_0007e620(void)

{
  undefined2 *unaff_r11;
  undefined2 unaff_r12;
  undefined *unaff_r14;
  
  if (PTR_DAT_0007e660 < unaff_r14) {
    unaff_r14 = PTR_DAT_0007e660;
  }
  if ((int)((uint)unaff_r14 & 0xffff) < (int)PTR_DAT_0007e660) {
    *unaff_r11 = (short)unaff_r14;
  }
  else {
    *unaff_r11 = 0xffff;
  }
  *DAT_0007e650 = unaff_r12;
  return;
}

