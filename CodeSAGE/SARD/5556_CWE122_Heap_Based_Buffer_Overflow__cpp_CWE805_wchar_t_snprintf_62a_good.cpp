#ifndef VAR1
void FUN1(wchar_t * &VAR2);
static void FUN2()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 FUN1(VAR2);
 {
 wchar_t VAR3[100];
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 FUN3(VAR2, 100, VAR4"", VAR3);
 FUN4(VAR2);
 delete [] VAR2;
 }
}
void FUN5()
{
 FUN2();
}
#endif
