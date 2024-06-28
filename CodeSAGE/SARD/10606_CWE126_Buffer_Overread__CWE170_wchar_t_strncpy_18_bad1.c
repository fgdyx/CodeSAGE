#ifndef VAR1
void FUN1()
{
 goto VAR2;
VAR2:
 {
 wchar_t VAR3[150], VAR4[100];
 wmemset(VAR3, VAR5'', 149);
 VAR3[149] = VAR5'';
 wcsncpy(VAR4, VAR3, 99);
 /* FLAW: do not explicitly null terminate dest after the use of wcsncpy() */
 FUN2(VAR4);
 }
}
#endif
