#ifndef VAR1
void FUN1(wchar_t * * VAR2);
void FUN2()
{
 wchar_t * VAR3;
 /* POTENTIAL FLAW: Don't initialize data */
 ;
 FUN1(&VAR3);
}
#endif
