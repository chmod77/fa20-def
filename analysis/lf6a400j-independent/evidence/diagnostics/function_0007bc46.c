
void FUN_0007bc46(void)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar2 = DAT_0007bd9c;
  pcVar1 = DAT_0007bd94;
  if (DAT_0007bd9c[1] == '\x02') {
    if (*DAT_0007bda0 == 2) {
      if ((*DAT_0007bda4 == '\x03') || (*DAT_0007bda4 == '\x02')) {
        *DAT_0007bdac = *DAT_0007bdac | 0x20;
        pcVar1 = DAT_0007bd94;
        *DAT_0007bd94 = *pcVar2 + '@';
        pcVar1[1] = '\x02';
        *DAT_0007bda8 = 2;
        return;
      }
      *DAT_0007bd94 = '\x7f';
      pcVar1[1] = (char)DAT_0007bcb8;
      pcVar1[2] = '\"';
    }
    else {
      *DAT_0007bd94 = '\x7f';
      pcVar1[1] = (char)DAT_0007bcb8;
      pcVar1[2] = '\x13';
    }
  }
  else {
    *DAT_0007bd94 = '\x7f';
    pcVar1[1] = (char)DAT_0007bcb8;
    pcVar1[2] = '\x12';
  }
  *DAT_0007bda8 = 3;
  return;
}

