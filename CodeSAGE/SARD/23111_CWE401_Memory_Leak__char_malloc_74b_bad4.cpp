#ifndef VAR1
void FUN1(VAR2<int, char *> VAR3)
{
 char * VAR4 = VAR3[2];
 /* POTENTIAL FLAW: No deallocation */
 ;
}
#endif
