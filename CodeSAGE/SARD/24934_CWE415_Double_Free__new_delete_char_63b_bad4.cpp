#ifndef VAR1
void FUN1(char * * VAR2)
{
 char * VAR3 = *VAR2;
 /* POTENTIAL FLAW: Possibly deleting memory twice */
 delete VAR3;
}
#endif
