#ifndef VAR1
void FUN1()
{
 int VAR2;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 {
 wchar_t VAR3[150], VAR4[100];
 int VAR5;
 wmemset(VAR3, VAR6'', 149);
 VAR3[149] = VAR6'';
 for(VAR5=0; VAR5 < 99; VAR5++)
 {
 VAR4[VAR5] = VAR3[VAR5];
 }
 /* FLAW: do not explicitly null terminate dest after the loop */
 FUN2(VAR4);
 }
 }
}
#endif
