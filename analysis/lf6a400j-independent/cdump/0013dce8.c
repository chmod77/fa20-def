
void FUN_0013dce8(void)

{
  bool bVar1;
  undefined1 *puVar2;
  char cVar3;
  
  puVar2 = &DAT_ffff3d28;
  cVar3 = '\x01';
  while( true ) {
    bVar1 = cVar3 == '\0';
    cVar3 = cVar3 + -1;
    if (bVar1) break;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2 = puVar2 + 0xc;
  }
  return;
}

