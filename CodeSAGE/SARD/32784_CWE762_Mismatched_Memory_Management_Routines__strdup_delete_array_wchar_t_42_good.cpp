#ifndef VAR1
static wchar_t * FUN1(wchar_t * VAR2)
{
 VAR2 = new wchar_t[100];
 return VAR2;
}
static void FUN2()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = FUN1(VAR2);
 delete [] VAR2;
}
static wchar_t * FUN3(wchar_t * VAR2)
{
 {
 wchar_t VAR3[] = VAR4"";
 VAR2 = FUN4(VAR3);
 }
 return VAR2;
}
static void FUN5()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = FUN3(VAR2);
 free(VAR2);
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
