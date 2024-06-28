#ifndef VAR1
void FUN1();
void FUN2();
static void FUN3()
{
 wchar_t * VAR2;
 wchar_t VAR3[100];
 VAR2 = VAR3;
 wcscpy(VAR2, VAR4"");
 VAR5 = VAR2;
 FUN1();
}
static void FUN4()
{
 wchar_t * VAR2;
 wchar_t VAR3[100];
 VAR2 = VAR3;
 wcscpy(VAR2, VAR4"");
 VAR6 = VAR2;
 FUN2();
}
void FUN5()
{
 FUN3();
 FUN4();
}
#endif
