#ifndef VAR1
void FUN1(int * VAR2)
{
 /* POTENTIAL FLAW: Possibly deleting memory twice */
 delete VAR2;
}
#endif
