
void FUN_000df84c(char param_1,char param_2,byte param_3)

{
  char cVar1;
  char cVar2;
  byte in_stack_00000013;
  char *in_stack_00000014;
  
  cVar1 = '\x01';
  if (param_1 == '\0') {
    cVar1 = DAT_fffed170;
  }
  cVar2 = param_2;
  if ((cVar1 != '\0') && (param_3 < DAT_fffed171)) {
    cVar2 = '\x01';
  }
  if ((param_2 == '\0') || (in_stack_00000013 <= DAT_fffed172)) {
    *in_stack_00000014 = cVar2;
  }
  else {
    *in_stack_00000014 = '\0';
  }
  DAT_fffed172 = in_stack_00000013;
  DAT_fffed171 = param_3;
  DAT_fffed170 = cVar1;
  return;
}

