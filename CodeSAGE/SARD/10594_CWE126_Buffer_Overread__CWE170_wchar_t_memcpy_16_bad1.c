#ifndef VAR1
void FUN1()
{
 while(1)
 {
 {
 wchar_t VAR2[150], VAR3[100];
 wmemset(VAR2, VAR4'', 149);
 VAR2[149] = VAR4'';
 memcpy(VAR3, VAR2, 99*sizeof(wchar_t));
 /* FLAW: do not explicitly null terminate dest after the use of memcpy */
 FUN2(VAR3);
 }
 break;
 }
}
#endif
