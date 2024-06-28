#ifndef VAR1
static void FUN1()
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 {
 wchar_t VAR3[150], VAR4[100];
 wmemset(VAR3, VAR5'', 149);
 VAR3[149] = VAR5'';
 wcsncpy(VAR4, VAR3, 99);
 VAR4[99] = VAR5'';
 FUN3(VAR4);
 }
 }
}
static void FUN4()
{
 if(VAR6)
 {
 {
 wchar_t VAR3[150], VAR4[100];
 wmemset(VAR3, VAR5'', 149);
 VAR3[149] = VAR5'';
 wcsncpy(VAR4, VAR3, 99);
 VAR4[99] = VAR5'';
 FUN3(VAR4);
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
