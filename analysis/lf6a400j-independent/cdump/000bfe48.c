
void FUN_000bfe48(char param_1,char param_2,char param_3,char param_4,undefined1 *param_5)

{
  undefined1 uVar1;
  char cVar2;
  
  cVar2 = '\x01';
  if ((param_4 != '\x01') && (cVar2 = '\x03', param_4 == '\x02')) {
    cVar2 = '\x02';
  }
  uVar1 = 0;
  if ((param_2 != '\0') && ((param_1 == cVar2 || (param_3 != '\0')))) {
    uVar1 = 1;
  }
  *param_5 = uVar1;
  return;
}

