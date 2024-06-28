#ifndef VAR1
void FUN1(void * VAR2)
{
 VAR3 * * VAR4 = (VAR3 * *)VAR2;
 VAR3 * VAR5 = (*VAR4);
 /* POTENTIAL FLAW: Use of data that may have been deleted */
 FUN2(VAR5[0].VAR6);
}
#endif
