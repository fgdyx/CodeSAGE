#ifndef VAR1
void FUN1(void * VAR2)
{
 wchar_t * * VAR3 = (wchar_t * *)VAR2;
 wchar_t * VAR4 = (*VAR3);
 /* POTENTIAL FLAW: Possibly deleting memory twice */
 delete [] VAR4;
}
#endif
