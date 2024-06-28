#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 unionType VAR3;
 wchar_t VAR4[VAR5] = VAR6;
 VAR2 = VAR4;
 wcscat(VAR2, VAR7"");
 VAR3.VAR8 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR9;
 {
 ifstream VAR10;
 VAR10.open((char *)VAR2);
 VAR10.close();
 }
 }
}
void FUN2()
{
 FUN1();
}
#endif
