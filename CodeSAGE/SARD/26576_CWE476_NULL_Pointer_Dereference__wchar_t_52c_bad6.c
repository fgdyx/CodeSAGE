#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
 FUN2(VAR2[0]);
}
#endif
