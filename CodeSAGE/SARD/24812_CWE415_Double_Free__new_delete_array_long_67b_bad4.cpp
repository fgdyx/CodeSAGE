#ifndef VAR1
void FUN1(structType VAR2)
{
 long * VAR3 = VAR2.VAR4;
 /* POTENTIAL FLAW: Possibly deleting memory twice */
 delete [] VAR3;
}
#endif
