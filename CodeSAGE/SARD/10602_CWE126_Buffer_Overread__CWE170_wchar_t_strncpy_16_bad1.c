#ifndef VAR1
void FUN1()
{
 while(1)
 {
 {
 wchar_t VAR2[150], VAR3[100];
 wmemset(VAR2, VAR4'', 149);
 VAR2[149] = VAR4'';
 wcsncpy(VAR3, VAR2, 99);
 /* FLAW: do not explicitly null terminate dest after the use of wcsncpy() */
 FUN2(VAR3);
 }
 break;
 }
}
#endif
