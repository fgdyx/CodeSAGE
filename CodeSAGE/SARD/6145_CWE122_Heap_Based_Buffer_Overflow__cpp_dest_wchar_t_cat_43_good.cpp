#ifndef VAR1
static void FUN1(wchar_t * &VAR2)
{
 VAR2 = new wchar_t[100];
 VAR2[0] = VAR3'';
}
static void FUN2()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 FUN1(VAR2);
 {
 wchar_t VAR4[100];
 wmemset(VAR4, VAR3'', 100-1);
 VAR4[100-1] = VAR3'';
 wcscat(VAR2, VAR4);
 FUN3(VAR2);
 delete [] VAR2;
 }
}
void FUN4()
{
 FUN2();
}
#endif
