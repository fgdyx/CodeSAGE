#ifndef VAR1
void FUN1(void * VAR2)
{
 long * * VAR3 = (long * *)VAR2;
 long * VAR4 = (*VAR3);
 /* POTENTIAL FLAW: Possibly deleting memory twice */
 delete VAR4;
}
#endif
