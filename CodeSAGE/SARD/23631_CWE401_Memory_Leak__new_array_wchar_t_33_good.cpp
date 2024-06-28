#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * &VAR3 = VAR2;
 VAR2 = NULL;
 wchar_t VAR4[100];
 VAR2 = VAR4;
 wcscpy(VAR2, VAR5"");
 FUN2(VAR2);
 {
 wchar_t * VAR2 = VAR3;
 ;
 }
}
static void FUN3()
{
 wchar_t * VAR2;
 wchar_t * &VAR3 = VAR2;
 VAR2 = NULL;
 VAR2 = new wchar_t[100];
 wcscpy(VAR2, VAR5"");
 FUN2(VAR2);
 {
 wchar_t * VAR2 = VAR3;
 delete[] VAR2;
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
