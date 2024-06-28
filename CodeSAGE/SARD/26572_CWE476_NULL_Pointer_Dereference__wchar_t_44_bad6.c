#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
 FUN2(VAR2[0]);
}
void FUN3()
{
 wchar_t * VAR2;
 void (*VAR3) (wchar_t *) = VAR4;
 /* POTENTIAL FLAW: Set data to NULL */
 VAR2 = NULL;
 FUN4(VAR2);
}
#endif
