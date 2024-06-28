#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN2(VAR2);
}
#endif
