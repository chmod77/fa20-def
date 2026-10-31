
void FUN_0015b770(void)

{
  if ((((DAT_ffff20bd == DAT_ffff20be) || (DAT_ffffab80 == '\x02')) || (DAT_ffffab80 == '\x04')) ||
     ((DAT_ffff1e01 & 2) == 0)) {
    if (((DAT_ffff20bd == '\0') && (DAT_ffffab80 != '\x02')) &&
       ((DAT_ffffab80 != '\x04' && ((DAT_ffff1e01 & 2) != 0)))) {
      DAT_ffff20c0 = '\x10';
    }
    else {
      DAT_ffff20c0 = DAT_ffff20c6;
    }
    if (DAT_ffff20bf != '\0') {
      DAT_ffff20bf = DAT_ffff20bf + -1;
    }
  }
  else {
    if ((DAT_ffff20c1 == '\x10') || (DAT_ffff20c1 == ' ')) {
      DAT_ffff20c0 = DAT_ffff20c1;
    }
    else if (DAT_ffff20bd == '\0') {
      DAT_ffff20c0 = '\x10';
    }
    else {
      DAT_ffff20c0 = DAT_ffff20c6;
    }
    DAT_ffff20bf = DAT_ffff20bf + '\x03';
    DAT_ffff3650 = DAT_ffff3650 + '\x01';
  }
  if ((DAT_ffff20c0 == '\x10') || (DAT_ffff20c0 == ' ')) {
    DAT_ffff20be = DAT_ffff20bd + '\x03';
  }
  else if (DAT_ffff20bd == '\0') {
    DAT_ffff20be = '\0';
  }
  else {
    DAT_ffff20be = DAT_ffff20bd + -1;
  }
  DAT_ffff20c1 = DAT_ffff20c0;
  return;
}

