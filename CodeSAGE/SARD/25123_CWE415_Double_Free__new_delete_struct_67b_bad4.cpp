#ifndef VAR1
void FUN1(structType VAR2)
{
 VAR3 * VAR4 = VAR2.VAR5;
 /* POTENTIAL FLAW: Possibly deleting memory twice */
 delete VAR4;
}
#endif
