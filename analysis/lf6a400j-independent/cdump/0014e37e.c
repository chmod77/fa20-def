
void FUN_0014e37e(int param_1)

{
  if ((**(byte **)(param_1 + 0x18) & 1) == 0) {
    if (**(char **)(param_1 + 8) == '\x02') {
      if ((**(byte **)(param_1 + 0x74) & 1) != 0) {
LAB_0014e400:
        **(undefined1 **)(param_1 + 0xc) = 0xfe;
        goto LAB_0014e478;
      }
      if ((**(byte **)(param_1 + 0x74) & 0x20) == 0) {
        if (0 < **(short **)(param_1 + 0x6c)) {
          **(undefined1 **)(param_1 + 0xc) = 2;
          goto LAB_0014e478;
        }
        if (**(short **)(param_1 + 0x6c) != 0) goto LAB_0014e400;
      }
    }
    else {
      if (((**(byte **)(param_1 + 0x74) & 0x20) == 0) || (**(short **)(param_1 + 0x6c) == 0))
      goto LAB_0014e450;
      if (((**(byte **)(param_1 + 0x74) & 0x10) != 0) && (**(short **)(param_1 + 0x14) != 0))
      goto LAB_0014e46a;
      if (((**(byte **)(param_1 + 0x74) & 8) != 0) &&
         (**(ushort **)(param_1 + 0x14) < (**(ushort **)(param_1 + 0x1c) & 0xfffe)))
      goto LAB_0014e472;
    }
  }
  else {
    if (**(char **)(param_1 + 8) == '\x02') {
      if (**(short **)(param_1 + 0x6c) < 1) {
LAB_0014e46a:
        **(undefined1 **)(param_1 + 0xc) = 0xff;
        goto LAB_0014e478;
      }
LAB_0014e472:
      **(undefined1 **)(param_1 + 0xc) = 1;
      goto LAB_0014e478;
    }
    if ((**(byte **)(param_1 + 0x74) & 0x20) == 0) {
LAB_0014e450:
      if (0 < **(short **)(param_1 + 0x6c)) goto LAB_0014e472;
      if (**(short **)(param_1 + 0x6c) != 0) goto LAB_0014e46a;
    }
  }
  **(undefined1 **)(param_1 + 0xc) = 0;
LAB_0014e478:
  **(byte **)(param_1 + 0x74) = **(byte **)(param_1 + 0x74) & 0xef;
  **(byte **)(param_1 + 0x74) = **(byte **)(param_1 + 0x74) & 0xf7;
  return;
}

