#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 fwprintf(VAR3, VAR2);
}
#endif
