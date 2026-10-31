
void FUN_0005e182(undefined4 param_1,undefined1 *param_2)

{
  char cVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  
  pcVar2 = 
  "\v\x01\x03\r\x11\x12\x06\r\b\x11\t\x02\a\x06\x0e\x14\x05\x01\x0e\x12\x02\x13\x0f\n\x10\x04\f\n\x05\t\x0f\x06\x01\x05\v\x04"
  ;
  bVar5 = 0;
  bVar3 = 0;
  while (bVar3 < 0x1e) {
    uVar4 = 0;
    uVar7 = 0x80;
    bVar6 = 0;
    while ((bVar6 < 8 && (bVar3 < 0x1e))) {
      cVar1 = FUN_0005e20a(param_1,*pcVar2 + -1);
      if (cVar1 == '\x01') {
        uVar4 = uVar4 | uVar7;
      }
      uVar7 = uVar7 >> 1;
      bVar6 = bVar6 + 1;
      pcVar2 = pcVar2 + 1;
      bVar5 = bVar5 + 1;
      bVar3 = bVar5;
    }
    *param_2 = (char)uVar4;
    param_2 = param_2 + 1;
  }
  return;
}

