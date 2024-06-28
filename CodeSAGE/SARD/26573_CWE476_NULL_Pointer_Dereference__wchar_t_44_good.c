#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 FUN2(VAR2[0]);
}
static void FUN3()
{
 wchar_t * VAR2;
 void (*VAR3) (wchar_t *) = VAR4;
 VAR2 = VAR5"";
 FUN4(VAR2);
}
static void FUN5(wchar_t * VAR2)
{
 if (VAR2 != NULL)
 {
 FUN2(VAR2[0]);
 }
 else
 {
 FUN6("");
 }
}
static void FUN7()
{
 wchar_t * VAR2;
 void (*VAR3) (wchar_t *) = VAR6;
 VAR2 = NULL;
 FUN4(VAR2);
}
void FUN8()
{
 FUN3();
 FUN7();
}
#endif
