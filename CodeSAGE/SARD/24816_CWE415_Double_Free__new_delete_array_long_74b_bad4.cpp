#ifndef VAR1
void FUN1(VAR2<int, long *> VAR3)
{
 long * VAR4 = VAR3[2];
 /* POTENTIAL FLAW: Possibly deleting memory twice */
 delete [] VAR4;
}
#endif
