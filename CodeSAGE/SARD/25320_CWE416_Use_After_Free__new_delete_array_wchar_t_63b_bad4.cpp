#ifndef VAR1
void FUN1(wchar_t * * VAR2)
{
 wchar_t * VAR3 = *VAR2;
 /* POTENTIAL FLAW: Use of data that may have been deleted */
 FUN2(VAR3);
}
#endif
