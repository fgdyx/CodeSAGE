#ifndef VAR1
void FUN1()
{
 char * VAR2 = VAR3;
 /* POTENTIAL FLAW: No deallocation of memory */
 ;
}
#endif
