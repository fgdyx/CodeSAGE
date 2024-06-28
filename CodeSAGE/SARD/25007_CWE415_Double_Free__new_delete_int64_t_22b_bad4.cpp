#ifndef VAR1
extern int VAR2;
void FUN1(VAR3 * VAR4)
{
 if(VAR2)
 {
 /* POTENTIAL FLAW: Possibly deleting memory twice */
 delete VAR4;
 }
}
#endif
