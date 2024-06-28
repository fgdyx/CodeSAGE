#ifndef VAR1
void FUN1(VAR2 * &VAR3)
{
 /* POTENTIAL FLAW: Don't initialize data */
 ;
}
#endif
