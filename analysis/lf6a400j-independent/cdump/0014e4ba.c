
uint FUN_0014e4ba(int param_1)

{
  uint uVar1;
  
  if (((**(byte **)(param_1 + 0x74) & 1) != 0) && (**(char **)(param_1 + 100) != '\0')) {
    **(char **)(param_1 + 100) = **(char **)(param_1 + 100) + -1;
  }
  uVar1 = (int)**(char **)(param_1 + 0xc) + (uint)**(byte **)(param_1 + 0x18);
  if ((int)uVar1 < 0) {
    uVar1 = uVar1 + 8;
  }
  else if (7 < uVar1) {
    uVar1 = uVar1 - 8;
  }
  **(undefined1 **)(param_1 + 0x18) = (char)uVar1;
  uVar1 = 0;
  if ((((**(byte **)(param_1 + 0x74) & 1) != 0) && (uVar1 = 100, **(char **)(param_1 + 100) == '\0')
      ) && (**(char **)(param_1 + 0x18) == '\0')) {
    uVar1 = (int)**(char **)(param_1 + 0x74) | 2;
    **(char **)(param_1 + 0x74) = (char)uVar1;
  }
  return uVar1;
}

