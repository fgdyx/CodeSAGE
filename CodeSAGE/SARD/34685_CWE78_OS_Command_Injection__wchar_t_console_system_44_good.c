#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 if (FUN2(VAR2) <= 0)
 {
 FUN3("");
 FUN4(1);
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 void (*VAR3) (wchar_t *) = VAR4;
 wchar_t VAR5[100] = VAR6;
 VAR2 = VAR5;
 wcscat(VAR2, VAR7"");
 FUN6(VAR2);
}
void FUN7()
{
 FUN5();
}
#endif
