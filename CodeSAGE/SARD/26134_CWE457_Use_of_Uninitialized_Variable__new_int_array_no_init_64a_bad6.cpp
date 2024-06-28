#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 int * VAR3;
 VAR3 = new int[10];
 /* POTENTIAL FLAW: Don't initialize data */
 ;
 FUN1(&VAR3);
}
#endif
