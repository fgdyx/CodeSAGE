#ifndef VAR1
static void FUN1()
{
 int VAR2;
 wchar_t * VAR3;
 wchar_t VAR4[VAR5] = VAR6"";
 VAR3 = VAR4;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
#ifdef VAR7
 wcscat(VAR3, VAR6"");
#else
 wcscat(VAR3, VAR6"");
#endif
 }
 {
 ifstream VAR8;
 VAR8.open((char *)VAR3);
 VAR8.close();
 }
}
void FUN2()
{
 FUN1();
}
#endif
