#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 {
 wchar_t VAR3[10+1] = VAR4;
 wcsncpy(VAR2, VAR3, wcslen(VAR3) + 1);
 FUN2(VAR2);
 delete [] VAR2;
 }
}
static void FUN3()
{
 wchar_t * VAR2;
 void (*VAR5) (wchar_t *) = VAR6;
 VAR2 = NULL;
 VAR2 = new wchar_t[10+1];
 FUN4(VAR2);
}
void FUN5()
{
 FUN3();
}
#endif
