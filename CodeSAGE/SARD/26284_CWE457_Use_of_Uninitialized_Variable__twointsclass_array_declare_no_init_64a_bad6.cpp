#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 VAR3 * VAR4;
 TwoIntsClass VAR5[10];
 VAR4 = VAR5;
 /* POTENTIAL FLAW: Don't initialize data */
 ;
 FUN1(&VAR4);
}
#endif
