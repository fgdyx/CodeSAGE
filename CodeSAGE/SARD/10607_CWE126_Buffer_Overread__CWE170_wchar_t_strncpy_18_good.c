#ifndef VAR1
static void FUN1()
{
 goto VAR2;
VAR2:
 {
 wchar_t VAR3[150], VAR4[100];
 wmemset(VAR3, VAR5'', 149);
 VAR3[149] = VAR5'';
 wcsncpy(VAR4, VAR3, 99);
 VAR4[99] = VAR5'';
 FUN2(VAR4);
 }
}
void FUN3()
{
 FUN1();
}
#endif
