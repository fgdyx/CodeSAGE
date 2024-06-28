#ifndef VAR1
void FUN1(VAR2<VAR3 *> VAR4)
{
 VAR3 * VAR5 = VAR4[2];
 /* POTENTIAL FLAW: Possibly deleting memory twice */
 delete [] VAR5;
}
#endif
