#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 /* POTENTIAL FLAW: Possibly deleting memory twice */
 delete [] VAR2;
}
#endif
