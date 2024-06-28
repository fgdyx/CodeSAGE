#ifndef VAR1
extern int VAR2;
void FUN1(int * VAR3)
{
 if(VAR2)
 {
 /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
 FUN2(*VAR3);
 }
}
#endif
