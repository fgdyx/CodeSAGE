#ifndef VAR1
void FUN1(wchar_t * * VAR2)
{
 wchar_t * VAR3 = *VAR2;
 /* POTENTIAL FLAW: Use data without initializing it */
 FUN2(VAR3);
}
#endif
