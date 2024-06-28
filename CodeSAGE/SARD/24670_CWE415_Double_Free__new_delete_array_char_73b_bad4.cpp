#ifndef VAR1
void FUN1(VAR2<char *> VAR3)
{
 char * VAR4 = VAR3.FUN2();
 /* POTENTIAL FLAW: Possibly deleting memory twice */
 delete [] VAR4;
}
#endif
