#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2 = VAR3;
 delete VAR2;
}
static void FUN2()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = new wchar_t;
 VAR3 = VAR2;
 FUN1();
}
static void FUN3()
{
 wchar_t * VAR2 = VAR4;
 free(VAR2);
}
static void FUN4()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 {
 wchar_t VAR5[] = VAR6"";
 VAR2 = FUN5(VAR5);
 }
 VAR4 = VAR2;
 FUN3();
}
void FUN6()
{
 FUN2();
 FUN4();
}
#endif
