
void FUN_0011ebe4(char param_1,byte param_2,char param_3,byte param_4,undefined1 *param_5)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  
  bVar1 = true;
  if ((param_1 != '\0') && (param_3 != '\x01')) {
    bVar1 = false;
  }
  cVar2 = '\x01';
  if (param_2 < 0x28) {
    cVar2 = DAT_fffee11a;
  }
  if (bVar1) {
    cVar2 = '\0';
  }
  if (0x27 < param_4) {
    DAT_fffee118 = '\x01';
  }
  if (bVar1) {
    DAT_fffee118 = '\0';
  }
  if (((param_1 == '\0') || (cVar2 == '\0')) || (uVar3 = 1, DAT_fffee118 == '\0')) {
    uVar3 = DAT_fffee119;
  }
  if (param_3 == '\x01') {
    uVar3 = 0;
  }
  DAT_fffee11a = cVar2;
  *param_5 = uVar3;
  DAT_fffee119 = uVar3;
  return;
}

