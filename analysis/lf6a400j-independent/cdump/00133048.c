
void FUN_00133048(char param_1,ushort param_2,char param_3,char param_4,char *param_5)

{
  char cVar1;
  
  if (param_1 == '\0') {
    DAT_fffee619 = '\0';
    cVar1 = DAT_fffee61a;
  }
  else {
    if (DAT_fffee619 == '\0') {
      DAT_fffee61a = '\0';
      DAT_fffee619 = '\x01';
    }
    if (((param_3 == '\0') || (param_4 == '\0')) || (0x44 < param_2)) {
      DAT_fffee618 = '\0';
      cVar1 = DAT_fffee618;
    }
    else {
      DAT_fffee618 = -1;
      cVar1 = DAT_fffee618;
      if (DAT_fffee61a != -1) {
        DAT_fffee618 = DAT_fffee61a + '\x01';
        cVar1 = DAT_fffee618;
      }
    }
  }
  DAT_fffee61a = cVar1;
  if (param_1 != '\0') {
    *param_5 = DAT_fffee618;
    return;
  }
  *param_5 = '\0';
  return;
}

