#ifndef VAR1
void FUN1(VAR2 * * VAR3);
void FUN2()
{
 VAR2 * VAR4;
 VAR4 = (VAR2 *)malloc(10*sizeof(VAR2));
 /* POTENTIAL FLAW: Don't initialize data */
 ;
 FUN1(&VAR4);
}
#endif
