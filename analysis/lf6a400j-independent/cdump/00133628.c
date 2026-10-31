
void FUN_00133628(char param_1,char param_2,char param_3,byte param_4,char param_5,char param_6,
                 char param_7,char param_8,short param_9,char *param_10)

{
  bool bVar1;
  
  if (param_1 == '\0') {
    DAT_fffee631 = '\0';
    goto LAB_001336c4;
  }
  if (DAT_fffee631 == '\0') {
    DAT_fffee632 = '\0';
    DAT_fffee631 = '\x01';
  }
  if (DAT_fffee632 == '\0') {
    bVar1 = false;
    if ((((param_5 != '\0') && (param_3 != '\0')) && (param_8 != '\0')) &&
       ((0x7c < param_4 &&
        (((param_6 != '\0' && (-0x3554 < param_9)) || ((param_7 != '\0' && (-0x2dfd < param_9)))))))
       ) {
      bVar1 = true;
    }
    if (bVar1) goto LAB_001336ac;
    DAT_fffee630 = '\0';
  }
  else {
LAB_001336ac:
    DAT_fffee630 = '\x01';
  }
  DAT_fffee632 = DAT_fffee630;
  if (param_2 == '@') {
    DAT_fffee630 = '\0';
    DAT_fffee632 = DAT_fffee630;
  }
LAB_001336c4:
  if (param_1 == '\0') {
    *param_10 = '\0';
  }
  else {
    *param_10 = DAT_fffee630;
  }
  return;
}

