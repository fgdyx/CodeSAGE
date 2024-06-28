#ifndef VAR1
static void FUN1()
{
 int VAR2;
 wchar_t * VAR3;
 wchar_t VAR4[250] = VAR5"";
 VAR3 = VAR4;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 wcscat(VAR3, VAR6);
 }
 FUN2(VAR3);
}
void FUN3()
{
 FUN1();
}
#endif
