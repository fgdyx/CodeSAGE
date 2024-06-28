#ifndef VAR1
extern int VAR2;
void FUN1(VAR3 * VAR4)
{
 if(VAR2)
 {
 /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
 FUN2(VAR4->VAR5);
 delete VAR4;
 }
}
#endif
