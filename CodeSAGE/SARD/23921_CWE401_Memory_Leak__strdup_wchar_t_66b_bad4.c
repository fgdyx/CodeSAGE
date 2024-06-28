#ifndef VAR1
void FUN1(wchar_t * VAR2[])
{
 wchar_t * VAR3 = VAR2[2];
 /* POTENTIAL FLAW: No deallocation of memory */
 ;
}
#endif
