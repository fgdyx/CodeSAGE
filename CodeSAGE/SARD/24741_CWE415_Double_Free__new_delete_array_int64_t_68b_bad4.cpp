#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3 = VAR4;
 /* POTENTIAL FLAW: Possibly deleting memory twice */
 delete [] VAR3;
}
#endif
