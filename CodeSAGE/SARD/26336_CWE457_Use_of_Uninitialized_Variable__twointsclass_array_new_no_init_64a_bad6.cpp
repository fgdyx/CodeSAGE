#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 VAR3 * VAR4;
 VAR4 = new VAR3[10];
 /* POTENTIAL FLAW: Don't initialize data */
 ;
 FUN1(&VAR4);
}
#endif
