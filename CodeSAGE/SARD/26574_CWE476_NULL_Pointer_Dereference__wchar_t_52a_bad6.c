#ifndef VAR1
void FUN1(wchar_t * VAR2);
void FUN2()
{
 wchar_t * VAR2;
 /* POTENTIAL FLAW: Set data to NULL */
 VAR2 = NULL;
 FUN1(VAR2);
}
#endif
