#ifndef VAR1
static void FUN1()
{
 int VAR2;
 wchar_t * VAR3;
 wchar_t VAR4[100] = VAR5;
 VAR3 = VAR4;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 wcscat(VAR3, VAR6"");
 }
 if (FUN2(VAR3) <= 0)
 {
 FUN3("");
 FUN4(1);
 }
}
void FUN5()
{
 FUN1();
}
#endif
